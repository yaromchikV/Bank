#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� FormGetLoan
	/// </summary>
	public ref class FormGetLoan : public System::Windows::Forms::Form
	{
	public:
		FormGetLoan(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~FormGetLoan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonArrangeLoan;
	protected:
	private: System::Windows::Forms::Label^ label�heckGetLoanRate;
	private: System::Windows::Forms::TextBox^ textBox�heckGetLoaRate;
	private: System::Windows::Forms::Label^ label�heckGetLoanName;
	private: System::Windows::Forms::Label^ label�heckGetLoanTotalAmount;
	private: System::Windows::Forms::Label^ label�heckGetLoanAmount;
	private: System::Windows::Forms::TextBox^ textBox�heckGetLoanTotalAmount;
	private: System::Windows::Forms::TextBox^ textBox�heckGetLoanName;
	private: System::Windows::Forms::Label^ label�heckGetLoanDate;
	private: System::Windows::Forms::TextBox^ textBox�heckGetLoanAmount;
	private: System::Windows::Forms::TextBox^ textBox�heckGetLoanDate;
	private: System::Windows::Forms::GroupBox^ groupBox�heckGetLoan;
	private: System::Windows::Forms::NumericUpDown^ numericGetLoanAmount;
	private: System::Windows::Forms::MaskedTextBox^ textBoxGetLoanName;
	private: System::Windows::Forms::Label^ labelGetLoanName;
	private: System::Windows::Forms::RadioButton^ radioButtonGetLoan18m;
	private: System::Windows::Forms::RadioButton^ radioButtonGetLoan12m;
	private: System::Windows::Forms::RadioButton^ radioButtonGetLoan9m;
	private: System::Windows::Forms::RadioButton^ radioButtonGetLoan6m;
	private: System::Windows::Forms::Label^ labelGetLoanTime;
	private: System::Windows::Forms::GroupBox^ groupBoxGetLoan;
	private: System::Windows::Forms::Label^ labelGetLoanAmount;
	private: System::Windows::Forms::Button^ buttonGetLoanContinue;
	private: System::Windows::Forms::ComboBox^ comboBoxOpenDepositAccountID;
	private: System::Windows::Forms::Label^ labelOpenDepositAccountID;

	protected:




	protected:





















































	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonArrangeLoan = (gcnew System::Windows::Forms::Button());
			this->label�heckGetLoanRate = (gcnew System::Windows::Forms::Label());
			this->textBox�heckGetLoaRate = (gcnew System::Windows::Forms::TextBox());
			this->label�heckGetLoanName = (gcnew System::Windows::Forms::Label());
			this->label�heckGetLoanTotalAmount = (gcnew System::Windows::Forms::Label());
			this->label�heckGetLoanAmount = (gcnew System::Windows::Forms::Label());
			this->textBox�heckGetLoanTotalAmount = (gcnew System::Windows::Forms::TextBox());
			this->textBox�heckGetLoanName = (gcnew System::Windows::Forms::TextBox());
			this->label�heckGetLoanDate = (gcnew System::Windows::Forms::Label());
			this->textBox�heckGetLoanAmount = (gcnew System::Windows::Forms::TextBox());
			this->textBox�heckGetLoanDate = (gcnew System::Windows::Forms::TextBox());
			this->groupBox�heckGetLoan = (gcnew System::Windows::Forms::GroupBox());
			this->numericGetLoanAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxGetLoanName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelGetLoanName = (gcnew System::Windows::Forms::Label());
			this->radioButtonGetLoan18m = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonGetLoan12m = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonGetLoan9m = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonGetLoan6m = (gcnew System::Windows::Forms::RadioButton());
			this->labelGetLoanTime = (gcnew System::Windows::Forms::Label());
			this->groupBoxGetLoan = (gcnew System::Windows::Forms::GroupBox());
			this->labelGetLoanAmount = (gcnew System::Windows::Forms::Label());
			this->buttonGetLoanContinue = (gcnew System::Windows::Forms::Button());
			this->comboBoxOpenDepositAccountID = (gcnew System::Windows::Forms::ComboBox());
			this->labelOpenDepositAccountID = (gcnew System::Windows::Forms::Label());
			this->groupBox�heckGetLoan->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericGetLoanAmount))->BeginInit();
			this->groupBoxGetLoan->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonArrangeLoan
			// 
			this->buttonArrangeLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonArrangeLoan->Location = System::Drawing::Point(538, 348);
			this->buttonArrangeLoan->Name = L"buttonArrangeLoan";
			this->buttonArrangeLoan->Size = System::Drawing::Size(193, 44);
			this->buttonArrangeLoan->TabIndex = 63;
			this->buttonArrangeLoan->Text = L"��������";
			this->buttonArrangeLoan->UseVisualStyleBackColor = true;
			// 
			// label�heckGetLoanRate
			// 
			this->label�heckGetLoanRate->AutoSize = true;
			this->label�heckGetLoanRate->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckGetLoanRate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckGetLoanRate->Location = System::Drawing::Point(97, 137);
			this->label�heckGetLoanRate->Name = L"label�heckGetLoanRate";
			this->label�heckGetLoanRate->Size = System::Drawing::Size(75, 24);
			this->label�heckGetLoanRate->TabIndex = 22;
			this->label�heckGetLoanRate->Text = L"������:";
			this->label�heckGetLoanRate->Visible = false;
			// 
			// textBox�heckGetLoaRate
			// 
			this->textBox�heckGetLoaRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckGetLoaRate->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckGetLoaRate->Location = System::Drawing::Point(184, 134);
			this->textBox�heckGetLoaRate->MaxLength = 10;
			this->textBox�heckGetLoaRate->Name = L"textBox�heckGetLoaRate";
			this->textBox�heckGetLoaRate->ReadOnly = true;
			this->textBox�heckGetLoaRate->Size = System::Drawing::Size(213, 30);
			this->textBox�heckGetLoaRate->TabIndex = 21;
			this->textBox�heckGetLoaRate->Visible = false;
			// 
			// label�heckGetLoanName
			// 
			this->label�heckGetLoanName->AutoSize = true;
			this->label�heckGetLoanName->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckGetLoanName->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckGetLoanName->Location = System::Drawing::Point(75, 26);
			this->label�heckGetLoanName->Name = L"label�heckGetLoanName";
			this->label�heckGetLoanName->Size = System::Drawing::Size(97, 24);
			this->label�heckGetLoanName->TabIndex = 10;
			this->label�heckGetLoanName->Text = L"��������:";
			this->label�heckGetLoanName->Visible = false;
			// 
			// label�heckGetLoanTotalAmount
			// 
			this->label�heckGetLoanTotalAmount->AutoSize = true;
			this->label�heckGetLoanTotalAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckGetLoanTotalAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckGetLoanTotalAmount->Location = System::Drawing::Point(21, 174);
			this->label�heckGetLoanTotalAmount->Name = L"label�heckGetLoanTotalAmount";
			this->label�heckGetLoanTotalAmount->Size = System::Drawing::Size(151, 24);
			this->label�heckGetLoanTotalAmount->TabIndex = 20;
			this->label�heckGetLoanTotalAmount->Text = L"�������� �����:";
			this->label�heckGetLoanTotalAmount->Visible = false;
			// 
			// label�heckGetLoanAmount
			// 
			this->label�heckGetLoanAmount->AutoSize = true;
			this->label�heckGetLoanAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckGetLoanAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckGetLoanAmount->Location = System::Drawing::Point(100, 63);
			this->label�heckGetLoanAmount->Name = L"label�heckGetLoanAmount";
			this->label�heckGetLoanAmount->Size = System::Drawing::Size(72, 24);
			this->label�heckGetLoanAmount->TabIndex = 12;
			this->label�heckGetLoanAmount->Text = L"�����:";
			this->label�heckGetLoanAmount->Visible = false;
			// 
			// textBox�heckGetLoanTotalAmount
			// 
			this->textBox�heckGetLoanTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckGetLoanTotalAmount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckGetLoanTotalAmount->Location = System::Drawing::Point(184, 171);
			this->textBox�heckGetLoanTotalAmount->MaxLength = 10;
			this->textBox�heckGetLoanTotalAmount->Name = L"textBox�heckGetLoanTotalAmount";
			this->textBox�heckGetLoanTotalAmount->ReadOnly = true;
			this->textBox�heckGetLoanTotalAmount->Size = System::Drawing::Size(213, 30);
			this->textBox�heckGetLoanTotalAmount->TabIndex = 19;
			this->textBox�heckGetLoanTotalAmount->Visible = false;
			// 
			// textBox�heckGetLoanName
			// 
			this->textBox�heckGetLoanName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckGetLoanName->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckGetLoanName->Location = System::Drawing::Point(184, 23);
			this->textBox�heckGetLoanName->MaxLength = 10;
			this->textBox�heckGetLoanName->Name = L"textBox�heckGetLoanName";
			this->textBox�heckGetLoanName->ReadOnly = true;
			this->textBox�heckGetLoanName->Size = System::Drawing::Size(213, 30);
			this->textBox�heckGetLoanName->TabIndex = 13;
			this->textBox�heckGetLoanName->Visible = false;
			// 
			// label�heckGetLoanDate
			// 
			this->label�heckGetLoanDate->AutoSize = true;
			this->label�heckGetLoanDate->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckGetLoanDate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckGetLoanDate->Location = System::Drawing::Point(89, 100);
			this->label�heckGetLoanDate->Name = L"label�heckGetLoanDate";
			this->label�heckGetLoanDate->Size = System::Drawing::Size(83, 24);
			this->label�heckGetLoanDate->TabIndex = 18;
			this->label�heckGetLoanDate->Text = L"����: ��";
			this->label�heckGetLoanDate->Visible = false;
			// 
			// textBox�heckGetLoanAmount
			// 
			this->textBox�heckGetLoanAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckGetLoanAmount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckGetLoanAmount->Location = System::Drawing::Point(184, 60);
			this->textBox�heckGetLoanAmount->MaxLength = 10;
			this->textBox�heckGetLoanAmount->Name = L"textBox�heckGetLoanAmount";
			this->textBox�heckGetLoanAmount->ReadOnly = true;
			this->textBox�heckGetLoanAmount->Size = System::Drawing::Size(213, 30);
			this->textBox�heckGetLoanAmount->TabIndex = 14;
			this->textBox�heckGetLoanAmount->Visible = false;
			// 
			// textBox�heckGetLoanDate
			// 
			this->textBox�heckGetLoanDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckGetLoanDate->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckGetLoanDate->Location = System::Drawing::Point(184, 97);
			this->textBox�heckGetLoanDate->MaxLength = 10;
			this->textBox�heckGetLoanDate->Name = L"textBox�heckGetLoanDate";
			this->textBox�heckGetLoanDate->ReadOnly = true;
			this->textBox�heckGetLoanDate->Size = System::Drawing::Size(213, 30);
			this->textBox�heckGetLoanDate->TabIndex = 16;
			this->textBox�heckGetLoanDate->Visible = false;
			// 
			// groupBox�heckGetLoan
			// 
			this->groupBox�heckGetLoan->Controls->Add(this->label�heckGetLoanRate);
			this->groupBox�heckGetLoan->Controls->Add(this->textBox�heckGetLoaRate);
			this->groupBox�heckGetLoan->Controls->Add(this->label�heckGetLoanName);
			this->groupBox�heckGetLoan->Controls->Add(this->label�heckGetLoanTotalAmount);
			this->groupBox�heckGetLoan->Controls->Add(this->label�heckGetLoanAmount);
			this->groupBox�heckGetLoan->Controls->Add(this->textBox�heckGetLoanTotalAmount);
			this->groupBox�heckGetLoan->Controls->Add(this->textBox�heckGetLoanName);
			this->groupBox�heckGetLoan->Controls->Add(this->label�heckGetLoanDate);
			this->groupBox�heckGetLoan->Controls->Add(this->textBox�heckGetLoanAmount);
			this->groupBox�heckGetLoan->Controls->Add(this->textBox�heckGetLoanDate);
			this->groupBox�heckGetLoan->Location = System::Drawing::Point(418, 109);
			this->groupBox�heckGetLoan->Name = L"groupBox�heckGetLoan";
			this->groupBox�heckGetLoan->Size = System::Drawing::Size(423, 221);
			this->groupBox�heckGetLoan->TabIndex = 62;
			this->groupBox�heckGetLoan->TabStop = false;
			this->groupBox�heckGetLoan->Visible = false;
			// 
			// numericGetLoanAmount
			// 
			this->numericGetLoanAmount->DecimalPlaces = 2;
			this->numericGetLoanAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericGetLoanAmount->Location = System::Drawing::Point(20, 117);
			this->numericGetLoanAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999999, 0, 0, 196608 });
			this->numericGetLoanAmount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericGetLoanAmount->Name = L"numericGetLoanAmount";
			this->numericGetLoanAmount->Size = System::Drawing::Size(234, 38);
			this->numericGetLoanAmount->TabIndex = 60;
			this->numericGetLoanAmount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// textBoxGetLoanName
			// 
			this->textBoxGetLoanName->BeepOnError = true;
			this->textBoxGetLoanName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxGetLoanName->HidePromptOnLeave = true;
			this->textBoxGetLoanName->Location = System::Drawing::Point(19, 273);
			this->textBoxGetLoanName->Mask = L"AAAAAAAAAAAAAAA";
			this->textBoxGetLoanName->Name = L"textBoxGetLoanName";
			this->textBoxGetLoanName->ResetOnPrompt = false;
			this->textBoxGetLoanName->ResetOnSpace = false;
			this->textBoxGetLoanName->Size = System::Drawing::Size(235, 38);
			this->textBoxGetLoanName->TabIndex = 60;
			// 
			// labelGetLoanName
			// 
			this->labelGetLoanName->AutoSize = true;
			this->labelGetLoanName->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGetLoanName->Location = System::Drawing::Point(16, 246);
			this->labelGetLoanName->Name = L"labelGetLoanName";
			this->labelGetLoanName->Size = System::Drawing::Size(167, 24);
			this->labelGetLoanName->TabIndex = 14;
			this->labelGetLoanName->Text = L"������� ��������";
			// 
			// radioButtonGetLoan18m
			// 
			this->radioButtonGetLoan18m->AutoSize = true;
			this->radioButtonGetLoan18m->Location = System::Drawing::Point(129, 218);
			this->radioButtonGetLoan18m->Name = L"radioButtonGetLoan18m";
			this->radioButtonGetLoan18m->Size = System::Drawing::Size(104, 21);
			this->radioButtonGetLoan18m->TabIndex = 12;
			this->radioButtonGetLoan18m->TabStop = true;
			this->radioButtonGetLoan18m->Text = L"18 �������";
			this->radioButtonGetLoan18m->UseVisualStyleBackColor = true;
			// 
			// radioButtonGetLoan12m
			// 
			this->radioButtonGetLoan12m->AutoSize = true;
			this->radioButtonGetLoan12m->Location = System::Drawing::Point(129, 191);
			this->radioButtonGetLoan12m->Name = L"radioButtonGetLoan12m";
			this->radioButtonGetLoan12m->Size = System::Drawing::Size(104, 21);
			this->radioButtonGetLoan12m->TabIndex = 11;
			this->radioButtonGetLoan12m->TabStop = true;
			this->radioButtonGetLoan12m->Text = L"12 �������";
			this->radioButtonGetLoan12m->UseVisualStyleBackColor = true;
			// 
			// radioButtonGetLoan9m
			// 
			this->radioButtonGetLoan9m->AutoSize = true;
			this->radioButtonGetLoan9m->Location = System::Drawing::Point(19, 218);
			this->radioButtonGetLoan9m->Name = L"radioButtonGetLoan9m";
			this->radioButtonGetLoan9m->Size = System::Drawing::Size(96, 21);
			this->radioButtonGetLoan9m->TabIndex = 10;
			this->radioButtonGetLoan9m->TabStop = true;
			this->radioButtonGetLoan9m->Text = L"9 �������";
			this->radioButtonGetLoan9m->UseVisualStyleBackColor = true;
			// 
			// radioButtonGetLoan6m
			// 
			this->radioButtonGetLoan6m->AutoSize = true;
			this->radioButtonGetLoan6m->Checked = true;
			this->radioButtonGetLoan6m->Location = System::Drawing::Point(20, 191);
			this->radioButtonGetLoan6m->Name = L"radioButtonGetLoan6m";
			this->radioButtonGetLoan6m->Size = System::Drawing::Size(96, 21);
			this->radioButtonGetLoan6m->TabIndex = 9;
			this->radioButtonGetLoan6m->TabStop = true;
			this->radioButtonGetLoan6m->Text = L"6 �������";
			this->radioButtonGetLoan6m->UseVisualStyleBackColor = true;
			// 
			// labelGetLoanTime
			// 
			this->labelGetLoanTime->AutoSize = true;
			this->labelGetLoanTime->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGetLoanTime->Location = System::Drawing::Point(16, 160);
			this->labelGetLoanTime->Name = L"labelGetLoanTime";
			this->labelGetLoanTime->Size = System::Drawing::Size(201, 24);
			this->labelGetLoanTime->TabIndex = 8;
			this->labelGetLoanTime->Text = L"�������� ���� �����";
			// 
			// groupBoxGetLoan
			// 
			this->groupBoxGetLoan->Controls->Add(this->numericGetLoanAmount);
			this->groupBoxGetLoan->Controls->Add(this->comboBoxOpenDepositAccountID);
			this->groupBoxGetLoan->Controls->Add(this->textBoxGetLoanName);
			this->groupBoxGetLoan->Controls->Add(this->labelGetLoanName);
			this->groupBoxGetLoan->Controls->Add(this->radioButtonGetLoan18m);
			this->groupBoxGetLoan->Controls->Add(this->labelOpenDepositAccountID);
			this->groupBoxGetLoan->Controls->Add(this->radioButtonGetLoan12m);
			this->groupBoxGetLoan->Controls->Add(this->radioButtonGetLoan9m);
			this->groupBoxGetLoan->Controls->Add(this->radioButtonGetLoan6m);
			this->groupBoxGetLoan->Controls->Add(this->labelGetLoanTime);
			this->groupBoxGetLoan->Controls->Add(this->labelGetLoanAmount);
			this->groupBoxGetLoan->Location = System::Drawing::Point(76, 28);
			this->groupBoxGetLoan->Name = L"groupBoxGetLoan";
			this->groupBoxGetLoan->Size = System::Drawing::Size(273, 330);
			this->groupBoxGetLoan->TabIndex = 60;
			this->groupBoxGetLoan->TabStop = false;
			// 
			// labelGetLoanAmount
			// 
			this->labelGetLoanAmount->AutoSize = true;
			this->labelGetLoanAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelGetLoanAmount->Location = System::Drawing::Point(16, 90);
			this->labelGetLoanAmount->Name = L"labelGetLoanAmount";
			this->labelGetLoanAmount->Size = System::Drawing::Size(196, 24);
			this->labelGetLoanAmount->TabIndex = 7;
			this->labelGetLoanAmount->Text = L"������� ����� �����";
			// 
			// buttonGetLoanContinue
			// 
			this->buttonGetLoanContinue->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonGetLoanContinue->Location = System::Drawing::Point(116, 368);
			this->buttonGetLoanContinue->Name = L"buttonGetLoanContinue";
			this->buttonGetLoanContinue->Size = System::Drawing::Size(193, 44);
			this->buttonGetLoanContinue->TabIndex = 61;
			this->buttonGetLoanContinue->Text = L"����������";
			this->buttonGetLoanContinue->UseVisualStyleBackColor = true;
			// 
			// comboBoxOpenDepositAccountID
			// 
			this->comboBoxOpenDepositAccountID->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxOpenDepositAccountID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxOpenDepositAccountID->FormattingEnabled = true;
			this->comboBoxOpenDepositAccountID->Location = System::Drawing::Point(19, 48);
			this->comboBoxOpenDepositAccountID->Name = L"comboBoxOpenDepositAccountID";
			this->comboBoxOpenDepositAccountID->Size = System::Drawing::Size(233, 39);
			this->comboBoxOpenDepositAccountID->TabIndex = 85;
			// 
			// labelOpenDepositAccountID
			// 
			this->labelOpenDepositAccountID->AutoSize = true;
			this->labelOpenDepositAccountID->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelOpenDepositAccountID->Location = System::Drawing::Point(14, 22);
			this->labelOpenDepositAccountID->Name = L"labelOpenDepositAccountID";
			this->labelOpenDepositAccountID->Size = System::Drawing::Size(225, 24);
			this->labelOpenDepositAccountID->TabIndex = 5;
			this->labelOpenDepositAccountID->Text = L"�������� ���� ��������";
			// 
			// FormGetLoan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 505);
			this->Controls->Add(this->buttonArrangeLoan);
			this->Controls->Add(this->groupBox�heckGetLoan);
			this->Controls->Add(this->groupBoxGetLoan);
			this->Controls->Add(this->buttonGetLoanContinue);
			this->Name = L"FormGetLoan";
			this->Text = L"FormGetLoan";
			this->groupBox�heckGetLoan->ResumeLayout(false);
			this->groupBox�heckGetLoan->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericGetLoanAmount))->EndInit();
			this->groupBoxGetLoan->ResumeLayout(false);
			this->groupBoxGetLoan->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
