#pragma once
#include "Auth.h"

namespace Bank {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MainForm() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ textBoxNameReg;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBoxReg;
	private: System::Windows::Forms::MaskedTextBox^ textBoxLoginReg;
	private: System::Windows::Forms::Label^ labelPasswordRepeateReg;
	private: System::Windows::Forms::TextBox^ textBoxPasswordRepeateReg;
	private: System::Windows::Forms::Label^ labelLoginReg;
	private: System::Windows::Forms::Label^ labelPasswordReg;
	private: System::Windows::Forms::TextBox^ textBoxPasswordReg;
	private: System::Windows::Forms::Button^ buttonRegister;
	private: System::Windows::Forms::Label^ labelNameReg;
	private: System::Windows::Forms::Button^ buttonSendRequest;
	private: System::Windows::Forms::PictureBox^ pictureBank;
	private: System::Windows::Forms::Label^ labelBankName;
	private: System::Windows::Forms::Button^ buttonLogIn;
	private: System::Windows::Forms::Button^ buttonAuthPasswordEye;
	private: System::Windows::Forms::Label^ labelInputLogin;
	private: System::Windows::Forms::Label^ labelInputPassword;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Button^ buttonBackReg;
	private: System::Windows::Forms::ImageList^ imageList;
	private: System::Windows::Forms::ToolStripMenuItem^ buttonAboutProgram;
	private: System::Windows::Forms::GroupBox^ groupBoxAuth;
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	private: System::Windows::Forms::MaskedTextBox^ textBoxClientID;
	private: System::Windows::Forms::Button^ buttonLogOut;
	private: System::Windows::Forms::Button^ buttonAdminShowRequests;
	private: System::Windows::Forms::GroupBox^ groupBoxDataGridView;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::Label^ labelDataGridView;
	private: System::Windows::Forms::Label^ labelClientID;
	private: System::Windows::Forms::Button^ buttonAdminShowAccounts;
	private: System::Windows::Forms::Button^ buttonAdminDeleteClient;
	private: System::Windows::Forms::Button^ buttonAdminShowLoan;
	private: System::Windows::Forms::Button^ buttonAdminShowDeposit;
	private: System::Windows::Forms::Button^ buttonAdminAddClient;
	private: System::Windows::Forms::Button^ buttonAcceptRequest;
	private: System::Windows::Forms::Button^ buttonRejectRequest;
	private: System::Windows::Forms::Button^ buttonBackAdminRequests;

	private: System::Windows::Forms::Button^ buttonFreezeAccount;
	private: System::Windows::Forms::Button^ buttonUnfreezeAccount;
	private: System::Windows::Forms::Button^ buttonBackAdminAccounts;
	private: System::Windows::Forms::GroupBox^ groupBoxDepLoan;
	private: System::Windows::Forms::Label^ labelNameDepLoan;
	private: System::Windows::Forms::Label^ labelAvailabilityDepLoan;
	private: System::Windows::Forms::Label^ labelBalanceDepLoan;
	private: System::Windows::Forms::TextBox^ textBoxAvailabilityDepLoan;
	private: System::Windows::Forms::TextBox^ textBoxNameDepLoan;
	private: System::Windows::Forms::Label^ labelDateDepLoan;
	private: System::Windows::Forms::TextBox^ textBoxBalanceDepLoan;
	private: System::Windows::Forms::Label^ labelRateDepLoan;
	private: System::Windows::Forms::TextBox^ textBoxRateDepLoan;
	private: System::Windows::Forms::TextBox^ textBoxDateDepLoan;
	private: System::Windows::Forms::Button^ buttonBackAdminDepLoan;
	private: System::Windows::Forms::Button^ buttonAccountActions;
	private: System::Windows::Forms::Button^ buttonGetLoan;
	private: System::Windows::Forms::Button^ buttonOpenDeposit;
	private: System::Windows::Forms::Button^ buttonClientLoan;
	private: System::Windows::Forms::Button^ buttonClientDeposit;
	private: System::Windows::Forms::Button^ buttonClientCreateAccount;
	private: System::Windows::Forms::Button^ buttonPaymentLoan;
	private: System::Windows::Forms::Label^ labelAmountDepLoan;
	private: System::Windows::Forms::Label^ labelIDDepLoan;
	private: System::Windows::Forms::NumericUpDown^ numericAmountDepLoan;
	private: System::Windows::Forms::ComboBox^ comboBoxAccountIDDepLoan;
	private: System::Windows::Forms::Button^ buttonTransferDeposit;
	private: System::Windows::Forms::Button^ buttonOpenDepositContinue;
	private: System::Windows::Forms::GroupBox^ groupBoxNewDepLoan;
	private: System::Windows::Forms::MaskedTextBox^ textBoxNewDepLoanName;
	private: System::Windows::Forms::NumericUpDown^ numericNewDepLoanAmount;
	private: System::Windows::Forms::Label^ labelNewDepLoanName;
	private: System::Windows::Forms::ComboBox^ comboBoxNewDepLoanAccountID;
	private: System::Windows::Forms::RadioButton^ radioButtonNewDepLoan18m;
	private: System::Windows::Forms::RadioButton^ radioButtonNewDepLoan12m;
	private: System::Windows::Forms::RadioButton^ radioButtonNewDepLoan9m;
	private: System::Windows::Forms::RadioButton^ radioButtonNewDepLoan6m;
	private: System::Windows::Forms::Label^ labelNewDepLoanTime;
	private: System::Windows::Forms::Label^ labelNewDepLoanAmount;
	private: System::Windows::Forms::Label^ labelNewDepLoanAccountID;
	private: System::Windows::Forms::Label^ labelCheckDepLoan;
	private: System::Windows::Forms::GroupBox^ groupBoxСheckNewDepLoan;
	private: System::Windows::Forms::Label^ labelСheckNewDepLoanRate;
	private: System::Windows::Forms::TextBox^ textBoxCheckNewDepLoanRate;





	private: System::Windows::Forms::Label^ labelСheckNewDepLoanName;
private: System::Windows::Forms::Label^ labelСheckNewDepLoanTotalAmount;


private: System::Windows::Forms::Label^ labelСheckNewDepLoanAmount;
private: System::Windows::Forms::TextBox^ textBoxCheckNewDepLoanTotalAmount;




private: System::Windows::Forms::TextBox^ textBoxСheckNewDepLoanName;

private: System::Windows::Forms::Label^ labelСheckNewDepLoanDate;
private: System::Windows::Forms::TextBox^ textBoxСheckNewDepLoanAmount;
private: System::Windows::Forms::Label^ labelСheckOpenDepositAccount;



private: System::Windows::Forms::TextBox^ textBoxСheckNewDepLoanAccount;
private: System::Windows::Forms::TextBox^ textBoxСheckNewDepLoanDate;



	private: System::Windows::Forms::Button^ buttonGetLoanContinue;
	private: System::Windows::Forms::Button^ buttonBackCheckDepLoan;











