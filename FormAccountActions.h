#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormAccountActions
	/// </summary>
	public ref class FormAccountActions : public System::Windows::Forms::Form
	{
	public:
		FormAccountActions(void)
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
		~FormAccountActions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonAccountActionsTransfer;
	protected:

	protected:




	private: System::Windows::Forms::GroupBox^ groupBoxAccountActions;
	private: System::Windows::Forms::Label^ labelAccountActionsName;
	private: System::Windows::Forms::Label^ labelAccountActionsBalance;
	private: System::Windows::Forms::TextBox^ textBoxAccountActionsName;
	private: System::Windows::Forms::TextBox^ textBoxAccountActionsBalance;
	private: System::Windows::Forms::Button^ buttonAccountActionsClose;
	private: System::Windows::Forms::Button^ buttonAccountActionsRecharge;
	private: System::Windows::Forms::Button^ buttonAccountActionsWithdraw;
	private: System::Windows::Forms::Button^ buttonAccountActionsFreeze;
	private: System::Windows::Forms::Label^ labelAccountActionsID;
	private: System::Windows::Forms::TextBox^ textBoxAccountActionsID;



	private: System::Windows::Forms::Button^ buttonWithdraw;
	private: System::Windows::Forms::NumericUpDown^ numericChangeAmount;
	private: System::Windows::Forms::Button^ buttonRecharge;
	private: System::Windows::Forms::Label^ labelChangeAmount;
	private: System::Windows::Forms::Button^ buttonTransfer;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;

	private: System::Windows::Forms::Label^ labelTransferAccountID;




















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
			this->buttonAccountActionsTransfer = (gcnew System::Windows::Forms::Button());
			this->groupBoxAccountActions = (gcnew System::Windows::Forms::GroupBox());
			this->labelAccountActionsID = (gcnew System::Windows::Forms::Label());
			this->labelAccountActionsName = (gcnew System::Windows::Forms::Label());
			this->textBoxAccountActionsID = (gcnew System::Windows::Forms::TextBox());
			this->labelAccountActionsBalance = (gcnew System::Windows::Forms::Label());
			this->textBoxAccountActionsName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAccountActionsBalance = (gcnew System::Windows::Forms::TextBox());
			this->buttonAccountActionsClose = (gcnew System::Windows::Forms::Button());
			this->buttonAccountActionsRecharge = (gcnew System::Windows::Forms::Button());
			this->buttonAccountActionsWithdraw = (gcnew System::Windows::Forms::Button());
			this->buttonAccountActionsFreeze = (gcnew System::Windows::Forms::Button());
			this->buttonWithdraw = (gcnew System::Windows::Forms::Button());
			this->numericChangeAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonRecharge = (gcnew System::Windows::Forms::Button());
			this->labelChangeAmount = (gcnew System::Windows::Forms::Label());
			this->buttonTransfer = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelTransferAccountID = (gcnew System::Windows::Forms::Label());
			this->groupBoxAccountActions->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericChangeAmount))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonAccountActionsTransfer
			// 
			this->buttonAccountActionsTransfer->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonAccountActionsTransfer->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonAccountActionsTransfer->Location = System::Drawing::Point(12, 221);
			this->buttonAccountActionsTransfer->Name = L"buttonAccountActionsTransfer";
			this->buttonAccountActionsTransfer->Size = System::Drawing::Size(390, 45);
			this->buttonAccountActionsTransfer->TabIndex = 67;
			this->buttonAccountActionsTransfer->Text = L"Перевести";
			this->buttonAccountActionsTransfer->UseVisualStyleBackColor = true;
			this->buttonAccountActionsTransfer->Visible = false;
			// 
			// groupBoxAccountActions
			// 
			this->groupBoxAccountActions->Controls->Add(this->labelAccountActionsID);
			this->groupBoxAccountActions->Controls->Add(this->labelAccountActionsName);
			this->groupBoxAccountActions->Controls->Add(this->textBoxAccountActionsID);
			this->groupBoxAccountActions->Controls->Add(this->labelAccountActionsBalance);
			this->groupBoxAccountActions->Controls->Add(this->textBoxAccountActionsName);
			this->groupBoxAccountActions->Controls->Add(this->textBoxAccountActionsBalance);
			this->groupBoxAccountActions->Location = System::Drawing::Point(12, 12);
			this->groupBoxAccountActions->Name = L"groupBoxAccountActions";
			this->groupBoxAccountActions->Size = System::Drawing::Size(390, 152);
			this->groupBoxAccountActions->TabIndex = 62;
			this->groupBoxAccountActions->TabStop = false;
			this->groupBoxAccountActions->Visible = false;
			// 
			// labelAccountActionsID
			// 
			this->labelAccountActionsID->AutoSize = true;
			this->labelAccountActionsID->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelAccountActionsID->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelAccountActionsID->Location = System::Drawing::Point(23, 30);
			this->labelAccountActionsID->Name = L"labelAccountActionsID";
			this->labelAccountActionsID->Size = System::Drawing::Size(125, 24);
			this->labelAccountActionsID->TabIndex = 15;
			this->labelAccountActionsID->Text = L"Номер счёта:";
			this->labelAccountActionsID->Visible = false;
			// 
			// labelAccountActionsName
			// 
			this->labelAccountActionsName->AutoSize = true;
			this->labelAccountActionsName->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelAccountActionsName->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelAccountActionsName->Location = System::Drawing::Point(51, 67);
			this->labelAccountActionsName->Name = L"labelAccountActionsName";
			this->labelAccountActionsName->Size = System::Drawing::Size(97, 24);
			this->labelAccountActionsName->TabIndex = 10;
			this->labelAccountActionsName->Text = L"Название:";
			this->labelAccountActionsName->Visible = false;
			// 
			// textBoxAccountActionsID
			// 
			this->textBoxAccountActionsID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAccountActionsID->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxAccountActionsID->Location = System::Drawing::Point(154, 27);
			this->textBoxAccountActionsID->MaxLength = 10;
			this->textBoxAccountActionsID->Name = L"textBoxAccountActionsID";
			this->textBoxAccountActionsID->ReadOnly = true;
			this->textBoxAccountActionsID->Size = System::Drawing::Size(213, 30);
			this->textBoxAccountActionsID->TabIndex = 16;
			this->textBoxAccountActionsID->Visible = false;
			// 
			// labelAccountActionsBalance
			// 
			this->labelAccountActionsBalance->AutoSize = true;
			this->labelAccountActionsBalance->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelAccountActionsBalance->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelAccountActionsBalance->Location = System::Drawing::Point(71, 104);
			this->labelAccountActionsBalance->Name = L"labelAccountActionsBalance";
			this->labelAccountActionsBalance->Size = System::Drawing::Size(77, 24);
			this->labelAccountActionsBalance->TabIndex = 12;
			this->labelAccountActionsBalance->Text = L"Баланс:";
			this->labelAccountActionsBalance->Visible = false;
			// 
			// textBoxAccountActionsName
			// 
			this->textBoxAccountActionsName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAccountActionsName->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxAccountActionsName->Location = System::Drawing::Point(154, 64);
			this->textBoxAccountActionsName->MaxLength = 10;
			this->textBoxAccountActionsName->Name = L"textBoxAccountActionsName";
			this->textBoxAccountActionsName->ReadOnly = true;
			this->textBoxAccountActionsName->Size = System::Drawing::Size(213, 30);
			this->textBoxAccountActionsName->TabIndex = 13;
			this->textBoxAccountActionsName->Visible = false;
			// 
			// textBoxAccountActionsBalance
			// 
			this->textBoxAccountActionsBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAccountActionsBalance->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxAccountActionsBalance->Location = System::Drawing::Point(154, 101);
			this->textBoxAccountActionsBalance->MaxLength = 10;
			this->textBoxAccountActionsBalance->Name = L"textBoxAccountActionsBalance";
			this->textBoxAccountActionsBalance->ReadOnly = true;
			this->textBoxAccountActionsBalance->Size = System::Drawing::Size(213, 30);
			this->textBoxAccountActionsBalance->TabIndex = 14;
			this->textBoxAccountActionsBalance->Visible = false;
			// 
			// buttonAccountActionsClose
			// 
			this->buttonAccountActionsClose->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonAccountActionsClose->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonAccountActionsClose->Location = System::Drawing::Point(213, 272);
			this->buttonAccountActionsClose->Name = L"buttonAccountActionsClose";
			this->buttonAccountActionsClose->Size = System::Drawing::Size(189, 45);
			this->buttonAccountActionsClose->TabIndex = 68;
			this->buttonAccountActionsClose->Text = L"Закрыть счёт";
			this->buttonAccountActionsClose->UseVisualStyleBackColor = true;
			this->buttonAccountActionsClose->Visible = false;
			// 
			// buttonAccountActionsRecharge
			// 
			this->buttonAccountActionsRecharge->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonAccountActionsRecharge->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonAccountActionsRecharge->Location = System::Drawing::Point(12, 170);
			this->buttonAccountActionsRecharge->Name = L"buttonAccountActionsRecharge";
			this->buttonAccountActionsRecharge->Size = System::Drawing::Size(195, 45);
			this->buttonAccountActionsRecharge->TabIndex = 69;
			this->buttonAccountActionsRecharge->Text = L"Пополнить";
			this->buttonAccountActionsRecharge->UseVisualStyleBackColor = true;
			this->buttonAccountActionsRecharge->Visible = false;
			// 
			// buttonAccountActionsWithdraw
			// 
			this->buttonAccountActionsWithdraw->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonAccountActionsWithdraw->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonAccountActionsWithdraw->Location = System::Drawing::Point(213, 170);
			this->buttonAccountActionsWithdraw->Name = L"buttonAccountActionsWithdraw";
			this->buttonAccountActionsWithdraw->Size = System::Drawing::Size(189, 45);
			this->buttonAccountActionsWithdraw->TabIndex = 70;
			this->buttonAccountActionsWithdraw->Text = L"Списать";
			this->buttonAccountActionsWithdraw->UseVisualStyleBackColor = true;
			this->buttonAccountActionsWithdraw->Visible = false;
			// 
			// buttonAccountActionsFreeze
			// 
			this->buttonAccountActionsFreeze->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonAccountActionsFreeze->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonAccountActionsFreeze->Location = System::Drawing::Point(12, 272);
			this->buttonAccountActionsFreeze->Name = L"buttonAccountActionsFreeze";
			this->buttonAccountActionsFreeze->Size = System::Drawing::Size(195, 45);
			this->buttonAccountActionsFreeze->TabIndex = 71;
			this->buttonAccountActionsFreeze->Text = L"Заморозить счёт";
			this->buttonAccountActionsFreeze->UseVisualStyleBackColor = true;
			this->buttonAccountActionsFreeze->Visible = false;
			// 
			// buttonWithdraw
			// 
			this->buttonWithdraw->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonWithdraw->Location = System::Drawing::Point(682, 170);
			this->buttonWithdraw->Name = L"buttonWithdraw";
			this->buttonWithdraw->Size = System::Drawing::Size(205, 45);
			this->buttonWithdraw->TabIndex = 75;
			this->buttonWithdraw->Text = L"Списать";
			this->buttonWithdraw->UseVisualStyleBackColor = true;
			// 
			// numericChangeAmount
			// 
			this->numericChangeAmount->DecimalPlaces = 2;
			this->numericChangeAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericChangeAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->numericChangeAmount->Location = System::Drawing::Point(680, 65);
			this->numericChangeAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 131072 });
			this->numericChangeAmount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericChangeAmount->Name = L"numericChangeAmount";
			this->numericChangeAmount->Size = System::Drawing::Size(201, 38);
			this->numericChangeAmount->TabIndex = 93;
			this->numericChangeAmount->ThousandsSeparator = true;
			this->numericChangeAmount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// buttonRecharge
			// 
			this->buttonRecharge->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRecharge->Location = System::Drawing::Point(681, 112);
			this->buttonRecharge->Name = L"buttonRecharge";
			this->buttonRecharge->Size = System::Drawing::Size(205, 45);
			this->buttonRecharge->TabIndex = 91;
			this->buttonRecharge->Text = L"Пополнить";
			this->buttonRecharge->UseVisualStyleBackColor = true;
			// 
			// labelChangeAmount
			// 
			this->labelChangeAmount->AutoSize = true;
			this->labelChangeAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelChangeAmount->Location = System::Drawing::Point(678, 39);
			this->labelChangeAmount->Name = L"labelChangeAmount";
			this->labelChangeAmount->Size = System::Drawing::Size(138, 24);
			this->labelChangeAmount->TabIndex = 92;
			this->labelChangeAmount->Text = L"Введите сумму";
			// 
			// buttonTransfer
			// 
			this->buttonTransfer->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTransfer->Location = System::Drawing::Point(625, 313);
			this->buttonTransfer->Name = L"buttonTransfer";
			this->buttonTransfer->Size = System::Drawing::Size(205, 45);
			this->buttonTransfer->TabIndex = 94;
			this->buttonTransfer->Text = L"Перечислить";
			this->buttonTransfer->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maskedTextBox1->HidePromptOnLeave = true;
			this->maskedTextBox1->Location = System::Drawing::Point(625, 268);
			this->maskedTextBox1->Mask = L"0000000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->ResetOnPrompt = false;
			this->maskedTextBox1->ResetOnSpace = false;
			this->maskedTextBox1->Size = System::Drawing::Size(201, 38);
			this->maskedTextBox1->TabIndex = 97;
			// 
			// labelTransferAccountID
			// 
			this->labelTransferAccountID->AutoSize = true;
			this->labelTransferAccountID->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelTransferAccountID->Location = System::Drawing::Point(621, 242);
			this->labelTransferAccountID->Name = L"labelTransferAccountID";
			this->labelTransferAccountID->Size = System::Drawing::Size(195, 24);
			this->labelTransferAccountID->TabIndex = 96;
			this->labelTransferAccountID->Text = L"Введите номер счёта";
			// 
			// FormAccountActions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(899, 490);
			this->Controls->Add(this->buttonTransfer);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->labelTransferAccountID);
			this->Controls->Add(this->numericChangeAmount);
			this->Controls->Add(this->buttonRecharge);
			this->Controls->Add(this->buttonWithdraw);
			this->Controls->Add(this->labelChangeAmount);
			this->Controls->Add(this->buttonAccountActionsFreeze);
			this->Controls->Add(this->buttonAccountActionsWithdraw);
			this->Controls->Add(this->buttonAccountActionsRecharge);
			this->Controls->Add(this->buttonAccountActionsClose);
			this->Controls->Add(this->buttonAccountActionsTransfer);
			this->Controls->Add(this->groupBoxAccountActions);
			this->Name = L"FormAccountActions";
			this->Text = L"FormAccountActions";
			this->Load += gcnew System::EventHandler(this, &FormAccountActions::FormAccountActions_Load);
			this->groupBoxAccountActions->ResumeLayout(false);
			this->groupBoxAccountActions->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericChangeAmount))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormAccountActions_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
