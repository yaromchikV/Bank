#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ textBoxAccountID;
	protected:
	private: System::Windows::Forms::MaskedTextBox^ textBoxRequestID;
	private: System::Windows::Forms::MaskedTextBox^ textBoxClientID;
	private: System::Windows::Forms::Button^ buttonAcceptRequest;
	private: System::Windows::Forms::Button^ buttonRejectRequest;
	private: System::Windows::Forms::Label^ labelRequestID;
	private: System::Windows::Forms::Label^ labelAccountID;
	private: System::Windows::Forms::Button^ buttonFreezeAccount;
	private: System::Windows::Forms::Button^ buttonUnfreezeAccount;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::Label^ labelDataGridView;
	private: System::Windows::Forms::Button^ buttonLogOut;
	private: System::Windows::Forms::Button^ buttonAdminShowRequests;
	private: System::Windows::Forms::GroupBox^ gorupBoxDataGridView;
	private: System::Windows::Forms::Label^ labelClientID;
	private: System::Windows::Forms::Button^ buttonAdminShowAccounts;
	private: System::Windows::Forms::Button^ buttonAdminDeleteClient;
	private: System::Windows::Forms::Button^ buttonAdminShowLoan;
	private: System::Windows::Forms::Button^ buttonAdminShowDeposit;
	private: System::Windows::Forms::Button^ buttonAdminAddClient;

	protected:







	protected:
































	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxAccountID = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxRequestID = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxClientID = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonAcceptRequest = (gcnew System::Windows::Forms::Button());
			this->buttonRejectRequest = (gcnew System::Windows::Forms::Button());
			this->labelRequestID = (gcnew System::Windows::Forms::Label());
			this->labelAccountID = (gcnew System::Windows::Forms::Label());
			this->buttonFreezeAccount = (gcnew System::Windows::Forms::Button());
			this->buttonUnfreezeAccount = (gcnew System::Windows::Forms::Button());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->labelDataGridView = (gcnew System::Windows::Forms::Label());
			this->buttonLogOut = (gcnew System::Windows::Forms::Button());
			this->buttonAdminShowRequests = (gcnew System::Windows::Forms::Button());
			this->gorupBoxDataGridView = (gcnew System::Windows::Forms::GroupBox());
			this->labelClientID = (gcnew System::Windows::Forms::Label());
			this->buttonAdminShowAccounts = (gcnew System::Windows::Forms::Button());
			this->buttonAdminDeleteClient = (gcnew System::Windows::Forms::Button());
			this->buttonAdminShowLoan = (gcnew System::Windows::Forms::Button());
			this->buttonAdminShowDeposit = (gcnew System::Windows::Forms::Button());
			this->buttonAdminAddClient = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->gorupBoxDataGridView->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxAccountID
			// 
			this->textBoxAccountID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAccountID->HidePromptOnLeave = true;
			this->textBoxAccountID->Location = System::Drawing::Point(990, 60);
			this->textBoxAccountID->Mask = L"0000000000";
			this->textBoxAccountID->Name = L"textBoxAccountID";
			this->textBoxAccountID->ResetOnPrompt = false;
			this->textBoxAccountID->ResetOnSpace = false;
			this->textBoxAccountID->Size = System::Drawing::Size(205, 38);
			this->textBoxAccountID->TabIndex = 78;
			// 
			// textBoxRequestID
			// 
			this->textBoxRequestID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxRequestID->HidePromptOnLeave = true;
			this->textBoxRequestID->Location = System::Drawing::Point(990, 262);
			this->textBoxRequestID->Mask = L"0000000";
			this->textBoxRequestID->Name = L"textBoxRequestID";
			this->textBoxRequestID->ResetOnPrompt = false;
			this->textBoxRequestID->ResetOnSpace = false;
			this->textBoxRequestID->Size = System::Drawing::Size(205, 38);
			this->textBoxRequestID->TabIndex = 77;
			// 
			// textBoxClientID
			// 
			this->textBoxClientID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxClientID->HidePromptOnLeave = true;
			this->textBoxClientID->Location = System::Drawing::Point(699, 61);
			this->textBoxClientID->Mask = L"0000000";
			this->textBoxClientID->Name = L"textBoxClientID";
			this->textBoxClientID->ResetOnPrompt = false;
			this->textBoxClientID->ResetOnSpace = false;
			this->textBoxClientID->Size = System::Drawing::Size(205, 38);
			this->textBoxClientID->TabIndex = 76;
			// 
			// buttonAcceptRequest
			// 
			this->buttonAcceptRequest->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAcceptRequest->Location = System::Drawing::Point(990, 306);
			this->buttonAcceptRequest->Name = L"buttonAcceptRequest";
			this->buttonAcceptRequest->Size = System::Drawing::Size(205, 45);
			this->buttonAcceptRequest->TabIndex = 75;
			this->buttonAcceptRequest->Text = L"Принять";
			this->buttonAcceptRequest->UseVisualStyleBackColor = true;
			// 
			// buttonRejectRequest
			// 
			this->buttonRejectRequest->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonRejectRequest->Location = System::Drawing::Point(990, 357);
			this->buttonRejectRequest->Name = L"buttonRejectRequest";
			this->buttonRejectRequest->Size = System::Drawing::Size(205, 45);
			this->buttonRejectRequest->TabIndex = 74;
			this->buttonRejectRequest->Text = L"Отклонить";
			this->buttonRejectRequest->UseVisualStyleBackColor = true;
			// 
			// labelRequestID
			// 
			this->labelRequestID->AutoSize = true;
			this->labelRequestID->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRequestID->Location = System::Drawing::Point(986, 235);
			this->labelRequestID->Name = L"labelRequestID";
			this->labelRequestID->Size = System::Drawing::Size(162, 24);
			this->labelRequestID->TabIndex = 73;
			this->labelRequestID->Text = L"Введите ID заявки";
			// 
			// labelAccountID
			// 
			this->labelAccountID->AutoSize = true;
			this->labelAccountID->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAccountID->Location = System::Drawing::Point(988, 34);
			this->labelAccountID->Name = L"labelAccountID";
			this->labelAccountID->Size = System::Drawing::Size(155, 24);
			this->labelAccountID->TabIndex = 70;
			this->labelAccountID->Text = L"Введите ID счёта";
			// 
			// buttonFreezeAccount
			// 
			this->buttonFreezeAccount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonFreezeAccount->Location = System::Drawing::Point(989, 104);
			this->buttonFreezeAccount->Name = L"buttonFreezeAccount";
			this->buttonFreezeAccount->Size = System::Drawing::Size(205, 45);
			this->buttonFreezeAccount->TabIndex = 72;
			this->buttonFreezeAccount->Text = L"Заморозить счёт";
			this->buttonFreezeAccount->UseVisualStyleBackColor = true;
			// 
			// buttonUnfreezeAccount
			// 
			this->buttonUnfreezeAccount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonUnfreezeAccount->Location = System::Drawing::Point(989, 155);
			this->buttonUnfreezeAccount->Name = L"buttonUnfreezeAccount";
			this->buttonUnfreezeAccount->Size = System::Drawing::Size(205, 45);
			this->buttonUnfreezeAccount->TabIndex = 71;
			this->buttonUnfreezeAccount->Text = L"Разморозить счёт";
			this->buttonUnfreezeAccount->UseVisualStyleBackColor = true;
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->AllowUserToDeleteRows = false;
			this->dataGridView->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(20, 49);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(588, 301);
			this->dataGridView->TabIndex = 7;
			// 
			// labelDataGridView
			// 
			this->labelDataGridView->AutoSize = true;
			this->labelDataGridView->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDataGridView->Location = System::Drawing::Point(15, 23);
			this->labelDataGridView->Name = L"labelDataGridView";
			this->labelDataGridView->Size = System::Drawing::Size(137, 24);
			this->labelDataGridView->TabIndex = 6;
			this->labelDataGridView->Text = L"Клиенты банка";
			// 
			// buttonLogOut
			// 
			this->buttonLogOut->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonLogOut->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonLogOut->Location = System::Drawing::Point(811, 421);
			this->buttonLogOut->Name = L"buttonLogOut";
			this->buttonLogOut->Size = System::Drawing::Size(102, 39);
			this->buttonLogOut->TabIndex = 69;
			this->buttonLogOut->Text = L"Выход";
			this->buttonLogOut->UseVisualStyleBackColor = true;
			this->buttonLogOut->Visible = false;
			// 
			// buttonAdminShowRequests
			// 
			this->buttonAdminShowRequests->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAdminShowRequests->Location = System::Drawing::Point(290, 415);
			this->buttonAdminShowRequests->Name = L"buttonAdminShowRequests";
			this->buttonAdminShowRequests->Size = System::Drawing::Size(363, 45);
			this->buttonAdminShowRequests->TabIndex = 68;
			this->buttonAdminShowRequests->Text = L"Просмотр запросов на регистрацию";
			this->buttonAdminShowRequests->UseVisualStyleBackColor = true;
			// 
			// gorupBoxDataGridView
			// 
			this->gorupBoxDataGridView->Controls->Add(this->dataGridView);
			this->gorupBoxDataGridView->Controls->Add(this->labelDataGridView);
			this->gorupBoxDataGridView->Location = System::Drawing::Point(45, 30);
			this->gorupBoxDataGridView->Name = L"gorupBoxDataGridView";
			this->gorupBoxDataGridView->Size = System::Drawing::Size(633, 374);
			this->gorupBoxDataGridView->TabIndex = 61;
			this->gorupBoxDataGridView->TabStop = false;
			// 
			// labelClientID
			// 
			this->labelClientID->AutoSize = true;
			this->labelClientID->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelClientID->Location = System::Drawing::Point(698, 34);
			this->labelClientID->Name = L"labelClientID";
			this->labelClientID->Size = System::Drawing::Size(174, 24);
			this->labelClientID->TabIndex = 62;
			this->labelClientID->Text = L"Введите ID клиента";
			// 
			// buttonAdminShowAccounts
			// 
			this->buttonAdminShowAccounts->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAdminShowAccounts->Location = System::Drawing::Point(699, 103);
			this->buttonAdminShowAccounts->Name = L"buttonAdminShowAccounts";
			this->buttonAdminShowAccounts->Size = System::Drawing::Size(205, 45);
			this->buttonAdminShowAccounts->TabIndex = 67;
			this->buttonAdminShowAccounts->Text = L"Просмотр счетов";
			this->buttonAdminShowAccounts->UseVisualStyleBackColor = true;
			// 
			// buttonAdminDeleteClient
			// 
			this->buttonAdminDeleteClient->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAdminDeleteClient->Location = System::Drawing::Point(699, 335);
			this->buttonAdminDeleteClient->Name = L"buttonAdminDeleteClient";
			this->buttonAdminDeleteClient->Size = System::Drawing::Size(205, 45);
			this->buttonAdminDeleteClient->TabIndex = 66;
			this->buttonAdminDeleteClient->Text = L"Удалить клиента";
			this->buttonAdminDeleteClient->UseVisualStyleBackColor = true;
			// 
			// buttonAdminShowLoan
			// 
			this->buttonAdminShowLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAdminShowLoan->Location = System::Drawing::Point(699, 216);
			this->buttonAdminShowLoan->Name = L"buttonAdminShowLoan";
			this->buttonAdminShowLoan->Size = System::Drawing::Size(205, 45);
			this->buttonAdminShowLoan->TabIndex = 65;
			this->buttonAdminShowLoan->Text = L"Просмотр займа";
			this->buttonAdminShowLoan->UseVisualStyleBackColor = true;
			// 
			// buttonAdminShowDeposit
			// 
			this->buttonAdminShowDeposit->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAdminShowDeposit->Location = System::Drawing::Point(699, 165);
			this->buttonAdminShowDeposit->Name = L"buttonAdminShowDeposit";
			this->buttonAdminShowDeposit->Size = System::Drawing::Size(205, 45);
			this->buttonAdminShowDeposit->TabIndex = 64;
			this->buttonAdminShowDeposit->Text = L"Просмотр депозита";
			this->buttonAdminShowDeposit->UseVisualStyleBackColor = true;
			// 
			// buttonAdminAddClient
			// 
			this->buttonAdminAddClient->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAdminAddClient->Location = System::Drawing::Point(65, 415);
			this->buttonAdminAddClient->Name = L"buttonAdminAddClient";
			this->buttonAdminAddClient->Size = System::Drawing::Size(205, 45);
			this->buttonAdminAddClient->TabIndex = 63;
			this->buttonAdminAddClient->Text = L"Добавить клиента";
			this->buttonAdminAddClient->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1240, 490);
			this->Controls->Add(this->textBoxAccountID);
			this->Controls->Add(this->textBoxRequestID);
			this->Controls->Add(this->textBoxClientID);
			this->Controls->Add(this->buttonAcceptRequest);
			this->Controls->Add(this->buttonRejectRequest);
			this->Controls->Add(this->labelRequestID);
			this->Controls->Add(this->labelAccountID);
			this->Controls->Add(this->buttonFreezeAccount);
			this->Controls->Add(this->buttonUnfreezeAccount);
			this->Controls->Add(this->buttonLogOut);
			this->Controls->Add(this->buttonAdminShowRequests);
			this->Controls->Add(this->gorupBoxDataGridView);
			this->Controls->Add(this->labelClientID);
			this->Controls->Add(this->buttonAdminShowAccounts);
			this->Controls->Add(this->buttonAdminDeleteClient);
			this->Controls->Add(this->buttonAdminShowLoan);
			this->Controls->Add(this->buttonAdminShowDeposit);
			this->Controls->Add(this->buttonAdminAddClient);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->gorupBoxDataGridView->ResumeLayout(false);
			this->gorupBoxDataGridView->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
