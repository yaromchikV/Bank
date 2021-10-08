#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormLoanInfo
	/// </summary>
	public ref class FormLoanInfo : public System::Windows::Forms::Form
	{
	public:
		FormLoanInfo(void)
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
		~FormLoanInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonPaymentDepLoan;
	protected:
	private: System::Windows::Forms::Label^ labelAmountDepLoan;
	private: System::Windows::Forms::Label^ labelIDDepLoan;
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
	private: System::Windows::Forms::NumericUpDown^ numericAmountDepLoan;
	private: System::Windows::Forms::ComboBox^ comboBoxAccountIDDepLoan;

	protected:

















	protected:

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
			this->buttonPaymentDepLoan = (gcnew System::Windows::Forms::Button());
			this->labelAmountDepLoan = (gcnew System::Windows::Forms::Label());
			this->labelIDDepLoan = (gcnew System::Windows::Forms::Label());
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
			this->numericAmountDepLoan = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBoxAccountIDDepLoan = (gcnew System::Windows::Forms::ComboBox());
			this->groupBoxDepLoan->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericAmountDepLoan))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonPaymentDepLoan
			// 
			this->buttonPaymentDepLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonPaymentDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonPaymentDepLoan->Location = System::Drawing::Point(321, 390);
			this->buttonPaymentDepLoan->Name = L"buttonPaymentDepLoan";
			this->buttonPaymentDepLoan->Size = System::Drawing::Size(205, 45);
			this->buttonPaymentDepLoan->TabIndex = 88;
			this->buttonPaymentDepLoan->Text = L"Внести платёж";
			this->buttonPaymentDepLoan->UseVisualStyleBackColor = true;
			this->buttonPaymentDepLoan->Visible = false;
			// 
			// labelAmountDepLoan
			// 
			this->labelAmountDepLoan->AutoSize = true;
			this->labelAmountDepLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelAmountDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelAmountDepLoan->Location = System::Drawing::Point(276, 345);
			this->labelAmountDepLoan->Name = L"labelAmountDepLoan";
			this->labelAmountDepLoan->Size = System::Drawing::Size(141, 24);
			this->labelAmountDepLoan->TabIndex = 87;
			this->labelAmountDepLoan->Text = L"Введите сумму:";
			this->labelAmountDepLoan->Visible = false;
			// 
			// labelIDDepLoan
			// 
			this->labelIDDepLoan->AutoSize = true;
			this->labelIDDepLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelIDDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelIDDepLoan->Location = System::Drawing::Point(275, 306);
			this->labelIDDepLoan->Name = L"labelIDDepLoan";
			this->labelIDDepLoan->Size = System::Drawing::Size(142, 24);
			this->labelIDDepLoan->TabIndex = 86;
			this->labelIDDepLoan->Text = L"Выберите счёт:";
			this->labelIDDepLoan->Visible = false;
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
			this->groupBoxDepLoan->Location = System::Drawing::Point(244, 64);
			this->groupBoxDepLoan->Name = L"groupBoxDepLoan";
			this->groupBoxDepLoan->Size = System::Drawing::Size(370, 225);
			this->groupBoxDepLoan->TabIndex = 85;
			this->groupBoxDepLoan->TabStop = false;
			this->groupBoxDepLoan->Visible = false;
			// 
			// labelNameDepLoan
			// 
			this->labelNameDepLoan->AutoSize = true;
			this->labelNameDepLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelNameDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelNameDepLoan->Location = System::Drawing::Point(25, 26);
			this->labelNameDepLoan->Name = L"labelNameDepLoan";
			this->labelNameDepLoan->Size = System::Drawing::Size(97, 24);
			this->labelNameDepLoan->TabIndex = 10;
			this->labelNameDepLoan->Text = L"Название:";
			this->labelNameDepLoan->Visible = false;
			// 
			// labelAvailabilityDepLoan
			// 
			this->labelAvailabilityDepLoan->AutoSize = true;
			this->labelAvailabilityDepLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelAvailabilityDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelAvailabilityDepLoan->Location = System::Drawing::Point(14, 174);
			this->labelAvailabilityDepLoan->Name = L"labelAvailabilityDepLoan";
			this->labelAvailabilityDepLoan->Size = System::Drawing::Size(108, 24);
			this->labelAvailabilityDepLoan->TabIndex = 20;
			this->labelAvailabilityDepLoan->Text = L"Состояние:";
			this->labelAvailabilityDepLoan->Visible = false;
			// 
			// labelBalanceDepLoan
			// 
			this->labelBalanceDepLoan->AutoSize = true;
			this->labelBalanceDepLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelBalanceDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelBalanceDepLoan->Location = System::Drawing::Point(45, 63);
			this->labelBalanceDepLoan->Name = L"labelBalanceDepLoan";
			this->labelBalanceDepLoan->Size = System::Drawing::Size(77, 24);
			this->labelBalanceDepLoan->TabIndex = 12;
			this->labelBalanceDepLoan->Text = L"Баланс:";
			this->labelBalanceDepLoan->Visible = false;
			// 
			// textBoxAvailabilityDepLoan
			// 
			this->textBoxAvailabilityDepLoan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAvailabilityDepLoan->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxAvailabilityDepLoan->Location = System::Drawing::Point(134, 171);
			this->textBoxAvailabilityDepLoan->MaxLength = 10;
			this->textBoxAvailabilityDepLoan->Name = L"textBoxAvailabilityDepLoan";
			this->textBoxAvailabilityDepLoan->ReadOnly = true;
			this->textBoxAvailabilityDepLoan->Size = System::Drawing::Size(213, 30);
			this->textBoxAvailabilityDepLoan->TabIndex = 19;
			this->textBoxAvailabilityDepLoan->Visible = false;
			// 
			// textBoxNameDepLoan
			// 
			this->textBoxNameDepLoan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxNameDepLoan->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxNameDepLoan->Location = System::Drawing::Point(134, 23);
			this->textBoxNameDepLoan->MaxLength = 10;
			this->textBoxNameDepLoan->Name = L"textBoxNameDepLoan";
			this->textBoxNameDepLoan->ReadOnly = true;
			this->textBoxNameDepLoan->Size = System::Drawing::Size(213, 30);
			this->textBoxNameDepLoan->TabIndex = 13;
			this->textBoxNameDepLoan->Visible = false;
			// 
			// labelDateDepLoan
			// 
			this->labelDateDepLoan->AutoSize = true;
			this->labelDateDepLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelDateDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelDateDepLoan->Location = System::Drawing::Point(39, 137);
			this->labelDateDepLoan->Name = L"labelDateDepLoan";
			this->labelDateDepLoan->Size = System::Drawing::Size(83, 24);
			this->labelDateDepLoan->TabIndex = 18;
			this->labelDateDepLoan->Text = L"Срок: по";
			this->labelDateDepLoan->Visible = false;
			// 
			// textBoxBalanceDepLoan
			// 
			this->textBoxBalanceDepLoan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxBalanceDepLoan->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxBalanceDepLoan->Location = System::Drawing::Point(134, 60);
			this->textBoxBalanceDepLoan->MaxLength = 10;
			this->textBoxBalanceDepLoan->Name = L"textBoxBalanceDepLoan";
			this->textBoxBalanceDepLoan->ReadOnly = true;
			this->textBoxBalanceDepLoan->Size = System::Drawing::Size(213, 30);
			this->textBoxBalanceDepLoan->TabIndex = 14;
			this->textBoxBalanceDepLoan->Visible = false;
			// 
			// labelRateDepLoan
			// 
			this->labelRateDepLoan->AutoSize = true;
			this->labelRateDepLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelRateDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelRateDepLoan->Location = System::Drawing::Point(47, 100);
			this->labelRateDepLoan->Name = L"labelRateDepLoan";
			this->labelRateDepLoan->Size = System::Drawing::Size(75, 24);
			this->labelRateDepLoan->TabIndex = 17;
			this->labelRateDepLoan->Text = L"Ставка:";
			this->labelRateDepLoan->Visible = false;
			// 
			// textBoxRateDepLoan
			// 
			this->textBoxRateDepLoan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRateDepLoan->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxRateDepLoan->Location = System::Drawing::Point(134, 97);
			this->textBoxRateDepLoan->MaxLength = 10;
			this->textBoxRateDepLoan->Name = L"textBoxRateDepLoan";
			this->textBoxRateDepLoan->ReadOnly = true;
			this->textBoxRateDepLoan->Size = System::Drawing::Size(213, 30);
			this->textBoxRateDepLoan->TabIndex = 15;
			this->textBoxRateDepLoan->Visible = false;
			// 
			// textBoxDateDepLoan
			// 
			this->textBoxDateDepLoan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDateDepLoan->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxDateDepLoan->Location = System::Drawing::Point(134, 134);
			this->textBoxDateDepLoan->MaxLength = 10;
			this->textBoxDateDepLoan->Name = L"textBoxDateDepLoan";
			this->textBoxDateDepLoan->ReadOnly = true;
			this->textBoxDateDepLoan->Size = System::Drawing::Size(213, 30);
			this->textBoxDateDepLoan->TabIndex = 16;
			this->textBoxDateDepLoan->Visible = false;
			// 
			// numericAmountDepLoan
			// 
			this->numericAmountDepLoan->DecimalPlaces = 2;
			this->numericAmountDepLoan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericAmountDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->numericAmountDepLoan->Location = System::Drawing::Point(423, 342);
			this->numericAmountDepLoan->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 131072 });
			this->numericAmountDepLoan->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericAmountDepLoan->Name = L"numericAmountDepLoan";
			this->numericAmountDepLoan->Size = System::Drawing::Size(162, 34);
			this->numericAmountDepLoan->TabIndex = 90;
			this->numericAmountDepLoan->ThousandsSeparator = true;
			this->numericAmountDepLoan->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// comboBoxAccountIDDepLoan
			// 
			this->comboBoxAccountIDDepLoan->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxAccountIDDepLoan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxAccountIDDepLoan->FormattingEnabled = true;
			this->comboBoxAccountIDDepLoan->Location = System::Drawing::Point(423, 302);
			this->comboBoxAccountIDDepLoan->Name = L"comboBoxAccountIDDepLoan";
			this->comboBoxAccountIDDepLoan->Size = System::Drawing::Size(162, 34);
			this->comboBoxAccountIDDepLoan->TabIndex = 89;
			// 
			// FormLoanInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 498);
			this->Controls->Add(this->buttonPaymentDepLoan);
			this->Controls->Add(this->labelAmountDepLoan);
			this->Controls->Add(this->labelIDDepLoan);
			this->Controls->Add(this->groupBoxDepLoan);
			this->Controls->Add(this->numericAmountDepLoan);
			this->Controls->Add(this->comboBoxAccountIDDepLoan);
			this->Name = L"FormLoanInfo";
			this->Text = L"FormLoanInfo";
			this->groupBoxDepLoan->ResumeLayout(false);
			this->groupBoxDepLoan->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericAmountDepLoan))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
