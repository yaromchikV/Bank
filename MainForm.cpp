#pragma warning(disable:4244)
#pragma warning(disable:4829)
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

Database database;
Auth bank;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Bank::MainForm form;
	Application::Run(% form);
}

void Bank::MainForm::start(Object^ sender, EventArgs^ e) // Запустить форму авторизации
{
	shownAuthForm(true);
}

void Bank::MainForm::shownAuthForm(bool status) // Показана форма авторизации
{
	pictureBank->Visible = status;
	labelBankName->Visible = status;
	groupBoxAuth->Visible = status;
	labelInputLogin->Visible = status;
	textBoxLogin->Visible = status;
	labelInputPassword->Visible = status;
	textBoxPassword->Visible = status;
	buttonAuthPasswordEye->Visible = status;
	buttonLogIn->Visible = status;
	buttonRegister->Visible = status;
	if (!status) {
		textBoxLogin->Clear();
		textBoxPassword->Clear();
	}
}

void Bank::MainForm::buttonAboutProgram_Click(Object^ sender, EventArgs^ e) // Кнопка "О программе"
{
	MessageBox::Show("УО «БЕЛОРУССКИЙ ГОСУДАРСТВЕННЫЙ УНИВЕРСИТЕТ ИНФОРМАТИКИ И РАДИОЭЛЕКТРОНИКИ»\n\n" +
		"Курсовая работа по дисциплине «Конструирование программ»\n" +
		"Тема: Разработка программы реализации банковских услуг\n\n" +
		"Выполнил: студент группы 910903 Яромчик В.А.\n" +
		"Руководитель: доцент каф. ЭВМ Насуро Е.В.\n\n" +
		"Минск, 2020", "О программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

void Bank::MainForm::buttonLogIn_Click(Object^ sender, EventArgs^ e) // Кнопка "Войти в систему"
{
	std::string login = convert_S_to_s(textBoxLogin->Text);
	std::string password = convert_S_to_s(textBoxPassword->Text);
	if (login == "")
		MessageBox::Show("Введите логин!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else if (password == "")
		MessageBox::Show("Введите пароль!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else {
		bank.logIn(database, login, password);
		switch (bank.getAccess())
		{
		case ADMIN:
			MessageBox::Show("Вход выполнен!", "Добро пожаловать!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			shownAuthForm(false);
			shownAdminForm(true);
			break;
		case CLIENT:
			MessageBox::Show("Здравствуйте, " + convert_s_to_S(bank.itsClient->getFullname()) + "!", "Добро пожаловать!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			shownAuthForm(false);
			shownClientForm(true);
			break;
		case WAITING:
			MessageBox::Show("Заявка на регистрацию не подтверждена администратором!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			break;
		case CANCELLED:
			MessageBox::Show("Заявка на регистрацию была отклонена администратором!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			break;
		case NOT_EXIST:
			MessageBox::Show("Пользователь не найден!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			break;
		}
	}
}

void Bank::MainForm::buttonRegister_Click(Object^ sender, EventArgs^ e) // Кнопка "Зарегистрироваться"
{
	shownAuthForm(false);
	shownRegisterForm(true);
	buttonSendRequest->Text = "Отправить заявку";
}

void Bank::MainForm::buttonAuthPasswordEye_Click(Object^ sender, EventArgs^ e) // Кнопка "скрыть/показать пароль"
{
	textBoxPassword->UseSystemPasswordChar = 1 - textBoxPassword->UseSystemPasswordChar;
}

void Bank::MainForm::formClosing(Object^ sender, Windows::Forms::FormClosingEventArgs^ e) // Кнопка "Закрыть"
{
	if (e->CloseReason == CloseReason::UserClosing) {
		Windows::Forms::DialogResult result =
			MessageBox::Show("Вы действительно хотите завершить работу с программой?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == Windows::Forms::DialogResult::Yes) {
			if (bank.getAccess() == CLIENT) {
				database.rewriteFileOfAccounts();
				database.rewriteFileOfDepLoans();
			}
			Application::Exit();
		}
		else e->Cancel = true;
	}
	else e->Cancel = true;
}

void Bank::MainForm::shownRegisterForm(bool status) // Показана форма регистрации
{
	labelNameReg->Visible = status;
	textBoxNameReg->Visible = status;
	groupBoxReg->Visible = status;
	labelLoginReg->Visible = status;
	textBoxLoginReg->Visible = status;
	labelPasswordReg->Visible = status;
	textBoxPasswordReg->Visible = status;
	labelPasswordRepeateReg->Visible = status;
	textBoxPasswordRepeateReg->Visible = status;
	buttonSendRequest->Visible = status;
	buttonBackReg->Visible = status;
	if (!status) {
		textBoxNameReg->Clear();
		textBoxLoginReg->Clear();
		textBoxPasswordReg->Clear();
		textBoxPasswordRepeateReg->Clear();
	}
}

void Bank::MainForm::buttonBackReg_Click(Object^ sender, EventArgs^ e) // Кнопка "Назад" в окне регистрации
{
	shownRegisterForm(false);
	if (buttonSendRequest->Text == "Зарегистрировать")
		shownAdminForm(true);
	else
		shownAuthForm(true);
}

void Bank::MainForm::buttonSendRequest_Click(Object^ sender, EventArgs^ e) // Кнопка "Отправить заявку"/"Зарегистрировать"
{
	std::string fullname = convert_S_to_s(textBoxNameReg->Text);
	std::string login = convert_S_to_s(textBoxLoginReg->Text);
	removeSpaces(login);
	std::string password = convert_S_to_s(textBoxPasswordReg->Text);
	std::string passwordRepeate = convert_S_to_s(textBoxPasswordRepeateReg->Text);
	if (fullname == "" || login == "" || password == "" || passwordRepeate == "")
		MessageBox::Show("Введены не все данные!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else if (fullname.at(0) == ' ' || (fullname.at(2) == ' ') || fullname.size() < 5 || fullname.at(4) == ' ')
		MessageBox::Show("Некорректные Ф.И.О.!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else if (login.size() < 4)
		MessageBox::Show("Минимальная длина логина — 4 символа!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else if (password.size() < 5)
		MessageBox::Show("Минимальная длина пароля — 5 символов!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else if (password != passwordRepeate)
		MessageBox::Show("Пароли не совпадают!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else {
		bool isBusy = bank.isBusyLogin(database, login);
		if (isBusy)
			MessageBox::Show("Логин занят!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			if (buttonSendRequest->Text == "Отправить заявку")
			{
				bank.signUp(database, fullname, login, password, passwordRepeate);
				MessageBox::Show("Заявка на регистрацию отправлена. Ожидайте!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
				shownRegisterForm(false);
				shownAuthForm(true);
			}
			else {
				Windows::Forms::DialogResult result =
					MessageBox::Show("Вы действительно хотите добавить нового клиента?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (result == Windows::Forms::DialogResult::Yes) {
					bank.itsAdmin->addNewClient(database, fullname, login, password);
					MessageBox::Show("Клиент " + textBoxNameReg->Text + " зарегистрирован", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
					shownRegisterForm(false);
					shownAdminForm(true);
				}
			}
		}
	}
}

void Bank::MainForm::shownAdminForm(bool status) // Показана форма администратора
{
	groupBoxDataGridView->Visible = status;
	labelDataGridView->Visible = status;
	dataGridView->Visible = status;
	labelClientID->Visible = status;
	textBoxClientID->Visible = status;
	buttonAdminShowRequests->Visible = status;
	buttonShowDebtors->Visible = status;
	buttonAdminShowAccounts->Visible = status;
	buttonAdminShowDeposit->Visible = status;
	buttonAdminShowLoan->Visible = status;
	buttonAdminDeleteClient->Visible = status;
	buttonAdminAddClient->Visible = status;
	buttonLogOut->Visible = status;
	if (status) {
		labelDataGridView->Text = "Клиенты банка";
		labelClientID->Text = "Введите ID клиента";
		showClients(CLIENT);
	}
}

void Bank::MainForm::showHeaderClients()
{
	dataGridView->Rows->Clear();
	dataGridView->Columns->Clear();

	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Fullname";
	c1->HeaderText = "Ф.И.О.";
	c1->Width = 100;
	dataGridView->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Login";
	c2->HeaderText = "Логин";
	c2->Width = 100;
	dataGridView->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Password";
	c3->HeaderText = "Пароль";
	c3->Width = 100;
	dataGridView->Columns->Add(c3);

	dataGridView->TopLeftHeaderCell->Value = "ID";
	dataGridView->ColumnCount = 3;
}

void Bank::MainForm::showClients(int access) // Показать клиентов
{
	showHeaderClients();
	dataGridView->RowCount = database.getClients().size();

	int i = 0;
	for (auto it = database.getClients().begin(); it != database.getClients().end(); ++it)
	{
		if (it.second().getAccess() == access) {
			dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(it.first());
			dataGridView->Rows[i]->Cells[0]->Value = convert_s_to_S(it.second().getFullname());
			dataGridView->Rows[i]->Cells[1]->Value = convert_s_to_S(it.second().getLogin());
			dataGridView->Rows[i]->Cells[2]->Value = convert_s_to_S(it.second().getPassword());
			i++;
		}
	}
	dataGridView->RowCount = i;
	dataGridView->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView->AutoResizeColumns();
}

void Bank::MainForm::buttonAdminAddClient_Click(Object^ sender, EventArgs^ e) // Кнопка "Добавить клиента"
{
	shownAdminForm(false);
	shownAdminAddClientForm(true);
}

bool Bank::MainForm::checkClientIDField(int type) // Проверка ячейки ввода id клиента
{
	String^ wordOfType;
	if (type)
		wordOfType = "Клиента";
	else
		wordOfType = "Заявки";
	if (textBoxClientID->Text != "") {
		int id = Convert::ToInt32(textBoxClientID->Text);
		if (database.getClients().find(id) != database.getClients().end()) {
			if (database.getClients().at(id).getAccess() == type) {
				return true;
			}
		}
		else MessageBox::Show(wordOfType + " с таким ID не существует!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else MessageBox::Show("Введите ID " + wordOfType + "!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return false;
}

void Bank::MainForm::buttonAdminShowRequests_Click(Object^ sender, EventArgs^ e) // Кнопка "Показать заявки на регистрацию"
{
	if (bank.itsAdmin->isRequests(database)) {
		shownAdminForm(false);
		shownAdminRequestsForm(true);
	}
	else MessageBox::Show("Запросов нет!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

void Bank::MainForm::buttonShowDebtors_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (bank.itsAdmin->isDebtors(database)) {
		shownAdminForm(false);
		shownAdminDebtorsForm(true);
	}
	else MessageBox::Show("Должников нет!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

void Bank::MainForm::buttonAdminShowDeposit_Click(Object^ sender, EventArgs^ e) // Кнопка "Показать депозит" у администратора
{
	if (checkClientIDField(CLIENT)) {
		int id = Convert::ToInt32(textBoxClientID->Text);
		if (database.getClients().at(id).getMyDeposit().getName() != UNNAMED) {
			shownAdminForm(false);
			shownDepLoanForm(true);
			showDepositInfo(id);
		}
		else MessageBox::Show("У клиента нет активного депозита!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

void Bank::MainForm::buttonAdminDeleteClient_Click(Object^ sender, EventArgs^ e) // Кнопка "Удалить клиента"
{
	if (checkClientIDField(CLIENT)) {
		int id = Convert::ToInt32(textBoxClientID->Text);
		Windows::Forms::DialogResult result =
			MessageBox::Show("Вы действительно хотите удалить клиента " + id + "?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == Windows::Forms::DialogResult::Yes)
		{
			bank.itsAdmin->deleteClient(database, id);
			MessageBox::Show("Клиент " + id + " удален!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			showClients(CLIENT);
		}
	}
}

void Bank::MainForm::buttonLogOut_Click(Object^ sender, EventArgs^ e) // Кнопка "Выход" (из системы)
{
	Windows::Forms::DialogResult result =
		MessageBox::Show("Вы действительно хотите завершить работу с программой?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == Windows::Forms::DialogResult::Yes) {
		if (bank.getAccess() == CLIENT) {
			database.rewriteFileOfAccounts();
			database.rewriteFileOfDepLoans();
		}
		Application::Exit();
		Environment::Exit(0);
	}
}

void Bank::MainForm::shownAdminAddClientForm(bool status) // Показана форма добавления клиента
{
	shownRegisterForm(status);
	buttonSendRequest->Text = "Зарегистрировать";
}

void Bank::MainForm::shownAdminRequestsForm(bool status) // Показана форма заявок на регистрацию
{
	groupBoxDataGridView->Visible = status;
	dataGridView->Visible = status;
	labelDataGridView->Visible = status;
	labelClientID->Visible = status;
	textBoxClientID->Visible = status;
	textBoxClientID->Clear();
	buttonAcceptRequest->Visible = status;
	buttonRejectRequest->Visible = status;
	buttonBackAdminRequests->Visible = status;
	if (status) {
		labelDataGridView->Text = "Заявки на регистрацию";
		labelClientID->Text = "Введите ID заявки";
		showClients(WAITING);
	}
}

void Bank::MainForm::shownAdminDebtorsForm(bool status)
{
	groupBoxDataGridView->Visible = status;
	dataGridView->Visible = status;
	labelDataGridView->Visible = status;
	buttonBackDebtors->Visible = status;
	if (status) {
		labelDataGridView->Text = "Должники по займу";
		showDebtors();
	}
}

void Bank::MainForm::showHeaderDebtors()
{
	dataGridView->Rows->Clear();
	dataGridView->Columns->Clear();

	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Fullname";
	c1->HeaderText = "Ф.И.О.";
	c1->Width = 100;
	dataGridView->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Balance";
	c2->HeaderText = "Сумма";
	c2->Width = 100;
	dataGridView->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Date";
	c3->HeaderText = "Дата просрочки";
	c3->Width = 100;
	dataGridView->Columns->Add(c3);

	dataGridView->TopLeftHeaderCell->Value = "ID";
	dataGridView->ColumnCount = 3;
}

void Bank::MainForm::showDebtors()
{
	showHeaderDebtors();
	dataGridView->RowCount = database.getClients().size();

	std::string currentDate = getCurrentDate();

	int i = 0;
	for (auto it = database.getClients().begin(); it != database.getClients().end(); ++it)
	{
		if (currentDate > it.second().getMyLoan().getDate() && it.second().getMyLoan().getName() != UNNAMED) {
			dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(it.first());
			dataGridView->Rows[i]->Cells[0]->Value = convert_s_to_S(it.second().getFullname());
			dataGridView->Rows[i]->Cells[1]->Value = Convert::ToString(it.second().getMyLoan().getBalance());
			dataGridView->Rows[i]->Cells[2]->Value = convert_s_to_S(it.second().getMyLoan().getDate());
			i++;
		}
	}
	dataGridView->RowCount = i;
	dataGridView->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView->AutoResizeColumns();
}

void Bank::MainForm::buttonBackDebtors_Click(System::Object^ sender, System::EventArgs^ e)
{
	shownAdminDebtorsForm(false);
	shownAdminForm(true);
}

void Bank::MainForm::buttonAcceptRequest_Click(Object^ sender, EventArgs^ e) // Кнопка "Принять заявку"
{
	if (checkClientIDField(WAITING)) {
		int id = Convert::ToInt32(textBoxClientID->Text);
		Windows::Forms::DialogResult result =
			MessageBox::Show("Вы действительно хотите зарегистрировать клиента " + id + "?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == Windows::Forms::DialogResult::Yes)
		{
			bank.itsAdmin->confirmRequest(database, id);
			MessageBox::Show("Заявка " + id + " принята!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			showClients(WAITING);
		}
	}
}

void Bank::MainForm::buttonRejectRequest_Click(Object^ sender, EventArgs^ e) // Кнопка "Отклонить заявку"
{
	if (checkClientIDField(WAITING)) {
		int id = Convert::ToInt32(textBoxClientID->Text);
		Windows::Forms::DialogResult result =
			MessageBox::Show("Вы действительно хотите отклонить заявку на регистрацию " + id + "?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == Windows::Forms::DialogResult::Yes)
		{
			bank.itsAdmin->cancelRequest(database, id);
			MessageBox::Show("Заявка " + id + " отклонена!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			showClients(WAITING);
		}
	}
}

void Bank::MainForm::buttonBackAdminRequests_Click(Object^ sender, EventArgs^ e) // Кнопка "Назад" в форме заявок на регистрацию
{
	shownAdminRequestsForm(false);
	shownAdminForm(true);
}

void Bank::MainForm::shownAdminAccountsForm(bool status) // Показать форма счетов клиента
{
	groupBoxDataGridView->Visible = status;
	labelDataGridView->Visible = status;
	dataGridView->Visible = status;
	labelClientID->Visible = status;
	comboBoxAccountID->Visible = status;
	buttonFreezeAccount->Visible = status;
	buttonUnfreezeAccount->Visible = status;
	buttonBackAdminAccounts->Visible = status;
	if (status) {
		labelDataGridView->Text = "Счета";
		labelClientID->Text = "Выберите счёт";
		int id = Convert::ToInt32(textBoxClientID->Text);
		showAccounts(id);
		for (auto it = database.getClients().at(id).getAccounts().begin(); it != database.getClients().at(id).getAccounts().end(); ++it) {
			comboBoxAccountID->Items->Add(it.first());	
		}
		comboBoxAccountID->Text = comboBoxAccountID->Items[0]->ToString();
	}
	else {
		comboBoxAccountID->Items->Clear();
	}
}

void Bank::MainForm::showAccounts(int id) // Показать счета
{
	showAccountsHeader();
	dataGridView->RowCount = database.getClients().at(id).getAccounts().size();
	dataGridView->ColumnCount = 3;

	int i = 0;
	for (auto it = database.getClients().at(id).getAccounts().begin(); it != database.getClients().at(id).getAccounts().end(); ++it)
	{
		dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(it.first());
		dataGridView->Rows[i]->Cells[0]->Value = convert_s_to_S(it.second().getName());
		dataGridView->Rows[i]->Cells[1]->Value = Convert::ToDouble(it.second().getBalance());
		if (it.second().getAvailability())
			dataGridView->Rows[i]->Cells[2]->Value = "Активен";
		else
			dataGridView->Rows[i]->Cells[2]->Value = "Заморожен";
		i++;
	}

	dataGridView->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView->AutoResizeColumns();
}

void Bank::MainForm::showAccountsHeader() // Показать шапку таблицы счетов
{
	dataGridView->Rows->Clear();
	dataGridView->Columns->Clear();

	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Name";
	c1->HeaderText = "Название";
	c1->Width = 150;
	dataGridView->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Balance";
	c2->HeaderText = "Баланс";
	c2->Width = 150;
	dataGridView->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Availability";
	c3->HeaderText = "Состояние";
	c3->Width = 150;
	dataGridView->Columns->Add(c3);

	dataGridView->TopLeftHeaderCell->Value = "ID";
}

void Bank::MainForm::buttonFreezeAccount_Click(Object^ sender, EventArgs^ e) // Кнопка "Заморозить счёт"
{
	int clientID = Convert::ToInt32(textBoxClientID->Text);
	int id = Convert::ToInt64(comboBoxAccountID->Text);
	if (database.getClients().at(clientID).getAccounts().at(id).getAvailability()) {
		bank.itsAdmin->freezeAccount(database, clientID, id);
		MessageBox::Show("Счёт " + id + " заморожен!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		showAccounts(clientID);
	}
	else MessageBox::Show("Счёт и без того заморожен!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

void Bank::MainForm::buttonUnfreezeAccount_Click(Object^ sender, EventArgs^ e) // Кнопка "Разморозить счёт"
{
	int clientID = Convert::ToInt32(textBoxClientID->Text);
	int id = Convert::ToInt64(comboBoxAccountID->Text);
	if (!database.getClients().at(clientID).getAccounts().at(id).getAvailability()) {
		bank.itsAdmin->unfreezeAccount(database, clientID, id);
		MessageBox::Show("Счёт " + id + " разморожен!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		showAccounts(clientID);
	}
	else MessageBox::Show("Счёт и без того активен!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

void Bank::MainForm::buttonBackAdminAccounts_Click(Object^ sender, EventArgs^ e) // Кнопка "Назад" в форме счетов клиента
{
	shownAdminAccountsForm(false);
	shownAdminForm(true);
}

void Bank::MainForm::buttonAdminShowLoan_Click(Object^ sender, EventArgs^ e) // Кнопка "Показать заём" в форме администратора
{
	if (checkClientIDField(CLIENT)) {
		int id = Convert::ToInt32(textBoxClientID->Text);
		if (database.getClients().at(id).getMyLoan().getName() != UNNAMED) {
			shownAdminForm(false);
			shownDepLoanForm(true);
			showLoanInfo(id);
		}
		else MessageBox::Show("У клиента нет активного займа!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

void Bank::MainForm::buttonAdminShowAccounts_Click(Object^ sender, EventArgs^ e) // Кнопка "Показать счета" в форме администратора
{
	if (checkClientIDField(CLIENT)) {
		shownAdminForm(false);
		shownAdminAccountsForm(true);
	}
}

void Bank::MainForm::shownDepLoanForm(bool status) // Показана форма депозита/займа
{
	groupBoxDepLoan->Visible = status;
	textBoxNameDepLoan->Visible = status;
	textBoxBalanceDepLoan->Visible = status;
	textBoxRateDepLoan->Visible = status;
	textBoxDateDepLoan->Visible = status;
	textBoxAvailabilityDepLoan->Visible = status;
	labelNameDepLoan->Visible = status;
	labelBalanceDepLoan->Visible = status;
	labelRateDepLoan->Visible = status;
	labelDateDepLoan->Visible = status;
	labelAvailabilityDepLoan->Visible = status;
	buttonBackAdminDepLoan->Visible = status;
	if (!status)
		textBoxClientID->Clear();
}

void Bank::MainForm::showDepositInfo(int id) // Показать информацию о депозите
{
	textBoxNameDepLoan->Text = convert_s_to_S(database.getClients().at(id).getMyDeposit().getName());
	textBoxBalanceDepLoan->Text = Convert::ToString(database.getClients().at(id).getMyDeposit().getBalance());
	textBoxRateDepLoan->Text = Convert::ToString(database.getClients().at(id).getMyDeposit().getRate()) + "%";
	textBoxDateDepLoan->Text = convert_s_to_S(database.getClients().at(id).getMyDeposit().getDate());
	if (database.getClients().at(id).getMyDeposit().getAvailability())
		textBoxAvailabilityDepLoan->Text = "Активен";
	else
		textBoxAvailabilityDepLoan->Text = "Завершён";
}

void Bank::MainForm::showLoanInfo(int id) // Показать информацию о займе
{
	textBoxNameDepLoan->Text = convert_s_to_S(database.getClients().at(id).getMyLoan().getName());
	textBoxBalanceDepLoan->Text = Convert::ToString(database.getClients().at(id).getMyLoan().getBalance());
	textBoxRateDepLoan->Text = Convert::ToString(database.getClients().at(id).getMyLoan().getRate()) + "%";
	textBoxDateDepLoan->Text = convert_s_to_S(database.getClients().at(id).getMyLoan().getDate());
	if (database.getClients().at(id).getMyLoan().getAvailability())
		textBoxAvailabilityDepLoan->Text = "Активен";
	else
		textBoxAvailabilityDepLoan->Text = "Просрочен";
}

void Bank::MainForm::buttonBackAdminDepLoan_Click(Object^ sender, EventArgs^ e) // Кнопка "Назад" в форме депозита/займа у администратора
{
	shownDepLoanForm(false);
	if (bank.getAccess() == ADMIN)
		shownAdminForm(true);
	else
		shownClientForm(true);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Bank::MainForm::shownClientForm(bool status) // Показана форма клиента
{
	dataGridView->Visible = status;
	groupBoxDataGridView->Visible = status;
	labelDataGridView->Visible = status;
	labelClientID->Visible = status;
	comboBoxAccountID->Visible = status;
	buttonAccountActions->Visible = status;
	buttonClientDeposit->Visible = status;
	buttonClientLoan->Visible = status;
	buttonOpenDeposit->Visible = status;
	buttonGetLoan->Visible = status;
	buttonClientCreateAccount->Visible = status;
	buttonLogOut->Visible = status;
	if (status) {
		labelDataGridView->Text = "Счета клиента " + Convert::ToString(bank.itsClient->getID());
		labelClientID->Text = "Выберите счёт";
		showClientAccounts();
		comboBoxAccountID->Items->Clear();
		for (auto it = bank.itsClient->getAccounts().begin(); it != bank.itsClient->getAccounts().end(); ++it) {
			comboBoxAccountID->Items->Add(it.first());
		}
		comboBoxAccountID->Text = comboBoxAccountID->Items[0]->ToString();
		if (!bank.itsClient->getMyLoan().getAvailability())
			MessageBox::Show("Уважаемый " + convert_s_to_S(bank.itsClient->getFullname()) + ", Ваш заём просрочен. Ваши счета заморожены, обратитесь в банк!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	status = !bank.itsClient->isAllAccountsFrozen();
	textBoxAccountActionsID->Enabled = status;
	buttonAccountActions->Enabled = status;
	buttonOpenDeposit->Enabled = status;
	buttonGetLoan->Enabled = status;
	buttonClientCreateAccount->Enabled = status;
}

void Bank::MainForm::showClientAccounts() // Показана форма счетов у клиента
{
	int id = Convert::ToInt32(bank.itsClient->getID());

	showAccountsHeader();
	dataGridView->RowCount = bank.itsClient->getAccounts().size();
	dataGridView->ColumnCount = 3;

	int i = 0;
	for (auto it = bank.itsClient->getAccounts().begin(); it != bank.itsClient->getAccounts().end(); ++it)
	{
		dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(it.first());
		dataGridView->Rows[i]->Cells[0]->Value = convert_s_to_S(it.second().getName());
		dataGridView->Rows[i]->Cells[1]->Value = Convert::ToDouble(it.second().getBalance());
		if (it.second().getAvailability())
			dataGridView->Rows[i]->Cells[2]->Value = "Активен";
		else
			dataGridView->Rows[i]->Cells[2]->Value = "Заморожен";
		i++;
	}

	dataGridView->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView->AutoResizeColumns();
}

void Bank::MainForm::buttonClientDeposit_Click(Object^ sender, EventArgs^ e) // Кнопка "Мой депозит" у клиента
{
	if (bank.itsClient->getMyDeposit().getName() != UNNAMED) {
		shownClientForm(false);
		shownDepLoanForm(true);
		showClientDepositInfo();
		if (!bank.itsClient->isAllAccountsFrozen()) {
			if (!bank.itsClient->getMyDeposit().getAvailability()) {
				shownDepLoanControls(true);
				buttonTransferDeposit->Visible = true;
				numericAmountDepLoan->Value = Convert::ToDecimal(bank.itsClient->getMyDeposit().getBalance());
				numericAmountDepLoan->Enabled = false;
				MessageBox::Show("Срок действия депозита истёк. Вы можете перевести средства на расчётный счёт.", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}
	else MessageBox::Show("У Вас нет активного депозита!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

void Bank::MainForm::showClientDepositInfo() // Показать информацию о депозите клиента
{
	textBoxNameDepLoan->Text = convert_s_to_S(bank.itsClient->getMyDeposit().getName());
	textBoxBalanceDepLoan->Text = Convert::ToString(bank.itsClient->getMyDeposit().getBalance());
	textBoxRateDepLoan->Text = Convert::ToString(bank.itsClient->getMyDeposit().getRate()) + "%";
	textBoxDateDepLoan->Text = convert_s_to_S(bank.itsClient->getMyDeposit().getDate());
	if (bank.itsClient->getMyDeposit().getAvailability())
		textBoxAvailabilityDepLoan->Text = "Активен";
	else
		textBoxAvailabilityDepLoan->Text = "Завершён";
}

void Bank::MainForm::buttonClientLoan_Click(Object^ sender, EventArgs^ e) // Кнопка "Мой заём" у клиента
{
	if (bank.itsClient->getMyLoan().getName() != UNNAMED) {
		shownClientForm(false);
		shownDepLoanForm(true);
		showClientLoanInfo();
		if (!bank.itsClient->isAllAccountsFrozen()) {
			if (bank.itsClient->getMyLoan().getAvailability()) {
				shownDepLoanControls(true);
				numericAmountDepLoan->Maximum = Convert::ToDecimal(bank.itsClient->getMyLoan().getBalance());
				buttonPaymentLoan->Visible = true;
			}
		}
	}
	else MessageBox::Show("У Вас нет активного займа!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

void Bank::MainForm::showClientLoanInfo() // Показать информацию о займе клиента
{
	textBoxNameDepLoan->Text = convert_s_to_S(bank.itsClient->getMyLoan().getName());
	textBoxBalanceDepLoan->Text = Convert::ToString(bank.itsClient->getMyLoan().getBalance());
	textBoxRateDepLoan->Text = Convert::ToString(bank.itsClient->getMyLoan().getRate()) + "%";
	textBoxDateDepLoan->Text = convert_s_to_S(bank.itsClient->getMyLoan().getDate());
	if (bank.itsClient->getMyLoan().getAvailability())
		textBoxAvailabilityDepLoan->Text = "Активен";
	else
		textBoxAvailabilityDepLoan->Text = "Просрочен";
}

void Bank::MainForm::shownDepLoanControls(bool status) // Показаны элементы управления депозитом/займом
{
	labelIDDepLoan->Visible = status;
	labelAmountDepLoan->Visible = status;
	comboBoxAccountIDDepLoan->Visible = status;
	numericAmountDepLoan->Visible = status;
	buttonBackMyDepLoan->Visible = status;
	if (status) {
		for (auto it = bank.itsClient->getAccounts().begin(); it != bank.itsClient->getAccounts().end(); ++it) {
			if (it.second().getAvailability())
				comboBoxAccountIDDepLoan->Items->Add(it.first());
		}
		comboBoxAccountIDDepLoan->Text = comboBoxAccountIDDepLoan->Items[0]->ToString();
	}
	else {
		comboBoxAccountIDDepLoan->Items->Clear();
		numericAmountDepLoan->Value = numericAmountDepLoan->Minimum;
	}
}

void Bank::MainForm::buttonPaymentLoan_Click(Object^ sender, EventArgs^ e) // Кнопка "Платёж по займу"
{
	int id = Convert::ToInt64(comboBoxAccountIDDepLoan->SelectedItem);
	double amount = Convert::ToDouble(numericAmountDepLoan->Value);
	if (!bank.itsClient->isAmountLessTheBalance(id, amount))
		MessageBox::Show("Недостаточно средств на счету!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else {
		Windows::Forms::DialogResult result =
			MessageBox::Show("Вы действительно хотите внести платёж по займу со счёта " + Convert::ToString(id) + " в размере " + Convert::ToString(amount) + "?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == Windows::Forms::DialogResult::Yes) {
			bank.itsClient->makeLoanPayment(id, amount);
			MessageBox::Show("Платёж внесён!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (bank.itsClient->getMyLoan().getName() == UNNAMED)
				MessageBox::Show("Заём закрыт!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		shownDepLoanForm(false);
		shownDepLoanControls(false);
		buttonPaymentLoan->Visible = false;
		shownClientForm(true);
	}
}

void Bank::MainForm::buttonTransferDeposit_Click(Object^ sender, EventArgs^ e) // Кнопка "Перевод с закрытого депозита"
{
	int id = Convert::ToInt64(comboBoxAccountIDDepLoan->SelectedItem);
	bank.itsClient->closeDeposit(id);
	MessageBox::Show("Депозит закрыт!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	shownDepLoanForm(false);
	shownDepLoanControls(false);
	buttonTransferDeposit->Visible = false;
	shownClientForm(true);
}

void Bank::MainForm::buttonBackMyDepLoan_Click(Object^ sender, EventArgs^ e) // Кнопка "Назад" в форме "Мой депозит/заём"
{
	shownDepLoanControls(false);
	shownDepLoanForm(false);
	buttonPaymentLoan->Visible = false;
	buttonTransferDeposit->Visible = false;
	shownClientForm(true);
}

void Bank::MainForm::buttonOpenDeposit_Click(Object^ sender, EventArgs^ e) // Кнопка "Оформить депозит"
{
	if (bank.itsClient->getMyDeposit().getName() == UNNAMED) {
		shownClientForm(false);
		shownOpenDepositForm(true);
		buttonOpenDepositContinue->Text = "Продолжить";
	}
	else MessageBox::Show("У Вас уже есть активный депозит!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

void Bank::MainForm::shownNewDepLoanForm(bool status) // Показана форма нового депозита/займа
{
	groupBoxNewDepLoan->Visible = status;
	labelNewDepLoanName->Visible = status;
	labelNewDepLoanAmount->Visible = status;
	labelNewDepLoanAccountID->Visible = status;
	labelNewDepLoanTime->Visible = status;
	textBoxNewDepLoanName->Visible = status;
	numericNewDepLoanAmount->Visible = status;
	comboBoxNewDepLoanAccountID->Visible = status;
	radioButtonNewDepLoan6m->Visible = status;
	radioButtonNewDepLoan12m->Visible = status;
	radioButtonNewDepLoan9m->Visible = status;
	radioButtonNewDepLoan18m->Visible = status;
	buttonBackNewDepLoan->Visible = status;
	if (status) {
		comboBoxNewDepLoanAccountID->Items->Clear();
		for (auto it = bank.itsClient->getAccounts().begin(); it != bank.itsClient->getAccounts().end(); ++it) {
			if (it.second().getAvailability())
				comboBoxNewDepLoanAccountID->Items->Add(it.first());
		}
		comboBoxNewDepLoanAccountID->Text = comboBoxNewDepLoanAccountID->Items[0]->ToString();
	}
}

bool Bank::MainForm::checkNewDepLoanForm(int type) // Проверка нового депозита/займа
{
	String^ typeName;
	if (type)
		typeName = "депозита";
	else
		typeName = "займа";
	std::string name = convert_S_to_s(textBoxNewDepLoanName->Text);
	removeSpaces(name);		
	if (name != "") {
		if (name.size() < 5) 
			MessageBox::Show("Минимальная длина названия " + typeName + " — 5 символов!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			int id = Convert::ToInt64(comboBoxNewDepLoanAccountID->SelectedItem);
			double amount = Convert::ToDouble(numericNewDepLoanAmount->Value);
			if (!bank.itsClient->isAmountLessTheBalance(id, amount) && type)
				MessageBox::Show("Недостаточно средств на счету!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				return true;
		}
	}
	else MessageBox::Show("Введите название " + typeName + "!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return false;
}


void Bank::MainForm::shownOpenDepositForm(bool status) // Показана форма оформления депозита
{
	shownNewDepLoanForm(status);
	labelNewDepLoanAmount->Text = "Введите сумму депозита";
	labelNewDepLoanAccountID->Text = "Выберите счёт списания";
	labelNewDepLoanTime->Text = "Выберите срок депозита";
	buttonOpenDepositContinue->Visible = status;
}

void Bank::MainForm::buttonOpenDepositContinue_Click(Object^ sender, EventArgs^ e) // Кнопка "Продолжить"/"Оформить депозит"
{
	if (checkNewDepLoanForm(true)) {
		std::string name = convert_S_to_s(textBoxNewDepLoanName->Text);
		removeSpaces(name);
		int id = Convert::ToInt64(comboBoxNewDepLoanAccountID->SelectedItem);
		double amount = Convert::ToDouble(numericNewDepLoanAmount->Value);
		int time = 0;
		if (radioButtonNewDepLoan6m->Checked) time = 6;
		else if (radioButtonNewDepLoan9m->Checked) time = 9;
		else if (radioButtonNewDepLoan12m->Checked) time = 12;
		else if (radioButtonNewDepLoan18m->Checked) time = 18;
		if (buttonOpenDepositContinue->Text != "Оформить") {
			shownOpenDepositForm(false);
			shownCheckOpenDepositForm(true);
			buttonOpenDepositContinue->Visible = true;
			buttonOpenDepositContinue->Text = "Оформить";
			textBoxСheckNewDepLoanName->Text = textBoxNewDepLoanName->Text;
			textBoxСheckNewDepLoanAccount->Text = comboBoxNewDepLoanAccountID->SelectedItem->ToString();
			textBoxСheckNewDepLoanAmount->Text = Convert::ToString(numericNewDepLoanAmount->Value);
			textBoxCheckNewDepLoanRate->Text = Convert::ToString(DEPOSIT_RATE) + "%";
			textBoxСheckNewDepLoanDate->Text = convert_s_to_S(getModifiedDate(getCurrentDate(), time));
			textBoxCheckNewDepLoanTotalAmount->Text = Convert::ToString(bank.itsClient->calculateTotalSum(DEPOSIT_RATE, amount, time));
		}
		else {
			bank.itsClient->openDeposit(name, id, amount, time);
			MessageBox::Show("Депозит оформлен!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			shownCheckOpenDepositForm(false);
			shownClientForm(true);
		}
	}
}

void Bank::MainForm::shownCheckNewDepLoanForm(bool status) // Показана форма проверки нового депозита/займа
{
	labelCheckDepLoan->Visible = status;
	groupBoxСheckNewDepLoan->Visible = status;
	labelСheckNewDepLoanName->Visible = status;
	labelСheckNewDepLoanAmount->Visible = status;
	labelСheckNewDepLoanDate->Visible = status;
	labelСheckNewDepLoanTotalAmount->Visible = status;
	labelСheckNewDepLoanRate->Visible = status;
	textBoxСheckNewDepLoanName->Visible = status;
	textBoxСheckNewDepLoanAccount->Visible = status;
	textBoxСheckNewDepLoanAmount->Visible = status;
	textBoxСheckNewDepLoanDate->Visible = status;
	textBoxCheckNewDepLoanTotalAmount->Visible = status;
	textBoxCheckNewDepLoanRate->Visible = status;
	buttonBackCheckDepLoan->Visible = status;
	if (!status) {
		textBoxNewDepLoanName->Clear();
		numericNewDepLoanAmount->Value = numericNewDepLoanAmount->Minimum;
		comboBoxNewDepLoanAccountID->Items->Clear();
	}
}

void Bank::MainForm::shownCheckOpenDepositForm(bool status) // Показана форма проверки оформления депозита
{
	shownCheckNewDepLoanForm(status);
	labelСheckOpenDepositAccount->Visible = status;
	buttonOpenDepositContinue->Visible = status;
}

void Bank::MainForm::buttonGetLoan_Click(Object^ sender, EventArgs^ e) // Кнопка "Оформить заём"
{
	if (bank.itsClient->getMyLoan().getName() == UNNAMED) {
		shownClientForm(false);
		shownGetLoanForm(true);
		buttonGetLoanContinue->Text = "Продолжить";
	}
	else MessageBox::Show("У Вас уже есть активный заём!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

void Bank::MainForm::shownGetLoanForm(bool status) // Показана форма оформления займа
{
	shownNewDepLoanForm(status);
	labelNewDepLoanAmount->Text = "Введите сумму займа";
	labelNewDepLoanAccountID->Text = "Выберите счёт зачисления";
	labelNewDepLoanTime->Text = "Выберите срок займа";
	buttonGetLoanContinue->Visible = status;
	if (status)
		numericNewDepLoanAmount->Maximum = Convert::ToDecimal(bank.itsClient->calculateMaxAmount());
}

void Bank::MainForm::buttonBackNewDepLoan_Click(Object^ sender, EventArgs^ e) // Кнопка "Назад" в форме нового депозита/займа
{
	shownNewDepLoanForm(false);
	buttonOpenDepositContinue->Visible = false;
	buttonGetLoanContinue->Visible = false;
	shownClientForm(true);
}

void Bank::MainForm::buttonGetLoanContinue_Click(Object^ sender, EventArgs^ e) // Кнопка "Продолжить"/"Оформить заём"
{
	if (checkNewDepLoanForm(false)) {
		std::string name = convert_S_to_s(textBoxNewDepLoanName->Text);
		removeSpaces(name);
		int id = Convert::ToInt64(comboBoxNewDepLoanAccountID->SelectedItem);
		double amount = Convert::ToDouble(numericNewDepLoanAmount->Text);
		int time = 0;
		if (radioButtonNewDepLoan6m->Checked) time = 6;
		else if (radioButtonNewDepLoan9m->Checked) time = 9;
		else if (radioButtonNewDepLoan12m->Checked) time = 12;
		else if (radioButtonNewDepLoan18m->Checked) time = 18;
		if (buttonGetLoanContinue->Text != "Оформить") {
			shownGetLoanForm(false);
			shownCheckGetLoanForm(true);
			buttonGetLoanContinue->Visible = true;
			buttonGetLoanContinue->Text = "Оформить";
			textBoxСheckNewDepLoanName->Text = textBoxNewDepLoanName->Text;
			textBoxСheckNewDepLoanAccount->Text = comboBoxNewDepLoanAccountID->SelectedItem->ToString();
			textBoxСheckNewDepLoanAmount->Text = Convert::ToString(numericNewDepLoanAmount->Value);
			textBoxCheckNewDepLoanRate->Text = Convert::ToString(LOAN_RATE) + "%";
			textBoxСheckNewDepLoanDate->Text = convert_s_to_S(getModifiedDate(getCurrentDate(), time));
			textBoxCheckNewDepLoanTotalAmount->Text = Convert::ToString(bank.itsClient->calculateTotalSum(LOAN_RATE, amount, time));
		}
		else {
			bank.itsClient->getLoan(id, name, amount, time);
			MessageBox::Show("Заём оформлен!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			shownCheckGetLoanForm(false);
			shownClientForm(true);
		}
	}
}

void Bank::MainForm::shownCheckGetLoanForm(bool status) // Показана форма проверки оформления займа
{
	shownCheckNewDepLoanForm(status);
	labelСheckGetLoanAccount->Visible = status;
	buttonGetLoanContinue->Visible = status;
}

void Bank::MainForm::buttonBackCheckDepLoan_Click(Object^ sender, EventArgs^ e) // Кнопка "Назад" в форме проверки депозита/займа
{
	shownCheckGetLoanForm(false);
	shownCheckOpenDepositForm(false);
	textBoxNewDepLoanName->Clear();
	numericNewDepLoanAmount->Value = numericNewDepLoanAmount->Minimum;
	comboBoxNewDepLoanAccountID->Items->Clear();
	shownClientForm(true);
}

void Bank::MainForm::buttonAccountActions_Click(Object^ sender, EventArgs^ e) // Кнопка "Действия со счетами"
{
	std::string accountID = convert_S_to_s(comboBoxAccountID->Text);
	int id = Convert::ToInt64(comboBoxAccountID->Text);
	if (bank.itsClient->getAccounts().find(id) != bank.itsClient->getAccounts().end()) {
		if (bank.itsClient->getAccounts().at(id).getAvailability()) {
			shownClientForm(false);
			shownAccountActionsForm(true);
		}
		else MessageBox::Show("Данный счёт заморожен, операции недоступны!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else MessageBox::Show("Счёта с таким ID не существует!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

void Bank::MainForm::shownAccountActionsForm(bool status) // Показана форма действий со счетами
{
	groupBoxAccountActions->Visible = status;
	labelAccountActionsID->Visible = status;
	labelAccountActionsName->Visible = status;
	labelAccountActionsBalance->Visible = status;
	textBoxAccountActionsID->Visible = status;
	textBoxAccountActionsName->Visible = status;
	textBoxAccountActionsBalance->Visible = status;
	buttonBackAccountActions->Visible = status;
	shownAccountActionsButtons(status);
	if (status) {
		int id = Convert::ToInt64(comboBoxAccountID->Text);
		textBoxAccountActionsID->Text = Convert::ToString(id);
		textBoxAccountActionsName->Text = convert_s_to_S(bank.itsClient->getAccounts().at(id).getName());
		textBoxAccountActionsBalance->Text = Convert::ToString(bank.itsClient->getAccounts().at(id).getBalance());
	}
}

void Bank::MainForm::shownAccountActionsButtons(bool status) // Показаны кнокпи действий со счетами
{
	buttonAccountActionsRecharge->Visible = status;
	buttonAccountActionsWithdraw->Visible = status;
	buttonAccountActionsTransfer->Visible = status;
	buttonAccountActionsFreeze->Visible = status;
	buttonAccountActionsClose->Visible = status;
}

void Bank::MainForm::buttonAccountActionsRecharge_Click(Object^ sender, EventArgs^ e) // Кнопка "Пополнение счёта"
{
	shownAccountActionsButtons(false);
	labelChargeAmount->Visible = true;
	numericChargeAmount->Value = numericChargeAmount->Minimum;
	numericChargeAmount->Visible = true;
	buttonRecharge->Visible = true;
}
 
void Bank::MainForm::buttonRecharge_Click(Object^ sender, EventArgs^ e) // Кнопка "Пополнить счёт"
{
	int id = Convert::ToInt64(comboBoxAccountID->Text);
	double amount = Convert::ToDouble(numericChargeAmount->Value);
	Windows::Forms::DialogResult result =
		MessageBox::Show("Вы действительно хотите пополнить счёт " + Convert::ToString(id) + " на " + Convert::ToString(amount) + "?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == Windows::Forms::DialogResult::Yes) {
		bank.itsClient->recharge(id, amount);
		MessageBox::Show("Баланс пополнен!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		labelChargeAmount->Visible = false;
		numericChargeAmount->Visible = false;
		buttonRecharge->Visible = false;
		shownAccountActionsButtons(true);
		textBoxAccountActionsBalance->Text = Convert::ToString(bank.itsClient->getAccounts().at(id).getBalance());
	}
}

void Bank::MainForm::buttonAccountActionsWithdraw_Click(Object^ sender, EventArgs^ e) // Кнопка "Списание со счёта"
{
	shownAccountActionsButtons(false);
	labelChargeAmount->Visible = true;
	numericChargeAmount->Value = numericChargeAmount->Minimum;
	numericChargeAmount->Visible = true;
	buttonWithdraw->Visible = true;
}

void Bank::MainForm::buttonWithdraw_Click(Object^ sender, EventArgs^ e) // Кнопка "Списать со счёта"
{
	int id = Convert::ToInt64(comboBoxAccountID->Text);
	double amount = Convert::ToDouble(numericChargeAmount->Value);
	if (bank.itsClient->isAmountLessTheBalance(id, amount)) {
		Windows::Forms::DialogResult result =
			MessageBox::Show("Вы действительно хотите снять " + Convert::ToString(amount) + " со счёта " + Convert::ToString(id) + "?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == Windows::Forms::DialogResult::Yes) {
			bank.itsClient->withdraw(id, amount);
			MessageBox::Show("Сумма " + Convert::ToString(amount) + " списана с баланса!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			labelChargeAmount->Visible = false;
			numericChargeAmount->Visible = false;
			buttonWithdraw->Visible = false;
			shownAccountActionsButtons(true);
			textBoxAccountActionsBalance->Text = Convert::ToString(bank.itsClient->getAccounts().at(id).getBalance());
		}
	}
	else MessageBox::Show("Недостаточно средств!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

void Bank::MainForm::buttonAccountActionsTransfer_Click(Object^ sender, EventArgs^ e) // Кнопка "Перевод средств"
{
	shownAccountActionsButtons(false);
	labelChargeAmount->Visible = true;
	numericChargeAmount->Value = numericChargeAmount->Minimum;
	numericChargeAmount->Visible = true;
	labelTransferAccountID->Visible = true;
	textBoxTransferAccountID->Clear();
	textBoxTransferAccountID->Visible = true;
	buttonTransfer->Visible = true;
}

void Bank::MainForm::buttonTransfer_Click(Object^ sender, EventArgs^ e) // Кнопка "Перевести средства"
{ 
	std::string receiverID = convert_S_to_s(textBoxTransferAccountID->Text);
	if (receiverID != "") 
	{
		int id = Convert::ToInt64(comboBoxAccountID->Text);
		int receiver = std::stoi(receiverID);
		double amount = Convert::ToDouble(numericChargeAmount->Value);
		if (amount < 0.01) {
			if (bank.itsClient->isAmountLessTheBalance(id, amount + bank.itsClient->calculateComission(amount))) {
				Windows::Forms::DialogResult result =
					MessageBox::Show("Вы действительно хотите перевести " + Convert::ToString(amount) + " на счёт " + Convert::ToString(receiver) +
						"? Комиссия: " + Convert::ToString(COMISSION) + "%", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (result == Windows::Forms::DialogResult::Yes) {
					bank.itsClient->transfer(id, receiver, amount);
					MessageBox::Show("Перевод совершён!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
					labelChargeAmount->Visible = false;
					numericChargeAmount->Visible = false;
					labelTransferAccountID->Visible = false;
					textBoxTransferAccountID->Visible = false;
					buttonTransfer->Visible = false;
					shownAccountActionsButtons(true);
					textBoxAccountActionsBalance->Text = Convert::ToString(bank.itsClient->getAccounts().at(id).getBalance());
				}
			}
			else MessageBox::Show("Недостаточно средств!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else MessageBox::Show("Минимальная сумма перевода — 0.01!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else MessageBox::Show("Введите номер счёта!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
	

void Bank::MainForm::buttonAccountActionsFreeze_Click(Object^ sender, EventArgs^ e) // Кнопка "Заморозить мой счёт"
{
	int id = Convert::ToInt64(comboBoxAccountID->Text);
	Windows::Forms::DialogResult result =
		MessageBox::Show("Вы действительно хотите заморозить счёт " + comboBoxAccountID->Text + "? Для разморозки необходимо обращаться в банк.", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == Windows::Forms::DialogResult::Yes) {
		bank.itsClient->freezeAccount(id);
		MessageBox::Show("Счёт " + id + " заморожен!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		shownAccountActionsForm(false);
		shownClientForm(true);
	}
}

void Bank::MainForm::buttonAccountActionsClose_Click(Object^ sender, EventArgs^ e) // Кнопка "Закрыть мой счёт"
{
	if (bank.itsClient->getAccounts().size() > 1) {
		int id = Convert::ToInt64(comboBoxAccountID->Text);
		if (bank.itsClient->getAccounts().at(id).getBalance() == 0) {
			Windows::Forms::DialogResult result =
				MessageBox::Show("Вы действительно хотите закрыть счёт " + comboBoxAccountID->Text + "? Отменить это действие будет невозможно.", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == Windows::Forms::DialogResult::Yes) {
				bank.itsClient->closeAccount(id);
				MessageBox::Show("Счёт " + id + " закрыт!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				shownAccountActionsForm(false);
				shownClientForm(true);
			}
		}
		else MessageBox::Show("Нельзя закрыть счёт, на котором есть средства!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else MessageBox::Show("Нельзя закрыть единственный счёт!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

void Bank::MainForm::buttonBackAccountActions_Click(Object^ sender, EventArgs^ e) // Кнопка "Назад" в действиях со счетами
{
	shownAccountActionsForm(false);
	labelChargeAmount->Visible = false;
	numericChargeAmount->Visible = false;
	labelTransferAccountID->Visible = false;
	textBoxTransferAccountID->Visible = false;
	buttonRecharge->Visible = false;
	buttonWithdraw->Visible = false;
	buttonTransfer->Visible = false;
	numericChargeAmount->Value = numericChargeAmount->Minimum;
	textBoxTransferAccountID->Clear();
	shownClientForm(true);
}

void Bank::MainForm::buttonClientCreateAccount_Click(Object^ sender, EventArgs^ e) // Кнопка "Открыть новый счёт"
{
	if (bank.itsClient->getAccounts().size() < MAX_NUMBER_OF_ACCOUNTS) {
		shownClientForm(false);
		shownClientCreateAccountForm(true);
	}
	else MessageBox::Show("Достигнуто максимальное количество счетов: " + Convert::ToString(MAX_NUMBER_OF_ACCOUNTS) + "!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

void Bank::MainForm::shownClientCreateAccountForm(bool status) // Показана форма открытия счёта
{
	groupBoxNewAccount->Visible = status;
	labelNewAccountName->Visible = status;
	textBoxNewAccountName->Visible = status;
	buttonCreateNewAccount->Visible = status;
	buttonBackNewAccount->Visible = status;
	if (!status)
		textBoxNewAccountName->Clear();
}

void Bank::MainForm::buttonCreateNewAccount_Click(Object^ sender, EventArgs^ e) // Кнопка "Создать счёт"
{
	std::string name = convert_S_to_s(textBoxNewAccountName->Text);
	removeSpaces(name);
	if (name != "") {
		if (name.size() < 5)
			MessageBox::Show("Минимальная длина названия счёта — 5 символов!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			Windows::Forms::DialogResult result =
				MessageBox::Show("Вы действительно хотите открыть новый счёт?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == Windows::Forms::DialogResult::Yes) {
				bank.itsClient->createAccount(name);
				MessageBox::Show("Расчётный счёт создан!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				shownClientCreateAccountForm(false);
				shownClientForm(true);
			}
		}
	}
	else MessageBox::Show("Введите название нового счёта!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

void Bank::MainForm::buttonBackNewAccount_Click(Object^ sender, EventArgs^ e) // Кнопка "Назад" в форме открытия счёта
{
	shownClientCreateAccountForm(false);
	shownClientForm(true);
}