	private: System::Windows::Forms::Button^ buttonAccountActionsFreeze;
	private: System::Windows::Forms::Button^ buttonAccountActionsWithdraw;
	private: System::Windows::Forms::Button^ buttonAccountActionsRecharge;
	private: System::Windows::Forms::Button^ buttonAccountActionsClose;
	private: System::Windows::Forms::Button^ buttonAccountActionsTransfer;
	private: System::Windows::Forms::GroupBox^ groupBoxAccountActions;
	private: System::Windows::Forms::Label^ labelAccountActionsID;
	private: System::Windows::Forms::Label^ labelAccountActionsName;
	private: System::Windows::Forms::TextBox^ textBoxAccountActionsID;
	private: System::Windows::Forms::Label^ labelAccountActionsBalance;
	private: System::Windows::Forms::TextBox^ textBoxAccountActionsName;
	private: System::Windows::Forms::TextBox^ textBoxAccountActionsBalance;
	private: System::Windows::Forms::Button^ buttonBackAccountActions;
	private: System::Windows::Forms::NumericUpDown^ numericChargeAmount;
	private: System::Windows::Forms::Button^ buttonRecharge;
	private: System::Windows::Forms::Label^ labelChargeAmount;
	private: System::Windows::Forms::Button^ buttonWithdraw;
	private: System::Windows::Forms::Button^ buttonTransfer;
	private: System::Windows::Forms::MaskedTextBox^ textBoxTransferAccountID;
	private: System::Windows::Forms::Label^ labelTransferAccountID;
	private: System::Windows::Forms::Button^ buttonBackNewAccount;
	private: System::Windows::Forms::GroupBox^ groupBoxNewAccount;
	private: System::Windows::Forms::MaskedTextBox^ textBoxNewAccountName;
	private: System::Windows::Forms::Button^ buttonCreateNewAccount;
	private: System::Windows::Forms::Label^ labelNewAccountName;
	private: System::Windows::Forms::Button^ buttonBackNewDepLoan;
	private: System::Windows::Forms::Button^ buttonBackMyDepLoan;
private: System::Windows::Forms::ComboBox^ comboBoxAccountID;
private: System::Windows::Forms::Label^ labelСheckGetLoanAccount;
private: System::Windows::Forms::Button^ buttonShowDebtors;
private: System::Windows::Forms::Button^ buttonBackDebtors;


	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBoxNameReg = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBoxReg = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxLoginReg = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelPasswordRepeateReg = (gcnew System::Windows::Forms::Label());
			this->textBoxPasswordRepeateReg = (gcnew System::Windows::Forms::TextBox());
			this->labelLoginReg = (gcnew System::Windows::Forms::Label());
			this->labelPasswordReg = (gcnew System::Windows::Forms::Label());
			this->textBoxPasswordReg = (gcnew System::Windows::Forms::TextBox());
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->labelNameReg = (gcnew System::Windows::Forms::Label());
			this->buttonSendRequest = (gcnew System::Windows::Forms::Button());
			this->pictureBank = (gcnew System::Windows::Forms::PictureBox());
			this->labelBankName = (gcnew System::Windows::Forms::Label());
			this->buttonLogIn = (gcnew System::Windows::Forms::Button());
			this->buttonAuthPasswordEye = (gcnew System::Windows::Forms::Button());
			this->labelInputLogin = (gcnew System::Windows::Forms::Label());
			this->labelInputPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonBackReg = (gcnew System::Windows::Forms::Button());
			this->imageList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->buttonAboutProgram = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxAuth = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->textBoxClientID = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonLogOut = (gcnew System::Windows::Forms::Button());
			this->buttonAdminShowRequests = (gcnew System::Windows::Forms::Button());
			this->groupBoxDataGridView = (gcnew System::Windows::Forms::GroupBox());
			this->labelDataGridView = (gcnew System::Windows::Forms::Label());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->labelClientID = (gcnew System::Windows::Forms::Label());
			this->buttonAdminShowAccounts = (gcnew System::Windows::Forms::Button());
			this->buttonAdminDeleteClient = (gcnew System::Windows::Forms::Button());
			this->buttonAdminShowLoan = (gcnew System::Windows::Forms::Button());
			this->buttonAdminShowDeposit = (gcnew System::Windows::Forms::Button());
			this->buttonAdminAddClient = (gcnew System::Windows::Forms::Button());
			this->buttonAcceptRequest = (gcnew System::Windows::Forms::Button());
			this->buttonRejectRequest = (gcnew System::Windows::Forms::Button());
			this->buttonBackAdminRequests = (gcnew System::Windows::Forms::Button());
			this->buttonFreezeAccount = (gcnew System::Windows::Forms::Button());
			this->buttonUnfreezeAccount = (gcnew System::Windows::Forms::Button());
			this->buttonBackAdminAccounts = (gcnew System::Windows::Forms::Button());
			this->groupBoxDepLoan = (gcnew System::Windows::Forms::GroupBox());
			this->labelNameDepLoan = (gcnew System::Windows::Forms::Label());
			this->labelAvailabilityDepLoan = (gcnew System::Windows::Forms::Label());
			this->labelBalanceDepLoan = (gcnew System::Windows::Forms::Label());
			this->textBoxAvailabilityDepLoan = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNameDepLoan = (gcnew System::Windows::Forms::TextBox());
			this->labelDateDepLoan = (gcnew System::Windows::Forms::Label());
			this->textBoxBalanceDepLoan = (gcnew System::Windows::Forms::TextBox());
			this->labelRateDepLoan = (gcnew System::Windows::Forms::Label());
			this->textBoxRateDepLoan = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateDepLoan = (gcnew System::Windows::Forms::TextBox());
			this->buttonBackAdminDepLoan = (gcnew System::Windows::Forms::Button());
			this->buttonAccountActions = (gcnew System::Windows::Forms::Button());
			this->buttonGetLoan = (gcnew System::Windows::Forms::Button());
			this->buttonOpenDeposit = (gcnew System::Windows::Forms::Button());
			this->buttonClientLoan = (gcnew System::Windows::Forms::Button());
			this->buttonClientDeposit = (gcnew System::Windows::Forms::Button());
			this->buttonClientCreateAccount = (gcnew System::Windows::Forms::Button());
			this->buttonPaymentLoan = (gcnew System::Windows::Forms::Button());
			this->labelAmountDepLoan = (gcnew System::Windows::Forms::Label());
			this->labelIDDepLoan = (gcnew System::Windows::Forms::Label());
			this->numericAmountDepLoan = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBoxAccountIDDepLoan = (gcnew System::Windows::Forms::ComboBox());
			this->buttonTransferDeposit = (gcnew System::Windows::Forms::Button());
			this->buttonOpenDepositContinue = (gcnew System::Windows::Forms::Button());
			this->groupBoxNewDepLoan = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxNewDepLoanName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->numericNewDepLoanAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelNewDepLoanName = (gcnew System::Windows::Forms::Label());
			this->comboBoxNewDepLoanAccountID = (gcnew System::Windows::Forms::ComboBox());
			this->radioButtonNewDepLoan18m = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNewDepLoan12m = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNewDepLoan9m = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNewDepLoan6m = (gcnew System::Windows::Forms::RadioButton());
			this->labelNewDepLoanTime = (gcnew System::Windows::Forms::Label());
			this->labelNewDepLoanAmount = (gcnew System::Windows::Forms::Label());
			this->labelNewDepLoanAccountID = (gcnew System::Windows::Forms::Label());
			this->labelCheckDepLoan = (gcnew System::Windows::Forms::Label());
			this->groupBoxСheckNewDepLoan = (gcnew System::Windows::Forms::GroupBox());
			this->labelСheckGetLoanAccount = (gcnew System::Windows::Forms::Label());
			this->labelСheckNewDepLoanRate = (gcnew System::Windows::Forms::Label());
			this->textBoxCheckNewDepLoanRate = (gcnew System::Windows::Forms::TextBox());
			this->labelСheckNewDepLoanName = (gcnew System::Windows::Forms::Label());
			this->labelСheckNewDepLoanTotalAmount = (gcnew System::Windows::Forms::Label());
			this->labelСheckNewDepLoanAmount = (gcnew System::Windows::Forms::Label());
			this->textBoxCheckNewDepLoanTotalAmount = (gcnew System::Windows::Forms::TextBox());
			this->textBoxСheckNewDepLoanName = (gcnew System::Windows::Forms::TextBox());
			this->labelСheckNewDepLoanDate = (gcnew System::Windows::Forms::Label());
			this->textBoxСheckNewDepLoanAmount = (gcnew System::Windows::Forms::TextBox());
			this->labelСheckOpenDepositAccount = (gcnew System::Windows::Forms::Label());
			this->textBoxСheckNewDepLoanAccount = (gcnew System::Windows::Forms::TextBox());
			this->textBoxСheckNewDepLoanDate = (gcnew System::Windows::Forms::TextBox());
			this->buttonGetLoanContinue = (gcnew System::Windows::Forms::Button());
			this->buttonBackCheckDepLoan = (gcnew System::Windows::Forms::Button());
			this->buttonAccountActionsFreeze = (gcnew System::Windows::Forms::Button());
			this->buttonAccountActionsWithdraw = (gcnew System::Windows::Forms::Button());
			this->buttonAccountActionsRecharge = (gcnew System::Windows::Forms::Button());
			this->buttonAccountActionsClose = (gcnew System::Windows::Forms::Button());
			this->buttonAccountActionsTransfer = (gcnew System::Windows::Forms::Button());
			this->groupBoxAccountActions = (gcnew System::Windows::Forms::GroupBox());
			this->labelAccountActionsID = (gcnew System::Windows::Forms::Label());
			this->labelAccountActionsName = (gcnew System::Windows::Forms::Label());
			this->textBoxAccountActionsID = (gcnew System::Windows::Forms::TextBox());
			this->labelAccountActionsBalance = (gcnew System::Windows::Forms::Label());
			this->textBoxAccountActionsName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAccountActionsBalance = (gcnew System::Windows::Forms::TextBox());
			this->buttonBackAccountActions = (gcnew System::Windows::Forms::Button());
			this->numericChargeAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonRecharge = (gcnew System::Windows::Forms::Button());
			this->labelChargeAmount = (gcnew System::Windows::Forms::Label());
			this->buttonWithdraw = (gcnew System::Windows::Forms::Button());
			this->buttonTransfer = (gcnew System::Windows::Forms::Button());
			this->textBoxTransferAccountID = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelTransferAccountID = (gcnew System::Windows::Forms::Label());
			this->buttonBackNewAccount = (gcnew System::Windows::Forms::Button());
			this->groupBoxNewAccount = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxNewAccountName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonCreateNewAccount = (gcnew System::Windows::Forms::Button());
			this->labelNewAccountName = (gcnew System::Windows::Forms::Label());
			this->buttonBackNewDepLoan = (gcnew System::Windows::Forms::Button());
			this->buttonBackMyDepLoan = (gcnew System::Windows::Forms::Button());
			this->comboBoxAccountID = (gcnew System::Windows::Forms::ComboBox());
			this->buttonShowDebtors = (gcnew System::Windows::Forms::Button());
			this->buttonBackDebtors = (gcnew System::Windows::Forms::Button());
			this->groupBoxReg->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBank))->BeginInit();
			this->groupBoxAuth->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->groupBoxDataGridView->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->groupBoxDepLoan->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericAmountDepLoan))->BeginInit();
			this->groupBoxNewDepLoan->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericNewDepLoanAmount))->BeginInit();
			this->groupBoxСheckNewDepLoan->SuspendLayout();
			this->groupBoxAccountActions->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericChargeAmount))->BeginInit();
			this->groupBoxNewAccount->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxNameReg
			// 
			resources->ApplyResources(this->textBoxNameReg, L"textBoxNameReg");
			this->textBoxNameReg->HidePromptOnLeave = true;
			this->textBoxNameReg->Name = L"textBoxNameReg";
			this->textBoxNameReg->RejectInputOnFirstFailure = true;
			this->textBoxNameReg->ResetOnPrompt = false;
			this->textBoxNameReg->ResetOnSpace = false;
			// 
			// groupBoxReg
			// 
			this->groupBoxReg->Controls->Add(this->textBoxLoginReg);
			this->groupBoxReg->Controls->Add(this->labelPasswordRepeateReg);
			this->groupBoxReg->Controls->Add(this->textBoxPasswordRepeateReg);
			this->groupBoxReg->Controls->Add(this->labelLoginReg);
			this->groupBoxReg->Controls->Add(this->labelPasswordReg);
			this->groupBoxReg->Controls->Add(this->textBoxPasswordReg);
			resources->ApplyResources(this->groupBoxReg, L"groupBoxReg");
			this->groupBoxReg->Name = L"groupBoxReg";
			this->groupBoxReg->TabStop = false;
			// 
			// textBoxLoginReg
			// 
			resources->ApplyResources(this->textBoxLoginReg, L"textBoxLoginReg");
			this->textBoxLoginReg->HidePromptOnLeave = true;
			this->textBoxLoginReg->Name = L"textBoxLoginReg";
			this->textBoxLoginReg->ResetOnPrompt = false;
			this->textBoxLoginReg->ResetOnSpace = false;
			// 
			// labelPasswordRepeateReg
			// 
			resources->ApplyResources(this->labelPasswordRepeateReg, L"labelPasswordRepeateReg");
			this->labelPasswordRepeateReg->Name = L"labelPasswordRepeateReg";
			// 
			// textBoxPasswordRepeateReg
			// 
			this->textBoxPasswordRepeateReg->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->textBoxPasswordRepeateReg, L"textBoxPasswordRepeateReg");
			this->textBoxPasswordRepeateReg->Name = L"textBoxPasswordRepeateReg";
			this->textBoxPasswordRepeateReg->UseSystemPasswordChar = true;
			// 
			// labelLoginReg
			// 
			resources->ApplyResources(this->labelLoginReg, L"labelLoginReg");
			this->labelLoginReg->Name = L"labelLoginReg";
			// 
			// labelPasswordReg
			// 
			resources->ApplyResources(this->labelPasswordReg, L"labelPasswordReg");
			this->labelPasswordReg->Name = L"labelPasswordReg";
			// 
			// textBoxPasswordReg
			// 
			this->textBoxPasswordReg->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->textBoxPasswordReg, L"textBoxPasswordReg");
			this->textBoxPasswordReg->Name = L"textBoxPasswordReg";
			this->textBoxPasswordReg->UseSystemPasswordChar = true;
			// 
			// buttonRegister
			// 
			resources->ApplyResources(this->buttonRegister, L"buttonRegister");
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->UseVisualStyleBackColor = true;
			this->buttonRegister->Click += gcnew System::EventHandler(this, &MainForm::buttonRegister_Click);
			// 
			// labelNameReg
			// 
			resources->ApplyResources(this->labelNameReg, L"labelNameReg");
			this->labelNameReg->Name = L"labelNameReg";
			// 
			// buttonSendRequest
			// 
			resources->ApplyResources(this->buttonSendRequest, L"buttonSendRequest");
			this->buttonSendRequest->Name = L"buttonSendRequest";
			this->buttonSendRequest->UseVisualStyleBackColor = true;
			this->buttonSendRequest->Click += gcnew System::EventHandler(this, &MainForm::buttonSendRequest_Click);
			// 
			// pictureBank
			// 
			resources->ApplyResources(this->pictureBank, L"pictureBank");
			this->pictureBank->Name = L"pictureBank";
			this->pictureBank->TabStop = false;
			// 
			// labelBankName
			// 
			resources->ApplyResources(this->labelBankName, L"labelBankName");
			this->labelBankName->Name = L"labelBankName";
			// 
			// buttonLogIn
			// 
			this->buttonLogIn->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			resources->ApplyResources(this->buttonLogIn, L"buttonLogIn");
			this->buttonLogIn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonLogIn->Name = L"buttonLogIn";
			this->buttonLogIn->UseVisualStyleBackColor = true;
			this->buttonLogIn->Click += gcnew System::EventHandler(this, &MainForm::buttonLogIn_Click);
			// 
			// buttonAuthPasswordEye
			// 
			this->buttonAuthPasswordEye->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->buttonAuthPasswordEye, L"buttonAuthPasswordEye");
			this->buttonAuthPasswordEye->Name = L"buttonAuthPasswordEye";
			this->buttonAuthPasswordEye->UseVisualStyleBackColor = false;
			this->buttonAuthPasswordEye->Click += gcnew System::EventHandler(this, &MainForm::buttonAuthPasswordEye_Click);
			// 
			// labelInputLogin
			// 
			resources->ApplyResources(this->labelInputLogin, L"labelInputLogin");
			this->labelInputLogin->Name = L"labelInputLogin";
			// 
			// labelInputPassword
			// 
			resources->ApplyResources(this->labelInputPassword, L"labelInputPassword");
			this->labelInputPassword->Name = L"labelInputPassword";
			// 
			// textBoxLogin
			// 
			resources->ApplyResources(this->textBoxLogin, L"textBoxLogin");
			this->textBoxLogin->Name = L"textBoxLogin";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->textBoxPassword, L"textBoxPassword");
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->UseSystemPasswordChar = true;
			// 
			// buttonBackReg
			// 
			resources->ApplyResources(this->buttonBackReg, L"buttonBackReg");
			this->buttonBackReg->Name = L"buttonBackReg";
			this->buttonBackReg->UseVisualStyleBackColor = true;
			this->buttonBackReg->Click += gcnew System::EventHandler(this, &MainForm::buttonBackReg_Click);
			// 
			// imageList
			// 
			this->imageList->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			resources->ApplyResources(this->imageList, L"imageList");
			this->imageList->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// buttonAboutProgram
			// 
			this->buttonAboutProgram->Name = L"buttonAboutProgram";
			resources->ApplyResources(this->buttonAboutProgram, L"buttonAboutProgram");
			this->buttonAboutProgram->Click += gcnew System::EventHandler(this, &MainForm::buttonAboutProgram_Click);
			// 
			// groupBoxAuth
			// 
			this->groupBoxAuth->Controls->Add(this->buttonAuthPasswordEye);
			this->groupBoxAuth->Controls->Add(this->labelInputLogin);
			this->groupBoxAuth->Controls->Add(this->labelInputPassword);
			this->groupBoxAuth->Controls->Add(this->textBoxLogin);
			this->groupBoxAuth->Controls->Add(this->textBoxPassword);
			resources->ApplyResources(this->groupBoxAuth, L"groupBoxAuth");
			this->groupBoxAuth->Name = L"groupBoxAuth";
			this->groupBoxAuth->TabStop = false;
			// 
			// menuStrip
			// 
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->buttonAboutProgram });
			resources->ApplyResources(this->menuStrip, L"menuStrip");
			this->menuStrip->Name = L"menuStrip";
			// 
			// textBoxClientID
			// 
			resources->ApplyResources(this->textBoxClientID, L"textBoxClientID");
			this->textBoxClientID->HidePromptOnLeave = true;
			this->textBoxClientID->Name = L"textBoxClientID";
			this->textBoxClientID->ResetOnPrompt = false;
			this->textBoxClientID->ResetOnSpace = false;
			// 
			// buttonLogOut
			// 
			resources->ApplyResources(this->buttonLogOut, L"buttonLogOut");
			this->buttonLogOut->Name = L"buttonLogOut";
			this->buttonLogOut->UseVisualStyleBackColor = true;
			this->buttonLogOut->Click += gcnew System::EventHandler(this, &MainForm::buttonLogOut_Click);
			// 
			// buttonAdminShowRequests
			// 
			resources->ApplyResources(this->buttonAdminShowRequests, L"buttonAdminShowRequests");
			this->buttonAdminShowRequests->Name = L"buttonAdminShowRequests";
			this->buttonAdminShowRequests->UseVisualStyleBackColor = true;
			this->buttonAdminShowRequests->Click += gcnew System::EventHandler(this, &MainForm::buttonAdminShowRequests_Click);
			// 
			// groupBoxDataGridView
			// 
			this->groupBoxDataGridView->Controls->Add(this->labelDataGridView);
			this->groupBoxDataGridView->Controls->Add(this->dataGridView);
			resources->ApplyResources(this->groupBoxDataGridView, L"groupBoxDataGridView");
			this->groupBoxDataGridView->Name = L"groupBoxDataGridView";
			this->groupBoxDataGridView->TabStop = false;
			// 
			// labelDataGridView
			// 
			resources->ApplyResources(this->labelDataGridView, L"labelDataGridView");
			this->labelDataGridView->Name = L"labelDataGridView";
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->AllowUserToDeleteRows = false;
			this->dataGridView->AllowUserToResizeRows = false;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridView, L"dataGridView");
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView->RowTemplate->Height = 24;
			// 
			// labelClientID
			// 
			resources->ApplyResources(this->labelClientID, L"labelClientID");
			this->labelClientID->Name = L"labelClientID";
			// 
			// buttonAdminShowAccounts
			// 
			resources->ApplyResources(this->buttonAdminShowAccounts, L"buttonAdminShowAccounts");
			this->buttonAdminShowAccounts->Name = L"buttonAdminShowAccounts";
			this->buttonAdminShowAccounts->UseVisualStyleBackColor = true;
			this->buttonAdminShowAccounts->Click += gcnew System::EventHandler(this, &MainForm::buttonAdminShowAccounts_Click);
			// 
			// buttonAdminDeleteClient
			// 
			resources->ApplyResources(this->buttonAdminDeleteClient, L"buttonAdminDeleteClient");
			this->buttonAdminDeleteClient->Name = L"buttonAdminDeleteClient";
			this->buttonAdminDeleteClient->UseVisualStyleBackColor = true;
			this->buttonAdminDeleteClient->Click += gcnew System::EventHandler(this, &MainForm::buttonAdminDeleteClient_Click);
			// 
			// buttonAdminShowLoan
			// 
			resources->ApplyResources(this->buttonAdminShowLoan, L"buttonAdminShowLoan");
			this->buttonAdminShowLoan->Name = L"buttonAdminShowLoan";
			this->buttonAdminShowLoan->UseVisualStyleBackColor = true;
			this->buttonAdminShowLoan->Click += gcnew System::EventHandler(this, &MainForm::buttonAdminShowLoan_Click);
			// 
			// buttonAdminShowDeposit
			// 
			resources->ApplyResources(this->buttonAdminShowDeposit, L"buttonAdminShowDeposit");
			this->buttonAdminShowDeposit->Name = L"buttonAdminShowDeposit";
			this->buttonAdminShowDeposit->UseVisualStyleBackColor = true;
			this->buttonAdminShowDeposit->Click += gcnew System::EventHandler(this, &MainForm::buttonAdminShowDeposit_Click);
			// 
			// buttonAdminAddClient
			// 
			resources->ApplyResources(this->buttonAdminAddClient, L"buttonAdminAddClient");
			this->buttonAdminAddClient->Name = L"buttonAdminAddClient";
			this->buttonAdminAddClient->UseVisualStyleBackColor = true;
			this->buttonAdminAddClient->Click += gcnew System::EventHandler(this, &MainForm::buttonAdminAddClient_Click);
			// 
			// buttonAcceptRequest
			// 
			resources->ApplyResources(this->buttonAcceptRequest, L"buttonAcceptRequest");
			this->buttonAcceptRequest->Name = L"buttonAcceptRequest";
			this->buttonAcceptRequest->UseVisualStyleBackColor = true;
			this->buttonAcceptRequest->Click += gcnew System::EventHandler(this, &MainForm::buttonAcceptRequest_Click);
			// 
			// buttonRejectRequest
			// 
			resources->ApplyResources(this->buttonRejectRequest, L"buttonRejectRequest");
			this->buttonRejectRequest->Name = L"buttonRejectRequest";
			this->buttonRejectRequest->UseVisualStyleBackColor = true;
			this->buttonRejectRequest->Click += gcnew System::EventHandler(this, &MainForm::buttonRejectRequest_Click);
			// 
			// buttonBackAdminRequests
			// 
			resources->ApplyResources(this->buttonBackAdminRequests, L"buttonBackAdminRequests");
			this->buttonBackAdminRequests->Name = L"buttonBackAdminRequests";
			this->buttonBackAdminRequests->UseVisualStyleBackColor = true;
			this->buttonBackAdminRequests->Click += gcnew System::EventHandler(this, &MainForm::buttonBackAdminRequests_Click);
			// 
			// buttonFreezeAccount
			// 
			resources->ApplyResources(this->buttonFreezeAccount, L"buttonFreezeAccount");
			this->buttonFreezeAccount->Name = L"buttonFreezeAccount";
			this->buttonFreezeAccount->UseVisualStyleBackColor = true;
			this->buttonFreezeAccount->Click += gcnew System::EventHandler(this, &MainForm::buttonFreezeAccount_Click);
			// 
			// buttonUnfreezeAccount
			// 
			resources->ApplyResources(this->buttonUnfreezeAccount, L"buttonUnfreezeAccount");
			this->buttonUnfreezeAccount->Name = L"buttonUnfreezeAccount";
			this->buttonUnfreezeAccount->UseVisualStyleBackColor = true;
			this->buttonUnfreezeAccount->Click += gcnew System::EventHandler(this, &MainForm::buttonUnfreezeAccount_Click);
			// 
			// buttonBackAdminAccounts
			// 
			resources->ApplyResources(this->buttonBackAdminAccounts, L"buttonBackAdminAccounts");
			this->buttonBackAdminAccounts->Name = L"buttonBackAdminAccounts";
			this->buttonBackAdminAccounts->UseVisualStyleBackColor = true;
			this->buttonBackAdminAccounts->Click += gcnew System::EventHandler(this, &MainForm::buttonBackAdminAccounts_Click);
			// 
			// groupBoxDepLoan
			// 
			this->groupBoxDepLoan->Controls->Add(this->labelNameDepLoan);
			this->groupBoxDepLoan->Controls->Add(this->labelAvailabilityDepLoan);
			this->groupBoxDepLoan->Controls->Add(this->labelBalanceDepLoan);
			this->groupBoxDepLoan->Controls->Add(this->textBoxAvailabilityDepLoan);
			this->groupBoxDepLoan->Controls->Add(this->textBoxNameDepLoan);
			this->groupBoxDepLoan->Controls->Add(this->labelDateDepLoan);
			this->groupBoxDepLoan->Controls->Add(this->textBoxBalanceDepLoan);
			this->groupBoxDepLoan->Controls->Add(this->labelRateDepLoan);
			this->groupBoxDepLoan->Controls->Add(this->textBoxRateDepLoan);
			this->groupBoxDepLoan->Controls->Add(this->textBoxDateDepLoan);
			resources->ApplyResources(this->groupBoxDepLoan, L"groupBoxDepLoan");
			this->groupBoxDepLoan->Name = L"groupBoxDepLoan";
			this->groupBoxDepLoan->TabStop = false;
			// 
			// labelNameDepLoan
			// 
			resources->ApplyResources(this->labelNameDepLoan, L"labelNameDepLoan");
			this->labelNameDepLoan->Name = L"labelNameDepLoan";
			// 
			// labelAvailabilityDepLoan
			// 
			resources->ApplyResources(this->labelAvailabilityDepLoan, L"labelAvailabilityDepLoan");
			this->labelAvailabilityDepLoan->Name = L"labelAvailabilityDepLoan";
			// 
			// labelBalanceDepLoan
			// 
			resources->ApplyResources(this->labelBalanceDepLoan, L"labelBalanceDepLoan");
			this->labelBalanceDepLoan->Name = L"labelBalanceDepLoan";
			// 
			// textBoxAvailabilityDepLoan
			// 
			resources->ApplyResources(this->textBoxAvailabilityDepLoan, L"textBoxAvailabilityDepLoan");
			this->textBoxAvailabilityDepLoan->Name = L"textBoxAvailabilityDepLoan";
			this->textBoxAvailabilityDepLoan->ReadOnly = true;
			// 
			// textBoxNameDepLoan
			// 
			resources->ApplyResources(this->textBoxNameDepLoan, L"textBoxNameDepLoan");
			this->textBoxNameDepLoan->Name = L"textBoxNameDepLoan";
			this->textBoxNameDepLoan->ReadOnly = true;
			// 
			// labelDateDepLoan
			// 
			resources->ApplyResources(this->labelDateDepLoan, L"labelDateDepLoan");
			this->labelDateDepLoan->Name = L"labelDateDepLoan";
			// 
			// textBoxBalanceDepLoan
			// 
			resources->ApplyResources(this->textBoxBalanceDepLoan, L"textBoxBalanceDepLoan");
			this->textBoxBalanceDepLoan->Name = L"textBoxBalanceDepLoan";
			this->textBoxBalanceDepLoan->ReadOnly = true;
			// 
			// labelRateDepLoan
			// 
			resources->ApplyResources(this->labelRateDepLoan, L"labelRateDepLoan");
			this->labelRateDepLoan->Name = L"labelRateDepLoan";
			// 
			// textBoxRateDepLoan
			// 
			resources->ApplyResources(this->textBoxRateDepLoan, L"textBoxRateDepLoan");
			this->textBoxRateDepLoan->Name = L"textBoxRateDepLoan";
			this->textBoxRateDepLoan->ReadOnly = true;
			// 
			// textBoxDateDepLoan
			// 
			resources->ApplyResources(this->textBoxDateDepLoan, L"textBoxDateDepLoan");
			this->textBoxDateDepLoan->Name = L"textBoxDateDepLoan";
			this->textBoxDateDepLoan->ReadOnly = true;
			// 
			// buttonBackAdminDepLoan
			// 
			resources->ApplyResources(this->buttonBackAdminDepLoan, L"buttonBackAdminDepLoan");
			this->buttonBackAdminDepLoan->Name = L"buttonBackAdminDepLoan";
			this->buttonBackAdminDepLoan->UseVisualStyleBackColor = true;
			this->buttonBackAdminDepLoan->Click += gcnew System::EventHandler(this, &MainForm::buttonBackAdminDepLoan_Click);
			// 
			// buttonAccountActions
			// 
			resources->ApplyResources(this->buttonAccountActions, L"buttonAccountActions");
			this->buttonAccountActions->Name = L"buttonAccountActions";
			this->buttonAccountActions->UseVisualStyleBackColor = true;
			this->buttonAccountActions->Click += gcnew System::EventHandler(this, &MainForm::buttonAccountActions_Click);
			// 
			// buttonGetLoan
			// 
			resources->ApplyResources(this->buttonGetLoan, L"buttonGetLoan");
			this->buttonGetLoan->Name = L"buttonGetLoan";
			this->buttonGetLoan->UseVisualStyleBackColor = true;
			this->buttonGetLoan->Click += gcnew System::EventHandler(this, &MainForm::buttonGetLoan_Click);
			// 
			// buttonOpenDeposit
			// 
			resources->ApplyResources(this->buttonOpenDeposit, L"buttonOpenDeposit");
			this->buttonOpenDeposit->Name = L"buttonOpenDeposit";
			this->buttonOpenDeposit->UseVisualStyleBackColor = true;
			this->buttonOpenDeposit->Click += gcnew System::EventHandler(this, &MainForm::buttonOpenDeposit_Click);
			// 
			// buttonClientLoan
			// 
			resources->ApplyResources(this->buttonClientLoan, L"buttonClientLoan");
			this->buttonClientLoan->Name = L"buttonClientLoan";
			this->buttonClientLoan->UseVisualStyleBackColor = true;
			this->buttonClientLoan->Click += gcnew System::EventHandler(this, &MainForm::buttonClientLoan_Click);
			// 
			// buttonClientDeposit
			// 
			resources->ApplyResources(this->buttonClientDeposit, L"buttonClientDeposit");
			this->buttonClientDeposit->Name = L"buttonClientDeposit";
			this->buttonClientDeposit->UseVisualStyleBackColor = true;
			this->buttonClientDeposit->Click += gcnew System::EventHandler(this, &MainForm::buttonClientDeposit_Click);
			// 
			// buttonClientCreateAccount
			// 
			resources->ApplyResources(this->buttonClientCreateAccount, L"buttonClientCreateAccount");
			this->buttonClientCreateAccount->Name = L"buttonClientCreateAccount";
			this->buttonClientCreateAccount->UseVisualStyleBackColor = true;
			this->buttonClientCreateAccount->Click += gcnew System::EventHandler(this, &MainForm::buttonClientCreateAccount_Click);
			// 
			// buttonPaymentLoan
			// 
			resources->ApplyResources(this->buttonPaymentLoan, L"buttonPaymentLoan");
			this->buttonPaymentLoan->Name = L"buttonPaymentLoan";
			this->buttonPaymentLoan->UseVisualStyleBackColor = true;
			this->buttonPaymentLoan->Click += gcnew System::EventHandler(this, &MainForm::buttonPaymentLoan_Click);
			// 
			// labelAmountDepLoan
			// 
			resources->ApplyResources(this->labelAmountDepLoan, L"labelAmountDepLoan");
			this->labelAmountDepLoan->Name = L"labelAmountDepLoan";
			// 
			// labelIDDepLoan
			// 
			resources->ApplyResources(this->labelIDDepLoan, L"labelIDDepLoan");
			this->labelIDDepLoan->Name = L"labelIDDepLoan";
			// 
			// numericAmountDepLoan
			// 
			this->numericAmountDepLoan->DecimalPlaces = 2;
			resources->ApplyResources(this->numericAmountDepLoan, L"numericAmountDepLoan");
			this->numericAmountDepLoan->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 131072 });
			this->numericAmountDepLoan->Name = L"numericAmountDepLoan";
			this->numericAmountDepLoan->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// comboBoxAccountIDDepLoan
			// 
			this->comboBoxAccountIDDepLoan->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->comboBoxAccountIDDepLoan, L"comboBoxAccountIDDepLoan");
			this->comboBoxAccountIDDepLoan->FormattingEnabled = true;
			this->comboBoxAccountIDDepLoan->Name = L"comboBoxAccountIDDepLoan";
			// 
			// buttonTransferDeposit
			// 
			resources->ApplyResources(this->buttonTransferDeposit, L"buttonTransferDeposit");
			this->buttonTransferDeposit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonTransferDeposit->Name = L"buttonTransferDeposit";
			this->buttonTransferDeposit->UseVisualStyleBackColor = true;
			this->buttonTransferDeposit->Click += gcnew System::EventHandler(this, &MainForm::buttonTransferDeposit_Click);
			// 
			// buttonOpenDepositContinue
			// 
			resources->ApplyResources(this->buttonOpenDepositContinue, L"buttonOpenDepositContinue");
			this->buttonOpenDepositContinue->Name = L"buttonOpenDepositContinue";
			this->buttonOpenDepositContinue->UseVisualStyleBackColor = true;
			this->buttonOpenDepositContinue->Click += gcnew System::EventHandler(this, &MainForm::buttonOpenDepositContinue_Click);
			// 
			// groupBoxNewDepLoan
			// 
			this->groupBoxNewDepLoan->Controls->Add(this->textBoxNewDepLoanName);
			this->groupBoxNewDepLoan->Controls->Add(this->numericNewDepLoanAmount);
			this->groupBoxNewDepLoan->Controls->Add(this->labelNewDepLoanName);
			this->groupBoxNewDepLoan->Controls->Add(this->comboBoxNewDepLoanAccountID);
			this->groupBoxNewDepLoan->Controls->Add(this->radioButtonNewDepLoan18m);
			this->groupBoxNewDepLoan->Controls->Add(this->radioButtonNewDepLoan12m);
			this->groupBoxNewDepLoan->Controls->Add(this->radioButtonNewDepLoan9m);
			this->groupBoxNewDepLoan->Controls->Add(this->radioButtonNewDepLoan6m);
			this->groupBoxNewDepLoan->Controls->Add(this->labelNewDepLoanTime);
			this->groupBoxNewDepLoan->Controls->Add(this->labelNewDepLoanAmount);
			this->groupBoxNewDepLoan->Controls->Add(this->labelNewDepLoanAccountID);
			resources->ApplyResources(this->groupBoxNewDepLoan, L"groupBoxNewDepLoan");
			this->groupBoxNewDepLoan->Name = L"groupBoxNewDepLoan";
			this->groupBoxNewDepLoan->TabStop = false;
			// 
			// textBoxNewDepLoanName
			// 
			this->textBoxNewDepLoanName->BeepOnError = true;
			resources->ApplyResources(this->textBoxNewDepLoanName, L"textBoxNewDepLoanName");
			this->textBoxNewDepLoanName->HidePromptOnLeave = true;
			this->textBoxNewDepLoanName->Name = L"textBoxNewDepLoanName";
			this->textBoxNewDepLoanName->ResetOnPrompt = false;
			this->textBoxNewDepLoanName->ResetOnSpace = false;
			// 
			// numericNewDepLoanAmount
			// 
			this->numericNewDepLoanAmount->DecimalPlaces = 2;
			resources->ApplyResources(this->numericNewDepLoanAmount, L"numericNewDepLoanAmount");
			this->numericNewDepLoanAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 131072 });
			this->numericNewDepLoanAmount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericNewDepLoanAmount->Name = L"numericNewDepLoanAmount";
			this->numericNewDepLoanAmount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// labelNewDepLoanName
			// 
			resources->ApplyResources(this->labelNewDepLoanName, L"labelNewDepLoanName");
			this->labelNewDepLoanName->Name = L"labelNewDepLoanName";
			// 
			// comboBoxNewDepLoanAccountID
			// 
			this->comboBoxNewDepLoanAccountID->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->comboBoxNewDepLoanAccountID, L"comboBoxNewDepLoanAccountID");
			this->comboBoxNewDepLoanAccountID->FormattingEnabled = true;
			this->comboBoxNewDepLoanAccountID->Name = L"comboBoxNewDepLoanAccountID";
			// 
			// radioButtonNewDepLoan18m
			// 
			resources->ApplyResources(this->radioButtonNewDepLoan18m, L"radioButtonNewDepLoan18m");
			this->radioButtonNewDepLoan18m->Name = L"radioButtonNewDepLoan18m";
			this->radioButtonNewDepLoan18m->UseVisualStyleBackColor = true;
			// 
			// radioButtonNewDepLoan12m
			// 
			resources->ApplyResources(this->radioButtonNewDepLoan12m, L"radioButtonNewDepLoan12m");
			this->radioButtonNewDepLoan12m->Name = L"radioButtonNewDepLoan12m";
			this->radioButtonNewDepLoan12m->UseVisualStyleBackColor = true;
			// 
			// radioButtonNewDepLoan9m
			// 
			resources->ApplyResources(this->radioButtonNewDepLoan9m, L"radioButtonNewDepLoan9m");
			this->radioButtonNewDepLoan9m->Name = L"radioButtonNewDepLoan9m";
			this->radioButtonNewDepLoan9m->UseVisualStyleBackColor = true;
			// 
			// radioButtonNewDepLoan6m
			// 
			resources->ApplyResources(this->radioButtonNewDepLoan6m, L"radioButtonNewDepLoan6m");
			this->radioButtonNewDepLoan6m->Checked = true;
			this->radioButtonNewDepLoan6m->Name = L"radioButtonNewDepLoan6m";
			this->radioButtonNewDepLoan6m->TabStop = true;
			this->radioButtonNewDepLoan6m->UseVisualStyleBackColor = true;
			// 
			// labelNewDepLoanTime
			// 
			resources->ApplyResources(this->labelNewDepLoanTime, L"labelNewDepLoanTime");
			this->labelNewDepLoanTime->Name = L"labelNewDepLoanTime";
			// 
			// labelNewDepLoanAmount
			// 
			resources->ApplyResources(this->labelNewDepLoanAmount, L"labelNewDepLoanAmount");
			this->labelNewDepLoanAmount->Name = L"labelNewDepLoanAmount";
			// 
			// labelNewDepLoanAccountID
			// 
			resources->ApplyResources(this->labelNewDepLoanAccountID, L"labelNewDepLoanAccountID");
			this->labelNewDepLoanAccountID->Name = L"labelNewDepLoanAccountID";
			// 
			// labelCheckDepLoan
			// 
			resources->ApplyResources(this->labelCheckDepLoan, L"labelCheckDepLoan");
			this->labelCheckDepLoan->Name = L"labelCheckDepLoan";
			// 
			// groupBoxСheckNewDepLoan
			// 
			this->groupBoxСheckNewDepLoan->Controls->Add(this->labelСheckGetLoanAccount);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->labelСheckNewDepLoanRate);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->textBoxCheckNewDepLoanRate);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->labelСheckNewDepLoanName);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->labelСheckNewDepLoanTotalAmount);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->labelСheckNewDepLoanAmount);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->textBoxCheckNewDepLoanTotalAmount);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->textBoxСheckNewDepLoanName);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->labelСheckNewDepLoanDate);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->textBoxСheckNewDepLoanAmount);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->labelСheckOpenDepositAccount);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->textBoxСheckNewDepLoanAccount);
			this->groupBoxСheckNewDepLoan->Controls->Add(this->textBoxСheckNewDepLoanDate);
			resources->ApplyResources(this->groupBoxСheckNewDepLoan, L"groupBoxСheckNewDepLoan");
			this->groupBoxСheckNewDepLoan->Name = L"groupBoxСheckNewDepLoan";
			this->groupBoxСheckNewDepLoan->TabStop = false;
			// 
			// labelСheckGetLoanAccount
			// 
			resources->ApplyResources(this->labelСheckGetLoanAccount, L"labelСheckGetLoanAccount");
			this->labelСheckGetLoanAccount->Name = L"labelСheckGetLoanAccount";
			// 
			// labelСheckNewDepLoanRate
			// 
			resources->ApplyResources(this->labelСheckNewDepLoanRate, L"labelСheckNewDepLoanRate");
			this->labelСheckNewDepLoanRate->Name = L"labelСheckNewDepLoanRate";
			// 
			// textBoxCheckNewDepLoanRate
			// 
			resources->ApplyResources(this->textBoxCheckNewDepLoanRate, L"textBoxCheckNewDepLoanRate");
			this->textBoxCheckNewDepLoanRate->Name = L"textBoxCheckNewDepLoanRate";
			this->textBoxCheckNewDepLoanRate->ReadOnly = true;
			// 
			// labelСheckNewDepLoanName
			// 
			resources->ApplyResources(this->labelСheckNewDepLoanName, L"labelСheckNewDepLoanName");
			this->labelСheckNewDepLoanName->Name = L"labelСheckNewDepLoanName";
			// 
			// labelСheckNewDepLoanTotalAmount
			// 
			resources->ApplyResources(this->labelСheckNewDepLoanTotalAmount, L"labelСheckNewDepLoanTotalAmount");
			this->labelСheckNewDepLoanTotalAmount->Name = L"labelСheckNewDepLoanTotalAmount";
			// 
			// labelСheckNewDepLoanAmount
			// 
			resources->ApplyResources(this->labelСheckNewDepLoanAmount, L"labelСheckNewDepLoanAmount");
			this->labelСheckNewDepLoanAmount->Name = L"labelСheckNewDepLoanAmount";
			// 
			// textBoxCheckNewDepLoanTotalAmount
			// 
			resources->ApplyResources(this->textBoxCheckNewDepLoanTotalAmount, L"textBoxCheckNewDepLoanTotalAmount");
			this->textBoxCheckNewDepLoanTotalAmount->Name = L"textBoxCheckNewDepLoanTotalAmount";
			this->textBoxCheckNewDepLoanTotalAmount->ReadOnly = true;
			// 
			// textBoxСheckNewDepLoanName
			// 
			resources->ApplyResources(this->textBoxСheckNewDepLoanName, L"textBoxСheckNewDepLoanName");
			this->textBoxСheckNewDepLoanName->Name = L"textBoxСheckNewDepLoanName";
			this->textBoxСheckNewDepLoanName->ReadOnly = true;
			// 
			// labelСheckNewDepLoanDate
			// 
			resources->ApplyResources(this->labelСheckNewDepLoanDate, L"labelСheckNewDepLoanDate");
			this->labelСheckNewDepLoanDate->Name = L"labelСheckNewDepLoanDate";
			// 
			// textBoxСheckNewDepLoanAmount
			// 
			resources->ApplyResources(this->textBoxСheckNewDepLoanAmount, L"textBoxСheckNewDepLoanAmount");
			this->textBoxСheckNewDepLoanAmount->Name = L"textBoxСheckNewDepLoanAmount";
			this->textBoxСheckNewDepLoanAmount->ReadOnly = true;
			// 
			// labelСheckOpenDepositAccount
			// 
			resources->ApplyResources(this->labelСheckOpenDepositAccount, L"labelСheckOpenDepositAccount");
			this->labelСheckOpenDepositAccount->Name = L"labelСheckOpenDepositAccount";
			// 
			// textBoxСheckNewDepLoanAccount
			// 
			resources->ApplyResources(this->textBoxСheckNewDepLoanAccount, L"textBoxСheckNewDepLoanAccount");
			this->textBoxСheckNewDepLoanAccount->Name = L"textBoxСheckNewDepLoanAccount";
			this->textBoxСheckNewDepLoanAccount->ReadOnly = true;
			// 
			// textBoxСheckNewDepLoanDate
			// 
			resources->ApplyResources(this->textBoxСheckNewDepLoanDate, L"textBoxСheckNewDepLoanDate");
			this->textBoxСheckNewDepLoanDate->Name = L"textBoxСheckNewDepLoanDate";
			this->textBoxСheckNewDepLoanDate->ReadOnly = true;
			// 
			// buttonGetLoanContinue
			// 
			resources->ApplyResources(this->buttonGetLoanContinue, L"buttonGetLoanContinue");
			this->buttonGetLoanContinue->Name = L"buttonGetLoanContinue";
			this->buttonGetLoanContinue->UseVisualStyleBackColor = true;
			this->buttonGetLoanContinue->Click += gcnew System::EventHandler(this, &MainForm::buttonGetLoanContinue_Click);
			// 
			// buttonBackCheckDepLoan
			// 
			resources->ApplyResources(this->buttonBackCheckDepLoan, L"buttonBackCheckDepLoan");
			this->buttonBackCheckDepLoan->Name = L"buttonBackCheckDepLoan";
			this->buttonBackCheckDepLoan->UseVisualStyleBackColor = true;
			this->buttonBackCheckDepLoan->Click += gcnew System::EventHandler(this, &MainForm::buttonBackCheckDepLoan_Click);
			// 
			// buttonAccountActionsFreeze
			// 
			resources->ApplyResources(this->buttonAccountActionsFreeze, L"buttonAccountActionsFreeze");
			this->buttonAccountActionsFreeze->Name = L"buttonAccountActionsFreeze";
			this->buttonAccountActionsFreeze->UseVisualStyleBackColor = true;
			this->buttonAccountActionsFreeze->Click += gcnew System::EventHandler(this, &MainForm::buttonAccountActionsFreeze_Click);
			// 
			// buttonAccountActionsWithdraw
			// 
			resources->ApplyResources(this->buttonAccountActionsWithdraw, L"buttonAccountActionsWithdraw");
			this->buttonAccountActionsWithdraw->Name = L"buttonAccountActionsWithdraw";
			this->buttonAccountActionsWithdraw->UseVisualStyleBackColor = true;
			this->buttonAccountActionsWithdraw->Click += gcnew System::EventHandler(this, &MainForm::buttonAccountActionsWithdraw_Click);
			// 
			// buttonAccountActionsRecharge
			// 
			resources->ApplyResources(this->buttonAccountActionsRecharge, L"buttonAccountActionsRecharge");
			this->buttonAccountActionsRecharge->Name = L"buttonAccountActionsRecharge";
			this->buttonAccountActionsRecharge->UseVisualStyleBackColor = true;
			this->buttonAccountActionsRecharge->Click += gcnew System::EventHandler(this, &MainForm::buttonAccountActionsRecharge_Click);
			// 
			// buttonAccountActionsClose
			// 
			resources->ApplyResources(this->buttonAccountActionsClose, L"buttonAccountActionsClose");
			this->buttonAccountActionsClose->Name = L"buttonAccountActionsClose";
			this->buttonAccountActionsClose->UseVisualStyleBackColor = true;
			this->buttonAccountActionsClose->Click += gcnew System::EventHandler(this, &MainForm::buttonAccountActionsClose_Click);
			// 
			// buttonAccountActionsTransfer
			// 
			resources->ApplyResources(this->buttonAccountActionsTransfer, L"buttonAccountActionsTransfer");
			this->buttonAccountActionsTransfer->Name = L"buttonAccountActionsTransfer";
			this->buttonAccountActionsTransfer->UseVisualStyleBackColor = true;
			this->buttonAccountActionsTransfer->Click += gcnew System::EventHandler(this, &MainForm::buttonAccountActionsTransfer_Click);
			// 
			// groupBoxAccountActions
			// 
			this->groupBoxAccountActions->Controls->Add(this->labelAccountActionsID);
			this->groupBoxAccountActions->Controls->Add(this->labelAccountActionsName);
			this->groupBoxAccountActions->Controls->Add(this->textBoxAccountActionsID);
			this->groupBoxAccountActions->Controls->Add(this->labelAccountActionsBalance);
			this->groupBoxAccountActions->Controls->Add(this->textBoxAccountActionsName);
			this->groupBoxAccountActions->Controls->Add(this->textBoxAccountActionsBalance);
			resources->ApplyResources(this->groupBoxAccountActions, L"groupBoxAccountActions");
			this->groupBoxAccountActions->Name = L"groupBoxAccountActions";
			this->groupBoxAccountActions->TabStop = false;
			// 
			// labelAccountActionsID
			// 
			resources->ApplyResources(this->labelAccountActionsID, L"labelAccountActionsID");
			this->labelAccountActionsID->Name = L"labelAccountActionsID";
			// 
			// labelAccountActionsName
			// 
			resources->ApplyResources(this->labelAccountActionsName, L"labelAccountActionsName");
			this->labelAccountActionsName->Name = L"labelAccountActionsName";
			// 
			// textBoxAccountActionsID
			// 
			resources->ApplyResources(this->textBoxAccountActionsID, L"textBoxAccountActionsID");
			this->textBoxAccountActionsID->Name = L"textBoxAccountActionsID";
			this->textBoxAccountActionsID->ReadOnly = true;
			// 
			// labelAccountActionsBalance
			// 
			resources->ApplyResources(this->labelAccountActionsBalance, L"labelAccountActionsBalance");
			this->labelAccountActionsBalance->Name = L"labelAccountActionsBalance";
			// 
			// textBoxAccountActionsName
			// 
			resources->ApplyResources(this->textBoxAccountActionsName, L"textBoxAccountActionsName");
			this->textBoxAccountActionsName->Name = L"textBoxAccountActionsName";
			this->textBoxAccountActionsName->ReadOnly = true;
			// 
			// textBoxAccountActionsBalance
			// 
			resources->ApplyResources(this->textBoxAccountActionsBalance, L"textBoxAccountActionsBalance");
			this->textBoxAccountActionsBalance->Name = L"textBoxAccountActionsBalance";
			this->textBoxAccountActionsBalance->ReadOnly = true;
			// 
			// buttonBackAccountActions
			// 
			resources->ApplyResources(this->buttonBackAccountActions, L"buttonBackAccountActions");
			this->buttonBackAccountActions->Name = L"buttonBackAccountActions";
			this->buttonBackAccountActions->UseVisualStyleBackColor = true;
			this->buttonBackAccountActions->Click += gcnew System::EventHandler(this, &MainForm::buttonBackAccountActions_Click);
			// 
			// numericChargeAmount
			// 
			this->numericChargeAmount->DecimalPlaces = 2;
			resources->ApplyResources(this->numericChargeAmount, L"numericChargeAmount");
			this->numericChargeAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 131072 });
			this->numericChargeAmount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericChargeAmount->Name = L"numericChargeAmount";
			this->numericChargeAmount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// buttonRecharge
			// 
			resources->ApplyResources(this->buttonRecharge, L"buttonRecharge");
			this->buttonRecharge->Name = L"buttonRecharge";
			this->buttonRecharge->UseVisualStyleBackColor = true;
			this->buttonRecharge->Click += gcnew System::EventHandler(this, &MainForm::buttonRecharge_Click);
			// 
			// labelChargeAmount
			// 
			resources->ApplyResources(this->labelChargeAmount, L"labelChargeAmount");
			this->labelChargeAmount->Name = L"labelChargeAmount";
			// 
			// buttonWithdraw
			// 
			resources->ApplyResources(this->buttonWithdraw, L"buttonWithdraw");
			this->buttonWithdraw->Name = L"buttonWithdraw";
			this->buttonWithdraw->UseVisualStyleBackColor = true;
			this->buttonWithdraw->Click += gcnew System::EventHandler(this, &MainForm::buttonWithdraw_Click);
			// 
			// buttonTransfer
			// 
			resources->ApplyResources(this->buttonTransfer, L"buttonTransfer");
			this->buttonTransfer->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonTransfer->Name = L"buttonTransfer";
			this->buttonTransfer->UseVisualStyleBackColor = true;
			this->buttonTransfer->Click += gcnew System::EventHandler(this, &MainForm::buttonTransfer_Click);
			// 
			// textBoxTransferAccountID
			// 
			resources->ApplyResources(this->textBoxTransferAccountID, L"textBoxTransferAccountID");
			this->textBoxTransferAccountID->HidePromptOnLeave = true;
			this->textBoxTransferAccountID->Name = L"textBoxTransferAccountID";
			this->textBoxTransferAccountID->ResetOnPrompt = false;
			this->textBoxTransferAccountID->ResetOnSpace = false;
			// 
			// labelTransferAccountID
			// 
			resources->ApplyResources(this->labelTransferAccountID, L"labelTransferAccountID");
			this->labelTransferAccountID->Name = L"labelTransferAccountID";
			// 
			// buttonBackNewAccount
			// 
			resources->ApplyResources(this->buttonBackNewAccount, L"buttonBackNewAccount");
			this->buttonBackNewAccount->Name = L"buttonBackNewAccount";
			this->buttonBackNewAccount->UseVisualStyleBackColor = true;
			this->buttonBackNewAccount->Click += gcnew System::EventHandler(this, &MainForm::buttonBackNewAccount_Click);
			// 
			// groupBoxNewAccount
			// 
			this->groupBoxNewAccount->Controls->Add(this->textBoxNewAccountName);
			this->groupBoxNewAccount->Controls->Add(this->buttonCreateNewAccount);
			this->groupBoxNewAccount->Controls->Add(this->labelNewAccountName);
			resources->ApplyResources(this->groupBoxNewAccount, L"groupBoxNewAccount");
			this->groupBoxNewAccount->Name = L"groupBoxNewAccount";
			this->groupBoxNewAccount->TabStop = false;
			// 
			// textBoxNewAccountName
			// 
			resources->ApplyResources(this->textBoxNewAccountName, L"textBoxNewAccountName");
			this->textBoxNewAccountName->HidePromptOnLeave = true;
			this->textBoxNewAccountName->Name = L"textBoxNewAccountName";
			this->textBoxNewAccountName->ResetOnPrompt = false;
			this->textBoxNewAccountName->ResetOnSpace = false;
			// 
			// buttonCreateNewAccount
			// 
			this->buttonCreateNewAccount->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			resources->ApplyResources(this->buttonCreateNewAccount, L"buttonCreateNewAccount");
			this->buttonCreateNewAccount->Name = L"buttonCreateNewAccount";
			this->buttonCreateNewAccount->UseVisualStyleBackColor = true;
			this->buttonCreateNewAccount->Click += gcnew System::EventHandler(this, &MainForm::buttonCreateNewAccount_Click);
			// 
			// labelNewAccountName
			// 
			resources->ApplyResources(this->labelNewAccountName, L"labelNewAccountName");
			this->labelNewAccountName->Name = L"labelNewAccountName";
			// 
			// buttonBackNewDepLoan
			// 
			resources->ApplyResources(this->buttonBackNewDepLoan, L"buttonBackNewDepLoan");
			this->buttonBackNewDepLoan->Name = L"buttonBackNewDepLoan";
			this->buttonBackNewDepLoan->UseVisualStyleBackColor = true;
			this->buttonBackNewDepLoan->Click += gcnew System::EventHandler(this, &MainForm::buttonBackNewDepLoan_Click);
			// 
			// buttonBackMyDepLoan
			// 
			resources->ApplyResources(this->buttonBackMyDepLoan, L"buttonBackMyDepLoan");
			this->buttonBackMyDepLoan->Name = L"buttonBackMyDepLoan";
			this->buttonBackMyDepLoan->UseVisualStyleBackColor = true;
			this->buttonBackMyDepLoan->Click += gcnew System::EventHandler(this, &MainForm::buttonBackMyDepLoan_Click);
			// 
			// comboBoxAccountID
			// 
			this->comboBoxAccountID->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->comboBoxAccountID, L"comboBoxAccountID");
			this->comboBoxAccountID->FormattingEnabled = true;
			this->comboBoxAccountID->Name = L"comboBoxAccountID";
			// 
			// buttonShowDebtors
			// 
			resources->ApplyResources(this->buttonShowDebtors, L"buttonShowDebtors");
			this->buttonShowDebtors->Name = L"buttonShowDebtors";
			this->buttonShowDebtors->UseVisualStyleBackColor = true;
			this->buttonShowDebtors->Click += gcnew System::EventHandler(this, &MainForm::buttonShowDebtors_Click);
			// 
			// buttonBackDebtors
			// 
			resources->ApplyResources(this->buttonBackDebtors, L"buttonBackDebtors");
			this->buttonBackDebtors->Name = L"buttonBackDebtors";
			this->buttonBackDebtors->UseVisualStyleBackColor = true;
			this->buttonBackDebtors->Click += gcnew System::EventHandler(this, &MainForm::buttonBackDebtors_Click);
			// 
			// MainForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->buttonShowDebtors);
			this->Controls->Add(this->buttonBackDebtors);
			this->Controls->Add(this->comboBoxAccountID);
			this->Controls->Add(this->buttonBackMyDepLoan);
			this->Controls->Add(this->buttonBackNewDepLoan);
			this->Controls->Add(this->buttonClientCreateAccount);
			this->Controls->Add(this->labelClientID);
			this->Controls->Add(this->buttonAdminDeleteClient);
			this->Controls->Add(this->buttonAdminShowLoan);
			this->Controls->Add(this->buttonAdminAddClient);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->buttonBackAdminDepLoan);
			this->Controls->Add(this->buttonBackAdminAccounts);
			this->Controls->Add(this->buttonBackAdminRequests);
			this->Controls->Add(this->buttonLogOut);
			this->Controls->Add(this->buttonBackReg);
			this->Controls->Add(this->buttonBackNewAccount);
			this->Controls->Add(this->buttonBackAccountActions);
			this->Controls->Add(this->buttonBackCheckDepLoan);
			this->Controls->Add(this->textBoxClientID);
			this->Controls->Add(this->buttonAdminShowAccounts);
			this->Controls->Add(this->buttonAccountActions);
			this->Controls->Add(this->buttonFreezeAccount);
			this->Controls->Add(this->buttonAcceptRequest);
			this->Controls->Add(this->pictureBank);
			this->Controls->Add(this->labelBankName);
			this->Controls->Add(this->labelNameReg);
			this->Controls->Add(this->textBoxNameReg);
			this->Controls->Add(this->buttonAccountActionsTransfer);
			this->Controls->Add(this->buttonAccountActionsWithdraw);
			this->Controls->Add(this->buttonAccountActionsRecharge);
			this->Controls->Add(this->comboBoxAccountIDDepLoan);
			this->Controls->Add(this->labelIDDepLoan);
			this->Controls->Add(this->numericChargeAmount);
			this->Controls->Add(this->labelChargeAmount);
			this->Controls->Add(this->groupBoxAuth);
			this->Controls->Add(this->buttonAccountActionsClose);
			this->Controls->Add(this->labelTransferAccountID);
			this->Controls->Add(this->groupBoxNewDepLoan);
			this->Controls->Add(this->buttonAccountActionsFreeze);
			this->Controls->Add(this->buttonWithdraw);
			this->Controls->Add(this->buttonRecharge);
			this->Controls->Add(this->textBoxTransferAccountID);
			this->Controls->Add(this->groupBoxDataGridView);
			this->Controls->Add(this->groupBoxReg);
			this->Controls->Add(this->buttonLogIn);
			this->Controls->Add(this->numericAmountDepLoan);
			this->Controls->Add(this->labelAmountDepLoan);
			this->Controls->Add(this->buttonAdminShowRequests);
			this->Controls->Add(this->buttonTransferDeposit);
			this->Controls->Add(this->buttonOpenDeposit);
			this->Controls->Add(this->buttonGetLoan);
			this->Controls->Add(this->buttonClientLoan);
			this->Controls->Add(this->buttonClientDeposit);
			this->Controls->Add(this->buttonUnfreezeAccount);
			this->Controls->Add(this->buttonRejectRequest);
			this->Controls->Add(this->buttonRegister);
			this->Controls->Add(this->buttonSendRequest);
			this->Controls->Add(this->buttonGetLoanContinue);
			this->Controls->Add(this->buttonPaymentLoan);
			this->Controls->Add(this->buttonOpenDepositContinue);
			this->Controls->Add(this->buttonTransfer);
			this->Controls->Add(this->buttonAdminShowDeposit);
			this->Controls->Add(this->groupBoxСheckNewDepLoan);
			this->Controls->Add(this->labelCheckDepLoan);
			this->Controls->Add(this->groupBoxAccountActions);
			this->Controls->Add(this->groupBoxDepLoan);
			this->Controls->Add(this->groupBoxNewAccount);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::formClosing);
			this->Shown += gcnew System::EventHandler(this, &MainForm::start);
			this->groupBoxReg->ResumeLayout(false);
			this->groupBoxReg->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBank))->EndInit();
			this->groupBoxAuth->ResumeLayout(false);
			this->groupBoxAuth->PerformLayout();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->groupBoxDataGridView->ResumeLayout(false);
			this->groupBoxDataGridView->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->groupBoxDepLoan->ResumeLayout(false);
			this->groupBoxDepLoan->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericAmountDepLoan))->EndInit();
			this->groupBoxNewDepLoan->ResumeLayout(false);
			this->groupBoxNewDepLoan->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericNewDepLoanAmount))->EndInit();
			this->groupBoxСheckNewDepLoan->ResumeLayout(false);
			this->groupBoxСheckNewDepLoan->PerformLayout();
			this->groupBoxAccountActions->ResumeLayout(false);
			this->groupBoxAccountActions->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericChargeAmount))->EndInit();
			this->groupBoxNewAccount->ResumeLayout(false);
			this->groupBoxNewAccount->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: 
	void start(Object^ sender, EventArgs^ e);
	void shownAuthForm(bool status);
	void buttonAboutProgram_Click(Object^ sender, EventArgs^ e);
	void buttonLogIn_Click(Object^ sender, EventArgs^ e);
	void buttonRegister_Click(Object^ sender, EventArgs^ e);
	void buttonAuthPasswordEye_Click(Object^ sender, EventArgs^ e);
	void formClosing(Object^ sender, Windows::Forms::FormClosingEventArgs^ e);
	void shownRegisterForm(bool status);
	void buttonSendRequest_Click(Object^ sender, EventArgs^ e);
	void buttonBackReg_Click(Object^ sender, EventArgs^ e);
	void shownAdminForm(bool status);
	void showHeaderClients();
	void showClients(int access);
	void buttonAdminAddClient_Click(Object^ sender, EventArgs^ e);
	bool checkClientIDField(int type);
	void buttonAdminShowRequests_Click(Object^ sender, EventArgs^ e);
	void buttonShowDebtors_Click(System::Object^ sender, System::EventArgs^ e);
	void buttonAdminShowDeposit_Click(Object^ sender, EventArgs^ e);
	void buttonAdminShowLoan_Click(Object^ sender, EventArgs^ e);
	void buttonAdminShowAccounts_Click(Object^ sender, EventArgs^ e);
	void buttonAdminDeleteClient_Click(Object^ sender, EventArgs^ e);
	void buttonLogOut_Click(Object^ sender, EventArgs^ e);
	void shownAdminAddClientForm(bool status);
	void shownAdminRequestsForm(bool status);
	void shownAdminDebtorsForm(bool status);
	void showHeaderDebtors();
	void showDebtors();
	void buttonBackDebtors_Click(System::Object^ sender, System::EventArgs^ e);
	void buttonAcceptRequest_Click(Object^ sender, EventArgs^ e);
	void buttonRejectRequest_Click(Object^ sender, EventArgs^ e);
	void buttonBackAdminRequests_Click(Object^ sender, EventArgs^ e);
	void shownAdminAccountsForm(bool status);
	void showAccounts(int id);
	void showAccountsHeader();
	void buttonFreezeAccount_Click(Object^ sender, EventArgs^ e);
	void buttonUnfreezeAccount_Click(Object^ sender, EventArgs^ e);
	void buttonBackAdminAccounts_Click(Object^ sender, EventArgs^ e);
	void shownDepLoanForm(bool status);
	void showDepositInfo(int id);
	void showLoanInfo(int id);
	void buttonBackAdminDepLoan_Click(Object^ sender, EventArgs^ e);

	void shownClientForm(bool status);
	void showClientAccounts();
	void buttonClientDeposit_Click(Object^ sender, EventArgs^ e);
	void showClientDepositInfo();
	void buttonClientLoan_Click(Object^ sender, EventArgs^ e);
	void showClientLoanInfo();
	void shownDepLoanControls(bool status);
	void buttonPaymentLoan_Click(Object^ sender, EventArgs^ e);
	void buttonTransferDeposit_Click(Object^ sender, EventArgs^ e);
	void buttonBackMyDepLoan_Click(Object^ sender, EventArgs^ e);
	void buttonOpenDeposit_Click(Object^ sender, EventArgs^ e);
	void shownNewDepLoanForm(bool status);
	bool checkNewDepLoanForm(int type);
	void shownCheckNewDepLoanForm(bool status);
	void shownOpenDepositForm(bool status);
	void buttonOpenDepositContinue_Click(Object^ sender, EventArgs^ e);
	void shownCheckOpenDepositForm(bool status);
	void buttonGetLoan_Click(Object^ sender, EventArgs^ e);
	void shownGetLoanForm(bool status);
	void buttonBackNewDepLoan_Click(Object^ sender, EventArgs^ e);
	void buttonGetLoanContinue_Click(Object^ sender, EventArgs^ e);
	void shownCheckGetLoanForm(bool status);
	void buttonBackCheckDepLoan_Click(Object^ sender, EventArgs^ e);
	void buttonAccountActions_Click(Object^ sender, EventArgs^ e);
	void shownAccountActionsForm(bool status);
	void shownAccountActionsButtons(bool status);
	void buttonAccountActionsRecharge_Click(Object^ sender, EventArgs^ e);
	void buttonRecharge_Click(Object^ sender, EventArgs^ e);
	void buttonAccountActionsWithdraw_Click(Object^ sender, EventArgs^ e);
	void buttonWithdraw_Click(Object^ sender, EventArgs^ e);
	void buttonAccountActionsTransfer_Click(Object^ sender, EventArgs^ e);
	void buttonTransfer_Click(Object^ sender, EventArgs^ e);
	void buttonAccountActionsFreeze_Click(Object^ sender, EventArgs^ e);
	void buttonAccountActionsClose_Click(Object^ sender, EventArgs^ e);
	void buttonBackAccountActions_Click(Object^ sender, EventArgs^ e);
	void buttonClientCreateAccount_Click(Object^ sender, EventArgs^ e);
	void shownClientCreateAccountForm(bool status);
	void buttonCreateNewAccount_Click(Object^ sender, EventArgs^ e);
	void buttonBackNewAccount_Click(Object^ sender, EventArgs^ e);
};
};
