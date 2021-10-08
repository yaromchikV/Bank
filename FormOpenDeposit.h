#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ FormOpenDeposit
	/// </summary>
	public ref class FormOpenDeposit : public System::Windows::Forms::Form
	{
	public:
		FormOpenDeposit(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~FormOpenDeposit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelÑheckOpenDepositAmount;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxÑheckOpenDepositName;
	private: System::Windows::Forms::Label^ labelÑheckOpenDepositDate;
	private: System::Windows::Forms::MaskedTextBox^ textBoxOpenDepositName;
	private: System::Windows::Forms::NumericUpDown^ numericOpenDepositAmount;
	private: System::Windows::Forms::Label^ labelOpenDepositName;
	private: System::Windows::Forms::ComboBox^ comboBoxOpenDepositAccountID;
	private: System::Windows::Forms::RadioButton^ radioButtonOpenDeposit18m;
	private: System::Windows::Forms::TextBox^ textBoxÑheckOpenDepositAmount;
	private: System::Windows::Forms::RadioButton^ radioButtonOpenDeposit12m;
	private: System::Windows::Forms::RadioButton^ radioButtonOpenDeposit6m;
	private: System::Windows::Forms::Label^ labelOpenDepositTime;
	private: System::Windows::Forms::Label^ labelOpenDepositAmount;
	private: System::Windows::Forms::TextBox^ textBoxÑheckOpenDepositTotalAmount;
	private: System::Windows::Forms::Label^ labelÑheckOpenDepositAccount;
	private: System::Windows::Forms::TextBox^ textBoxÑheckOpenDepositAccount;
	private: System::Windows::Forms::RadioButton^ radioButtonOpenDeposit9m;
	private: System::Windows::Forms::Label^ labelCheckDepLoan;
	private: System::Windows::Forms::Label^ labelOpenDepositAccountID;
	private: System::Windows::Forms::Label^ labelÑheckOpenDepositRate;
	private: System::Windows::Forms::TextBox^ textBoxÑheckOpenDepositRate;
	private: System::Windows::Forms::Label^ labelÑheckOpenDepositName;
	private: System::Windows::Forms::GroupBox^ groupBoxÑheckOpenDeposit;
	private: System::Windows::Forms::Label^ labelÑheckOpenDepositTotalAmount;
	private: System::Windows::Forms::TextBox^ textBoxÑheckOpenDepositDate;
	private: System::Windows::Forms::Button^ buttonOpenDepositContinue;
	private: System::Windows::Forms::GroupBox^ groupBoxOpenDeposit;
	private: System::Windows::Forms::Button^ buttonArrangeDeposit;

	protected:

	protected:




































































	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelÑheckOpenDepositAmount = (gcnew System::Windows::Forms::Label());
			this->textBoxÑheckOpenDepositName = (gcnew System::Windows::Forms::TextBox());
			this->labelÑheckOpenDepositDate = (gcnew System::Windows::Forms::Label());
			this->textBoxOpenDepositName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->numericOpenDepositAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelOpenDepositName = (gcnew System::Windows::Forms::Label());
			this->comboBoxOpenDepositAccountID = (gcnew System::Windows::Forms::ComboBox());
			this->radioButtonOpenDeposit18m = (gcnew System::Windows::Forms::RadioButton());
			this->textBoxÑheckOpenDepositAmount = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonOpenDeposit12m = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOpenDeposit6m = (gcnew System::Windows::Forms::RadioButton());
			this->labelOpenDepositTime = (gcnew System::Windows::Forms::Label());
			this->labelOpenDepositAmount = (gcnew System::Windows::Forms::Label());
			this->textBoxÑheckOpenDepositTotalAmount = (gcnew System::Windows::Forms::TextBox());
			this->labelÑheckOpenDepositAccount = (gcnew System::Windows::Forms::Label());
			this->textBoxÑheckOpenDepositAccount = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonOpenDeposit9m = (gcnew System::Windows::Forms::RadioButton());
			this->labelCheckDepLoan = (gcnew System::Windows::Forms::Label());
			this->labelOpenDepositAccountID = (gcnew System::Windows::Forms::Label());
			this->labelÑheckOpenDepositRate = (gcnew System::Windows::Forms::Label());
			this->textBoxÑheckOpenDepositRate = (gcnew System::Windows::Forms::TextBox());
			this->labelÑheckOpenDepositName = (gcnew System::Windows::Forms::Label());
			this->groupBoxÑheckOpenDeposit = (gcnew System::Windows::Forms::GroupBox());
			this->labelÑheckOpenDepositTotalAmount = (gcnew System::Windows::Forms::Label());
			this->textBoxÑheckOpenDepositDate = (gcnew System::Windows::Forms::TextBox());
			this->buttonOpenDepositContinue = (gcnew System::Windows::Forms::Button());
			this->groupBoxOpenDeposit = (gcnew System::Windows::Forms::GroupBox());
			this->buttonArrangeDeposit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericOpenDepositAmount))->BeginInit();
			this->groupBoxÑheckOpenDeposit->SuspendLayout();
			this->groupBoxOpenDeposit->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelÑheckOpenDepositAmount
			// 
			this->labelÑheckOpenDepositAmount->AutoSize = true;
			this->labelÑheckOpenDepositAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckOpenDepositAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckOpenDepositAmount->Location = System::Drawing::Point(100, 63);
			this->labelÑheckOpenDepositAmount->Name = L"labelÑheckOpenDepositAmount";
			this->labelÑheckOpenDepositAmount->Size = System::Drawing::Size(72, 24);
			this->labelÑheckOpenDepositAmount->TabIndex = 12;
			this->labelÑheckOpenDepositAmount->Text = L"Ñóììà:";
			this->labelÑheckOpenDepositAmount->Visible = false;
			// 
			// textBoxÑheckOpenDepositName
			// 
			this->textBoxÑheckOpenDepositName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckOpenDepositName->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckOpenDepositName->Location = System::Drawing::Point(184, 23);
			this->textBoxÑheckOpenDepositName->MaxLength = 10;
			this->textBoxÑheckOpenDepositName->Name = L"textBoxÑheckOpenDepositName";
			this->textBoxÑheckOpenDepositName->ReadOnly = true;
			this->textBoxÑheckOpenDepositName->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckOpenDepositName->TabIndex = 13;
			this->textBoxÑheckOpenDepositName->Visible = false;
			// 
			// labelÑheckOpenDepositDate
			// 
			this->labelÑheckOpenDepositDate->AutoSize = true;
			this->labelÑheckOpenDepositDate->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckOpenDepositDate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckOpenDepositDate->Location = System::Drawing::Point(89, 137);
			this->labelÑheckOpenDepositDate->Name = L"labelÑheckOpenDepositDate";
			this->labelÑheckOpenDepositDate->Size = System::Drawing::Size(83, 24);
			this->labelÑheckOpenDepositDate->TabIndex = 18;
			this->labelÑheckOpenDepositDate->Text = L"Ñğîê: ïî";
			this->labelÑheckOpenDepositDate->Visible = false;
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
			this->labelOpenDepositName->Text = L"Ââåäèòå íàçâàíèå";
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
			this->radioButtonOpenDeposit18m->Text = L"18 ìåñÿöåâ";
			this->radioButtonOpenDeposit18m->UseVisualStyleBackColor = true;
			// 
			// textBoxÑheckOpenDepositAmount
			// 
			this->textBoxÑheckOpenDepositAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckOpenDepositAmount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckOpenDepositAmount->Location = System::Drawing::Point(184, 60);
			this->textBoxÑheckOpenDepositAmount->MaxLength = 10;
			this->textBoxÑheckOpenDepositAmount->Name = L"textBoxÑheckOpenDepositAmount";
			this->textBoxÑheckOpenDepositAmount->ReadOnly = true;
			this->textBoxÑheckOpenDepositAmount->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckOpenDepositAmount->TabIndex = 14;
			this->textBoxÑheckOpenDepositAmount->Visible = false;
			// 
			// radioButtonOpenDeposit12m
			// 
			this->radioButtonOpenDeposit12m->AutoSize = true;
			this->radioButtonOpenDeposit12m->Location = System::Drawing::Point(129, 190);
			this->radioButtonOpenDeposit12m->Name = L"radioButtonOpenDeposit12m";
			this->radioButtonOpenDeposit12m->Size = System::Drawing::Size(104, 21);
			this->radioButtonOpenDeposit12m->TabIndex = 11;
			this->radioButtonOpenDeposit12m->Text = L"12 ìåñÿöåâ";
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
			this->radioButtonOpenDeposit6m->Text = L"6 ìåñÿöåâ";
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
			this->labelOpenDepositTime->Text = L"Âûáåğèòå ñğîê äåïîçèòà";
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
			this->labelOpenDepositAmount->Text = L"Ââåäèòå ñóììó äåïîçèòà";
			// 
			// textBoxÑheckOpenDepositTotalAmount
			// 
			this->textBoxÑheckOpenDepositTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckOpenDepositTotalAmount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckOpenDepositTotalAmount->Location = System::Drawing::Point(184, 208);
			this->textBoxÑheckOpenDepositTotalAmount->MaxLength = 10;
			this->textBoxÑheckOpenDepositTotalAmount->Name = L"textBoxÑheckOpenDepositTotalAmount";
			this->textBoxÑheckOpenDepositTotalAmount->ReadOnly = true;
			this->textBoxÑheckOpenDepositTotalAmount->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckOpenDepositTotalAmount->TabIndex = 19;
			this->textBoxÑheckOpenDepositTotalAmount->Visible = false;
			// 
			// labelÑheckOpenDepositAccount
			// 
			this->labelÑheckOpenDepositAccount->AutoSize = true;
			this->labelÑheckOpenDepositAccount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckOpenDepositAccount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckOpenDepositAccount->Location = System::Drawing::Point(31, 100);
			this->labelÑheckOpenDepositAccount->Name = L"labelÑheckOpenDepositAccount";
			this->labelÑheckOpenDepositAccount->Size = System::Drawing::Size(141, 24);
			this->labelÑheckOpenDepositAccount->TabIndex = 17;
			this->labelÑheckOpenDepositAccount->Text = L"Ñ÷¸ò ñïèñàíèÿ:";
			this->labelÑheckOpenDepositAccount->Visible = false;
			// 
			// textBoxÑheckOpenDepositAccount
			// 
			this->textBoxÑheckOpenDepositAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckOpenDepositAccount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckOpenDepositAccount->Location = System::Drawing::Point(184, 97);
			this->textBoxÑheckOpenDepositAccount->MaxLength = 10;
			this->textBoxÑheckOpenDepositAccount->Name = L"textBoxÑheckOpenDepositAccount";
			this->textBoxÑheckOpenDepositAccount->ReadOnly = true;
			this->textBoxÑheckOpenDepositAccount->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckOpenDepositAccount->TabIndex = 15;
			this->textBoxÑheckOpenDepositAccount->Visible = false;
			// 
			// radioButtonOpenDeposit9m
			// 
			this->radioButtonOpenDeposit9m->AutoSize = true;
			this->radioButtonOpenDeposit9m->Location = System::Drawing::Point(19, 217);
			this->radioButtonOpenDeposit9m->Name = L"radioButtonOpenDeposit9m";
			this->radioButtonOpenDeposit9m->Size = System::Drawing::Size(96, 21);
			this->radioButtonOpenDeposit9m->TabIndex = 10;
			this->radioButtonOpenDeposit9m->Text = L"9 ìåñÿöåâ";
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
			this->labelCheckDepLoan->Text = L"Ïğîâåğüòå ïğàâèëüíîñòü ââåä¸ííûõ äàííûõ!";
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
			this->labelOpenDepositAccountID->Text = L"Âûáåğèòå ñ÷¸ò ñïèñàíèÿ";
			// 
			// labelÑheckOpenDepositRate
			// 
			this->labelÑheckOpenDepositRate->AutoSize = true;
			this->labelÑheckOpenDepositRate->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckOpenDepositRate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckOpenDepositRate->Location = System::Drawing::Point(97, 174);
			this->labelÑheckOpenDepositRate->Name = L"labelÑheckOpenDepositRate";
			this->labelÑheckOpenDepositRate->Size = System::Drawing::Size(75, 24);
			this->labelÑheckOpenDepositRate->TabIndex = 22;
			this->labelÑheckOpenDepositRate->Text = L"Ñòàâêà:";
			this->labelÑheckOpenDepositRate->Visible = false;
			// 
			// textBoxÑheckOpenDepositRate
			// 
			this->textBoxÑheckOpenDepositRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckOpenDepositRate->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckOpenDepositRate->Location = System::Drawing::Point(184, 171);
			this->textBoxÑheckOpenDepositRate->MaxLength = 10;
			this->textBoxÑheckOpenDepositRate->Name = L"textBoxÑheckOpenDepositRate";
			this->textBoxÑheckOpenDepositRate->ReadOnly = true;
			this->textBoxÑheckOpenDepositRate->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckOpenDepositRate->TabIndex = 21;
			this->textBoxÑheckOpenDepositRate->Visible = false;
			// 
			// labelÑheckOpenDepositName
			// 
			this->labelÑheckOpenDepositName->AutoSize = true;
			this->labelÑheckOpenDepositName->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckOpenDepositName->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckOpenDepositName->Location = System::Drawing::Point(75, 26);
			this->labelÑheckOpenDepositName->Name = L"labelÑheckOpenDepositName";
			this->labelÑheckOpenDepositName->Size = System::Drawing::Size(97, 24);
			this->labelÑheckOpenDepositName->TabIndex = 10;
			this->labelÑheckOpenDepositName->Text = L"Íàçâàíèå:";
			this->labelÑheckOpenDepositName->Visible = false;
			// 
			// groupBoxÑheckOpenDeposit
			// 
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->labelÑheckOpenDepositRate);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->textBoxÑheckOpenDepositRate);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->labelÑheckOpenDepositName);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->labelÑheckOpenDepositTotalAmount);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->labelÑheckOpenDepositAmount);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->textBoxÑheckOpenDepositTotalAmount);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->textBoxÑheckOpenDepositName);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->labelÑheckOpenDepositDate);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->textBoxÑheckOpenDepositAmount);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->labelÑheckOpenDepositAccount);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->textBoxÑheckOpenDepositAccount);
			this->groupBoxÑheckOpenDeposit->Controls->Add(this->textBoxÑheckOpenDepositDate);
			this->groupBoxÑheckOpenDeposit->Location = System::Drawing::Point(487, 151);
			this->groupBoxÑheckOpenDeposit->Name = L"groupBoxÑheckOpenDeposit";
			this->groupBoxÑheckOpenDeposit->Size = System::Drawing::Size(423, 260);
			this->groupBoxÑheckOpenDeposit->TabIndex = 62;
			this->groupBoxÑheckOpenDeposit->TabStop = false;
			this->groupBoxÑheckOpenDeposit->Visible = false;
			// 
			// labelÑheckOpenDepositTotalAmount
			// 
			this->labelÑheckOpenDepositTotalAmount->AutoSize = true;
			this->labelÑheckOpenDepositTotalAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckOpenDepositTotalAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckOpenDepositTotalAmount->Location = System::Drawing::Point(21, 211);
			this->labelÑheckOpenDepositTotalAmount->Name = L"labelÑheckOpenDepositTotalAmount";
			this->labelÑheckOpenDepositTotalAmount->Size = System::Drawing::Size(151, 24);
			this->labelÑheckOpenDepositTotalAmount->TabIndex = 20;
			this->labelÑheckOpenDepositTotalAmount->Text = L"Èòîãîâàÿ ñóììà:";
			this->labelÑheckOpenDepositTotalAmount->Visible = false;
			// 
			// textBoxÑheckOpenDepositDate
			// 
			this->textBoxÑheckOpenDepositDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckOpenDepositDate->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckOpenDepositDate->Location = System::Drawing::Point(184, 134);
			this->textBoxÑheckOpenDepositDate->MaxLength = 10;
			this->textBoxÑheckOpenDepositDate->Name = L"textBoxÑheckOpenDepositDate";
			this->textBoxÑheckOpenDepositDate->ReadOnly = true;
			this->textBoxÑheckOpenDepositDate->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckOpenDepositDate->TabIndex = 16;
			this->textBoxÑheckOpenDepositDate->Visible = false;
			// 
			// buttonOpenDepositContinue
			// 
			this->buttonOpenDepositContinue->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonOpenDepositContinue->Location = System::Drawing::Point(143, 404);
			this->buttonOpenDepositContinue->Name = L"buttonOpenDepositContinue";
			this->buttonOpenDepositContinue->Size = System::Drawing::Size(193, 44);
			this->buttonOpenDepositContinue->TabIndex = 60;
			this->buttonOpenDepositContinue->Text = L"Ïğîäîëæèòü";
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
			this->buttonArrangeDeposit->Text = L"Îôîğìèòü";
			this->buttonArrangeDeposit->UseVisualStyleBackColor = true;
			// 
			// FormOpenDeposit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 533);
			this->Controls->Add(this->labelCheckDepLoan);
			this->Controls->Add(this->groupBoxÑheckOpenDeposit);
			this->Controls->Add(this->buttonOpenDepositContinue);
			this->Controls->Add(this->groupBoxOpenDeposit);
			this->Controls->Add(this->buttonArrangeDeposit);
			this->Name = L"FormOpenDeposit";
			this->Text = L"FormOpenDeposit";
			this->Load += gcnew System::EventHandler(this, &FormOpenDeposit::FormOpenDeposit_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericOpenDepositAmount))->EndInit();
			this->groupBoxÑheckOpenDeposit->ResumeLayout(false);
			this->groupBoxÑheckOpenDeposit->PerformLayout();
			this->groupBoxOpenDeposit->ResumeLayout(false);
			this->groupBoxOpenDeposit->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
