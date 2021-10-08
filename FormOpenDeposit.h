#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� FormOpenDeposit
	/// </summary>
	public ref class FormOpenDeposit : public System::Windows::Forms::Form
	{
	public:
		FormOpenDeposit(void)
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
		~FormOpenDeposit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label�heckOpenDepositAmount;
	protected:
	private: System::Windows::Forms::TextBox^ textBox�heckOpenDepositName;
	private: System::Windows::Forms::Label^ label�heckOpenDepositDate;
	private: System::Windows::Forms::MaskedTextBox^ textBoxOpenDepositName;
	private: System::Windows::Forms::NumericUpDown^ numericOpenDepositAmount;
	private: System::Windows::Forms::Label^ labelOpenDepositName;
	private: System::Windows::Forms::ComboBox^ comboBoxOpenDepositAccountID;
	private: System::Windows::Forms::RadioButton^ radioButtonOpenDeposit18m;
	private: System::Windows::Forms::TextBox^ textBox�heckOpenDepositAmount;
	private: System::Windows::Forms::RadioButton^ radioButtonOpenDeposit12m;
	private: System::Windows::Forms::RadioButton^ radioButtonOpenDeposit6m;
	private: System::Windows::Forms::Label^ labelOpenDepositTime;
	private: System::Windows::Forms::Label^ labelOpenDepositAmount;
	private: System::Windows::Forms::TextBox^ textBox�heckOpenDepositTotalAmount;
	private: System::Windows::Forms::Label^ label�heckOpenDepositAccount;
	private: System::Windows::Forms::TextBox^ textBox�heckOpenDepositAccount;
	private: System::Windows::Forms::RadioButton^ radioButtonOpenDeposit9m;
	private: System::Windows::Forms::Label^ labelCheckDepLoan;
	private: System::Windows::Forms::Label^ labelOpenDepositAccountID;
	private: System::Windows::Forms::Label^ label�heckOpenDepositRate;
	private: System::Windows::Forms::TextBox^ textBox�heckOpenDepositRate;
	private: System::Windows::Forms::Label^ label�heckOpenDepositName;
	private: System::Windows::Forms::GroupBox^ groupBox�heckOpenDeposit;
	private: System::Windows::Forms::Label^ label�heckOpenDepositTotalAmount;
	private: System::Windows::Forms::TextBox^ textBox�heckOpenDepositDate;
	private: System::Windows::Forms::Button^ buttonOpenDepositContinue;
	private: System::Windows::Forms::GroupBox^ groupBoxOpenDeposit;
	private: System::Windows::Forms::Button^ buttonArrangeDeposit;

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
			this->label�heckOpenDepositAmount = (gcnew System::Windows::Forms::Label());
			this->textBox�heckOpenDepositName = (gcnew System::Windows::Forms::TextBox());
			this->label�heckOpenDepositDate = (gcnew System::Windows::Forms::Label());
			this->textBoxOpenDepositName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->numericOpenDepositAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelOpenDepositName = (gcnew System::Windows::Forms::Label());
			this->comboBoxOpenDepositAccountID = (gcnew System::Windows::Forms::ComboBox());
			this->radioButtonOpenDeposit18m = (gcnew System::Windows::Forms::RadioButton());
			this->textBox�heckOpenDepositAmount = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonOpenDeposit12m = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOpenDeposit6m = (gcnew System::Windows::Forms::RadioButton());
			this->labelOpenDepositTime = (gcnew System::Windows::Forms::Label());
			this->labelOpenDepositAmount = (gcnew System::Windows::Forms::Label());
			this->textBox�heckOpenDepositTotalAmount = (gcnew System::Windows::Forms::TextBox());
			this->label�heckOpenDepositAccount = (gcnew System::Windows::Forms::Label());
			this->textBox�heckOpenDepositAccount = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonOpenDeposit9m = (gcnew System::Windows::Forms::RadioButton());
			this->labelCheckDepLoan = (gcnew System::Windows::Forms::Label());
			this->labelOpenDepositAccountID = (gcnew System::Windows::Forms::Label());
			this->label�heckOpenDepositRate = (gcnew System::Windows::Forms::Label());
			this->textBox�heckOpenDepositRate = (gcnew System::Windows::Forms::TextBox());
			this->label�heckOpenDepositName = (gcnew System::Windows::Forms::Label());
			this->groupBox�heckOpenDeposit = (gcnew System::Windows::Forms::GroupBox());
			this->label�heckOpenDepositTotalAmount = (gcnew System::Windows::Forms::Label());
			this->textBox�heckOpenDepositDate = (gcnew System::Windows::Forms::TextBox());
			this->buttonOpenDepositContinue = (gcnew System::Windows::Forms::Button());
			this->groupBoxOpenDeposit = (gcnew System::Windows::Forms::GroupBox());
			this->buttonArrangeDeposit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericOpenDepositAmount))->BeginInit();
			this->groupBox�heckOpenDeposit->SuspendLayout();
			this->groupBoxOpenDeposit->SuspendLayout();
			this->SuspendLayout();
			// 
			// label�heckOpenDepositAmount
			// 
			this->label�heckOpenDepositAmount->AutoSize = true;
			this->label�heckOpenDepositAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckOpenDepositAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckOpenDepositAmount->Location = System::Drawing::Point(100, 63);
			this->label�heckOpenDepositAmount->Name = L"label�heckOpenDepositAmount";
			this->label�heckOpenDepositAmount->Size = System::Drawing::Size(72, 24);
			this->label�heckOpenDepositAmount->TabIndex = 12;
			this->label�heckOpenDepositAmount->Text = L"�����:";
			this->label�heckOpenDepositAmount->Visible = false;
			// 
			// textBox�heckOpenDepositName
			// 
			this->textBox�heckOpenDepositName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckOpenDepositName->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckOpenDepositName->Location = System::Drawing::Point(184, 23);
			this->textBox�heckOpenDepositName->MaxLength = 10;
			this->textBox�heckOpenDepositName->Name = L"textBox�heckOpenDepositName";
			this->textBox�heckOpenDepositName->ReadOnly = true;
			this->textBox�heckOpenDepositName->Size = System::Drawing::Size(213, 30);
			this->textBox�heckOpenDepositName->TabIndex = 13;
			this->textBox�heckOpenDepositName->Visible = false;
			// 
			// label�heckOpenDepositDate
			// 
			this->label�heckOpenDepositDate->AutoSize = true;
			this->label�heckOpenDepositDate->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckOpenDepositDate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckOpenDepositDate->Location = System::Drawing::Point(89, 137);
			this->label�heckOpenDepositDate->Name = L"label�heckOpenDepositDate";
			this->label�heckOpenDepositDate->Size = System::Drawing::Size(83, 24);
			this->label�heckOpenDepositDate->TabIndex = 18;
			this->label�heckOpenDepositDate->Text = L"����: ��";
			this->label�heckOpenDepositDate->Visible = false;
			// 
			// textBoxOpenDepositName
			// 
			this->textBoxOpenDepositName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxOpenDepositName->HidePromptOnLeave = true;
			this->textBoxOpenDepositName->Location = System::Drawing::Point(20, 271);
			this->textBoxOpenDepositName->Mask = L"AAAAAAAAAAAAAAA";
			this->textBoxOpenDepositName->Name = L"textBoxOpenDepositName";
			this->textBoxOpenDepositName->ResetOnPrompt = false;
			this->textBoxOpenDepositName->ResetOnSpace = false;
			this->textBoxOpenDepositName->Size = System::Drawing::Size(234, 38);
			this->textBoxOpenDepositName->TabIndex = 87;
			// 
			// numericOpenDepositAmount
			// 
			this->numericOpenDepositAmount->DecimalPlaces = 2;
			this->numericOpenDepositAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericOpenDepositAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->numericOpenDepositAmount->Location = System::Drawing::Point(19, 116);
			this->numericOpenDepositAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 131072 });
			this->numericOpenDepositAmount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericOpenDepositAmount->Name = L"numericOpenDepositAmount";
			this->numericOpenDepositAmount->Size = System::Drawing::Size(234, 38);
			this->numericOpenDepositAmount->TabIndex = 86;
			this->numericOpenDepositAmount->ThousandsSeparator = true;
			this->numericOpenDepositAmount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// labelOpenDepositName
			// 
			this->labelOpenDepositName->AutoSize = true;
			this->labelOpenDepositName->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelOpenDepositName->Location = System::Drawing::Point(16, 245);
			this->labelOpenDepositName->Name = L"labelOpenDepositName";
			this->labelOpenDepositName->Size = System::Drawing::Size(167, 24);
			this->labelOpenDepositName->TabIndex = 14;
			this->labelOpenDepositName->Text = L"������� ��������";
			// 
			// comboBoxOpenDepositAccountID
			// 
			this->comboBoxOpenDepositAccountID->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxOpenDepositAccountID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxOpenDepositAccountID->FormattingEnabled = true;
			this->comboBoxOpenDepositAccountID->Location = System::Drawing::Point(20, 45);
			this->comboBoxOpenDepositAccountID->Name = L"comboBoxOpenDepositAccountID";
			this->comboBoxOpenDepositAccountID->Size = System::Drawing::Size(233, 39);
			this->comboBoxOpenDepositAccountID->TabIndex = 85;
			// 
			// radioButtonOpenDeposit18m
			// 
			this->radioButtonOpenDeposit18m->AutoSize = true;
			this->radioButtonOpenDeposit18m->Location = System::Drawing::Point(129, 217);
			this->radioButtonOpenDeposit18m->Name = L"radioButtonOpenDeposit18m";
			this->radioButtonOpenDeposit18m->Size = System::Drawing::Size(104, 21);
			this->radioButtonOpenDeposit18m->TabIndex = 12;
			this->radioButtonOpenDeposit18m->Text = L"18 �������";
			this->radioButtonOpenDeposit18m->UseVisualStyleBackColor = true;
			// 
			// textBox�heckOpenDepositAmount
			// 
			this->textBox�heckOpenDepositAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckOpenDepositAmount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckOpenDepositAmount->Location = System::Drawing::Point(184, 60);
			this->textBox�heckOpenDepositAmount->MaxLength = 10;
			this->textBox�heckOpenDepositAmount->Name = L"textBox�heckOpenDepositAmount";
			this->textBox�heckOpenDepositAmount->ReadOnly = true;
			this->textBox�heckOpenDepositAmount->Size = System::Drawing::Size(213, 30);
			this->textBox�heckOpenDepositAmount->TabIndex = 14;
			this->textBox�heckOpenDepositAmount->Visible = false;
			// 
			// radioButtonOpenDeposit12m
			// 
			this->radioButtonOpenDeposit12m->AutoSize = true;
			this->radioButtonOpenDeposit12m->Location = System::Drawing::Point(129, 190);
			this->radioButtonOpenDeposit12m->Name = L"radioButtonOpenDeposit12m";
			this->radioButtonOpenDeposit12m->Size = System::Drawing::Size(104, 21);
			this->radioButtonOpenDeposit12m->TabIndex = 11;
			this->radioButtonOpenDeposit12m->Text = L"12 �������";
			this->radioButtonOpenDeposit12m->UseVisualStyleBackColor = true;
			// 
			// radioButtonOpenDeposit6m
			// 
			this->radioButtonOpenDeposit6m->AutoSize = true;
			this->radioButtonOpenDeposit6m->Checked = true;
			this->radioButtonOpenDeposit6m->Location = System::Drawing::Point(20, 190);
			this->radioButtonOpenDeposit6m->Name = L"radioButtonOpenDeposit6m";
			this->radioButtonOpenDeposit6m->Size = System::Drawing::Size(96, 21);
			this->radioButtonOpenDeposit6m->TabIndex = 9;
			this->radioButtonOpenDeposit6m->TabStop = true;
			this->radioButtonOpenDeposit6m->Text = L"6 �������";
			this->radioButtonOpenDeposit6m->UseVisualStyleBackColor = true;
			// 
			// labelOpenDepositTime
			// 
			this->labelOpenDepositTime->AutoSize = true;
			this->labelOpenDepositTime->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelOpenDepositTime->Location = System::Drawing::Point(16, 159);
			this->labelOpenDepositTime->Name = L"labelOpenDepositTime";
			this->labelOpenDepositTime->Size = System::Drawing::Size(226, 24);
			this->labelOpenDepositTime->TabIndex = 8;
			this->labelOpenDepositTime->Text = L"�������� ���� ��������";
			// 
			// labelOpenDepositAmount
			// 
			this->labelOpenDepositAmount->AutoSize = true;
			this->labelOpenDepositAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelOpenDepositAmount->Location = System::Drawing::Point(16, 89);
			this->labelOpenDepositAmount->Name = L"labelOpenDepositAmount";
			this->labelOpenDepositAmount->Size = System::Drawing::Size(221, 24);
			this->labelOpenDepositAmount->TabIndex = 7;
			this->labelOpenDepositAmount->Text = L"������� ����� ��������";
			// 
			// textBox�heckOpenDepositTotalAmount
			// 
			this->textBox�heckOpenDepositTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckOpenDepositTotalAmount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckOpenDepositTotalAmount->Location = System::Drawing::Point(184, 208);
			this->textBox�heckOpenDepositTotalAmount->MaxLength = 10;
			this->textBox�heckOpenDepositTotalAmount->Name = L"textBox�heckOpenDepositTotalAmount";
			this->textBox�heckOpenDepositTotalAmount->ReadOnly = true;
			this->textBox�heckOpenDepositTotalAmount->Size = System::Drawing::Size(213, 30);
			this->textBox�heckOpenDepositTotalAmount->TabIndex = 19;
			this->textBox�heckOpenDepositTotalAmount->Visible = false;
			// 
			// label�heckOpenDepositAccount
			// 
			this->label�heckOpenDepositAccount->AutoSize = true;
			this->label�heckOpenDepositAccount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckOpenDepositAccount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckOpenDepositAccount->Location = System::Drawing::Point(31, 100);
			this->label�heckOpenDepositAccount->Name = L"label�heckOpenDepositAccount";
			this->label�heckOpenDepositAccount->Size = System::Drawing::Size(141, 24);
			this->label�heckOpenDepositAccount->TabIndex = 17;
			this->label�heckOpenDepositAccount->Text = L"���� ��������:";
			this->label�heckOpenDepositAccount->Visible = false;
			// 
			// textBox�heckOpenDepositAccount
			// 
			this->textBox�heckOpenDepositAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckOpenDepositAccount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckOpenDepositAccount->Location = System::Drawing::Point(184, 97);
			this->textBox�heckOpenDepositAccount->MaxLength = 10;
			this->textBox�heckOpenDepositAccount->Name = L"textBox�heckOpenDepositAccount";
			this->textBox�heckOpenDepositAccount->ReadOnly = true;
			this->textBox�heckOpenDepositAccount->Size = System::Drawing::Size(213, 30);
			this->textBox�heckOpenDepositAccount->TabIndex = 15;
			this->textBox�heckOpenDepositAccount->Visible = false;
			// 
			// radioButtonOpenDeposit9m
			// 
			this->radioButtonOpenDeposit9m->AutoSize = true;
			this->radioButtonOpenDeposit9m->Location = System::Drawing::Point(19, 217);
			this->radioButtonOpenDeposit9m->Name = L"radioButtonOpenDeposit9m";
			this->radioButtonOpenDeposit9m->Size = System::Drawing::Size(96, 21);
			this->radioButtonOpenDeposit9m->TabIndex = 10;
			this->radioButtonOpenDeposit9m->Text = L"9 �������";
			this->radioButtonOpenDeposit9m->UseVisualStyleBackColor = true;
			// 
			// labelCheckDepLoan
			// 
			this->labelCheckDepLoan->AutoSize = true;
			this->labelCheckDepLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelCheckDepLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelCheckDepLoan->Location = System::Drawing::Point(508, 117);
			this->labelCheckDepLoan->Name = L"labelCheckDepLoan";
			this->labelCheckDepLoan->Size = System::Drawing::Size(388, 24);
			this->labelCheckDepLoan->TabIndex = 61;
			this->labelCheckDepLoan->Text = L"��������� ������������ �������� ������!";
			this->labelCheckDepLoan->Visible = false;
			// 
			// labelOpenDepositAccountID
			// 
			this->labelOpenDepositAccountID->AutoSize = true;
			this->labelOpenDepositAccountID->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelOpenDepositAccountID->Location = System::Drawing::Point(15, 19);
			this->labelOpenDepositAccountID->Name = L"labelOpenDepositAccountID";
			this->labelOpenDepositAccountID->Size = System::Drawing::Size(225, 24);
			this->labelOpenDepositAccountID->TabIndex = 5;
			this->labelOpenDepositAccountID->Text = L"�������� ���� ��������";
			// 
			// label�heckOpenDepositRate
			// 
			this->label�heckOpenDepositRate->AutoSize = true;
			this->label�heckOpenDepositRate->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckOpenDepositRate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckOpenDepositRate->Location = System::Drawing::Point(97, 174);
			this->label�heckOpenDepositRate->Name = L"label�heckOpenDepositRate";
			this->label�heckOpenDepositRate->Size = System::Drawing::Size(75, 24);
			this->label�heckOpenDepositRate->TabIndex = 22;
			this->label�heckOpenDepositRate->Text = L"������:";
			this->label�heckOpenDepositRate->Visible = false;
			// 
			// textBox�heckOpenDepositRate
			// 
			this->textBox�heckOpenDepositRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckOpenDepositRate->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckOpenDepositRate->Location = System::Drawing::Point(184, 171);
			this->textBox�heckOpenDepositRate->MaxLength = 10;
			this->textBox�heckOpenDepositRate->Name = L"textBox�heckOpenDepositRate";
			this->textBox�heckOpenDepositRate->ReadOnly = true;
			this->textBox�heckOpenDepositRate->Size = System::Drawing::Size(213, 30);
			this->textBox�heckOpenDepositRate->TabIndex = 21;
			this->textBox�heckOpenDepositRate->Visible = false;
			// 
			// label�heckOpenDepositName
			// 
			this->label�heckOpenDepositName->AutoSize = true;
			this->label�heckOpenDepositName->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckOpenDepositName->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckOpenDepositName->Location = System::Drawing::Point(75, 26);
			this->label�heckOpenDepositName->Name = L"label�heckOpenDepositName";
			this->label�heckOpenDepositName->Size = System::Drawing::Size(97, 24);
			this->label�heckOpenDepositName->TabIndex = 10;
			this->label�heckOpenDepositName->Text = L"��������:";
			this->label�heckOpenDepositName->Visible = false;
			// 
			// groupBox�heckOpenDeposit
			// 
			this->groupBox�heckOpenDeposit->Controls->Add(this->label�heckOpenDepositRate);
			this->groupBox�heckOpenDeposit->Controls->Add(this->textBox�heckOpenDepositRate);
			this->groupBox�heckOpenDeposit->Controls->Add(this->label�heckOpenDepositName);
			this->groupBox�heckOpenDeposit->Controls->Add(this->label�heckOpenDepositTotalAmount);
			this->groupBox�heckOpenDeposit->Controls->Add(this->label�heckOpenDepositAmount);
			this->groupBox�heckOpenDeposit->Controls->Add(this->textBox�heckOpenDepositTotalAmount);
			this->groupBox�heckOpenDeposit->Controls->Add(this->textBox�heckOpenDepositName);
			this->groupBox�heckOpenDeposit->Controls->Add(this->label�heckOpenDepositDate);
			this->groupBox�heckOpenDeposit->Controls->Add(this->textBox�heckOpenDepositAmount);
			this->groupBox�heckOpenDeposit->Controls->Add(this->label�heckOpenDepositAccount);
			this->groupBox�heckOpenDeposit->Controls->Add(this->textBox�heckOpenDepositAccount);
			this->groupBox�heckOpenDeposit->Controls->Add(this->textBox�heckOpenDepositDate);
			this->groupBox�heckOpenDeposit->Location = System::Drawing::Point(487, 151);
			this->groupBox�heckOpenDeposit->Name = L"groupBox�heckOpenDeposit";
			this->groupBox�heckOpenDeposit->Size = System::Drawing::Size(423, 260);
			this->groupBox�heckOpenDeposit->TabIndex = 62;
			this->groupBox�heckOpenDeposit->TabStop = false;
			this->groupBox�heckOpenDeposit->Visible = false;
			// 
			// label�heckOpenDepositTotalAmount
			// 
			this->label�heckOpenDepositTotalAmount->AutoSize = true;
			this->label�heckOpenDepositTotalAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->label�heckOpenDepositTotalAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label�heckOpenDepositTotalAmount->Location = System::Drawing::Point(21, 211);
			this->label�heckOpenDepositTotalAmount->Name = L"label�heckOpenDepositTotalAmount";
			this->label�heckOpenDepositTotalAmount->Size = System::Drawing::Size(151, 24);
			this->label�heckOpenDepositTotalAmount->TabIndex = 20;
			this->label�heckOpenDepositTotalAmount->Text = L"�������� �����:";
			this->label�heckOpenDepositTotalAmount->Visible = false;
			// 
			// textBox�heckOpenDepositDate
			// 
			this->textBox�heckOpenDepositDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox�heckOpenDepositDate->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox�heckOpenDepositDate->Location = System::Drawing::Point(184, 134);
			this->textBox�heckOpenDepositDate->MaxLength = 10;
			this->textBox�heckOpenDepositDate->Name = L"textBox�heckOpenDepositDate";
			this->textBox�heckOpenDepositDate->ReadOnly = true;
			this->textBox�heckOpenDepositDate->Size = System::Drawing::Size(213, 30);
			this->textBox�heckOpenDepositDate->TabIndex = 16;
			this->textBox�heckOpenDepositDate->Visible = false;
			// 
			// buttonOpenDepositContinue
			// 
			this->buttonOpenDepositContinue->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonOpenDepositContinue->Location = System::Drawing::Point(143, 404);
			this->buttonOpenDepositContinue->Name = L"buttonOpenDepositContinue";
			this->buttonOpenDepositContinue->Size = System::Drawing::Size(193, 44);
			this->buttonOpenDepositContinue->TabIndex = 60;
			this->buttonOpenDepositContinue->Text = L"����������";
			this->buttonOpenDepositContinue->UseVisualStyleBackColor = true;
			// 
			// groupBoxOpenDeposit
			// 
			this->groupBoxOpenDeposit->Controls->Add(this->textBoxOpenDepositName);
			this->groupBoxOpenDeposit->Controls->Add(this->numericOpenDepositAmount);
			this->groupBoxOpenDeposit->Controls->Add(this->labelOpenDepositName);
			this->groupBoxOpenDeposit->Controls->Add(this->comboBoxOpenDepositAccountID);
			this->groupBoxOpenDeposit->Controls->Add(this->radioButtonOpenDeposit18m);
			this->groupBoxOpenDeposit->Controls->Add(this->radioButtonOpenDeposit12m);
			this->groupBoxOpenDeposit->Controls->Add(this->radioButtonOpenDeposit9m);
			this->groupBoxOpenDeposit->Controls->Add(this->radioButtonOpenDeposit6m);
			this->groupBoxOpenDeposit->Controls->Add(this->labelOpenDepositTime);
			this->groupBoxOpenDeposit->Controls->Add(this->labelOpenDepositAmount);
			this->groupBoxOpenDeposit->Controls->Add(this->labelOpenDepositAccountID);
			this->groupBoxOpenDeposit->Location = System::Drawing::Point(103, 62);
			this->groupBoxOpenDeposit->Name = L"groupBoxOpenDeposit";
			this->groupBoxOpenDeposit->Size = System::Drawing::Size(273, 330);
			this->groupBoxOpenDeposit->TabIndex = 59;
			this->groupBoxOpenDeposit->TabStop = false;
			// 
			// buttonArrangeDeposit
			// 
			this->buttonArrangeDeposit->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonArrangeDeposit->Location = System::Drawing::Point(615, 426);
			this->buttonArrangeDeposit->Name = L"buttonArrangeDeposit";
			this->buttonArrangeDeposit->Size = System::Drawing::Size(193, 44);
			this->buttonArrangeDeposit->TabIndex = 63;
			this->buttonArrangeDeposit->Text = L"��������";
			this->buttonArrangeDeposit->UseVisualStyleBackColor = true;
			// 
			// FormOpenDeposit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 533);
			this->Controls->Add(this->labelCheckDepLoan);
			this->Controls->Add(this->groupBox�heckOpenDeposit);
			this->Controls->Add(this->buttonOpenDepositContinue);
			this->Controls->Add(this->groupBoxOpenDeposit);
			this->Controls->Add(this->buttonArrangeDeposit);
			this->Name = L"FormOpenDeposit";
			this->Text = L"FormOpenDeposit";
			this->Load += gcnew System::EventHandler(this, &FormOpenDeposit::FormOpenDeposit_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericOpenDepositAmount))->EndInit();
			this->groupBox�heckOpenDeposit->ResumeLayout(false);
			this->groupBox�heckOpenDeposit->PerformLayout();
			this->groupBoxOpenDeposit->ResumeLayout(false);
			this->groupBoxOpenDeposit->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
