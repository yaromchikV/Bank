#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ FormGetLoan
	/// </summary>
	public ref class FormGetLoan : public System::Windows::Forms::Form
	{
	public:
		FormGetLoan(void)
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
		~FormGetLoan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonArrangeLoan;
	protected:
	private: System::Windows::Forms::Label^ labelÑheckGetLoanRate;
	private: System::Windows::Forms::TextBox^ textBoxÑheckGetLoaRate;
	private: System::Windows::Forms::Label^ labelÑheckGetLoanName;
	private: System::Windows::Forms::Label^ labelÑheckGetLoanTotalAmount;
	private: System::Windows::Forms::Label^ labelÑheckGetLoanAmount;
	private: System::Windows::Forms::TextBox^ textBoxÑheckGetLoanTotalAmount;
	private: System::Windows::Forms::TextBox^ textBoxÑheckGetLoanName;
	private: System::Windows::Forms::Label^ labelÑheckGetLoanDate;
	private: System::Windows::Forms::TextBox^ textBoxÑheckGetLoanAmount;
	private: System::Windows::Forms::TextBox^ textBoxÑheckGetLoanDate;
	private: System::Windows::Forms::GroupBox^ groupBoxÑheckGetLoan;
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
			this->buttonArrangeLoan = (gcnew System::Windows::Forms::Button());
			this->labelÑheckGetLoanRate = (gcnew System::Windows::Forms::Label());
			this->textBoxÑheckGetLoaRate = (gcnew System::Windows::Forms::TextBox());
			this->labelÑheckGetLoanName = (gcnew System::Windows::Forms::Label());
			this->labelÑheckGetLoanTotalAmount = (gcnew System::Windows::Forms::Label());
			this->labelÑheckGetLoanAmount = (gcnew System::Windows::Forms::Label());
			this->textBoxÑheckGetLoanTotalAmount = (gcnew System::Windows::Forms::TextBox());
			this->textBoxÑheckGetLoanName = (gcnew System::Windows::Forms::TextBox());
			this->labelÑheckGetLoanDate = (gcnew System::Windows::Forms::Label());
			this->textBoxÑheckGetLoanAmount = (gcnew System::Windows::Forms::TextBox());
			this->textBoxÑheckGetLoanDate = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxÑheckGetLoan = (gcnew System::Windows::Forms::GroupBox());
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
			this->groupBoxÑheckGetLoan->SuspendLayout();
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
			this->buttonArrangeLoan->Text = L"Îôîğìèòü";
			this->buttonArrangeLoan->UseVisualStyleBackColor = true;
			// 
			// labelÑheckGetLoanRate
			// 
			this->labelÑheckGetLoanRate->AutoSize = true;
			this->labelÑheckGetLoanRate->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckGetLoanRate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckGetLoanRate->Location = System::Drawing::Point(97, 137);
			this->labelÑheckGetLoanRate->Name = L"labelÑheckGetLoanRate";
			this->labelÑheckGetLoanRate->Size = System::Drawing::Size(75, 24);
			this->labelÑheckGetLoanRate->TabIndex = 22;
			this->labelÑheckGetLoanRate->Text = L"Ñòàâêà:";
			this->labelÑheckGetLoanRate->Visible = false;
			// 
			// textBoxÑheckGetLoaRate
			// 
			this->textBoxÑheckGetLoaRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckGetLoaRate->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckGetLoaRate->Location = System::Drawing::Point(184, 134);
			this->textBoxÑheckGetLoaRate->MaxLength = 10;
			this->textBoxÑheckGetLoaRate->Name = L"textBoxÑheckGetLoaRate";
			this->textBoxÑheckGetLoaRate->ReadOnly = true;
			this->textBoxÑheckGetLoaRate->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckGetLoaRate->TabIndex = 21;
			this->textBoxÑheckGetLoaRate->Visible = false;
			// 
			// labelÑheckGetLoanName
			// 
			this->labelÑheckGetLoanName->AutoSize = true;
			this->labelÑheckGetLoanName->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckGetLoanName->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckGetLoanName->Location = System::Drawing::Point(75, 26);
			this->labelÑheckGetLoanName->Name = L"labelÑheckGetLoanName";
			this->labelÑheckGetLoanName->Size = System::Drawing::Size(97, 24);
			this->labelÑheckGetLoanName->TabIndex = 10;
			this->labelÑheckGetLoanName->Text = L"Íàçâàíèå:";
			this->labelÑheckGetLoanName->Visible = false;
			// 
			// labelÑheckGetLoanTotalAmount
			// 
			this->labelÑheckGetLoanTotalAmount->AutoSize = true;
			this->labelÑheckGetLoanTotalAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckGetLoanTotalAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckGetLoanTotalAmount->Location = System::Drawing::Point(21, 174);
			this->labelÑheckGetLoanTotalAmount->Name = L"labelÑheckGetLoanTotalAmount";
			this->labelÑheckGetLoanTotalAmount->Size = System::Drawing::Size(151, 24);
			this->labelÑheckGetLoanTotalAmount->TabIndex = 20;
			this->labelÑheckGetLoanTotalAmount->Text = L"Èòîãîâàÿ ñóììà:";
			this->labelÑheckGetLoanTotalAmount->Visible = false;
			// 
			// labelÑheckGetLoanAmount
			// 
			this->labelÑheckGetLoanAmount->AutoSize = true;
			this->labelÑheckGetLoanAmount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckGetLoanAmount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckGetLoanAmount->Location = System::Drawing::Point(100, 63);
			this->labelÑheckGetLoanAmount->Name = L"labelÑheckGetLoanAmount";
			this->labelÑheckGetLoanAmount->Size = System::Drawing::Size(72, 24);
			this->labelÑheckGetLoanAmount->TabIndex = 12;
			this->labelÑheckGetLoanAmount->Text = L"Ñóììà:";
			this->labelÑheckGetLoanAmount->Visible = false;
			// 
			// textBoxÑheckGetLoanTotalAmount
			// 
			this->textBoxÑheckGetLoanTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckGetLoanTotalAmount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckGetLoanTotalAmount->Location = System::Drawing::Point(184, 171);
			this->textBoxÑheckGetLoanTotalAmount->MaxLength = 10;
			this->textBoxÑheckGetLoanTotalAmount->Name = L"textBoxÑheckGetLoanTotalAmount";
			this->textBoxÑheckGetLoanTotalAmount->ReadOnly = true;
			this->textBoxÑheckGetLoanTotalAmount->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckGetLoanTotalAmount->TabIndex = 19;
			this->textBoxÑheckGetLoanTotalAmount->Visible = false;
			// 
			// textBoxÑheckGetLoanName
			// 
			this->textBoxÑheckGetLoanName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckGetLoanName->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckGetLoanName->Location = System::Drawing::Point(184, 23);
			this->textBoxÑheckGetLoanName->MaxLength = 10;
			this->textBoxÑheckGetLoanName->Name = L"textBoxÑheckGetLoanName";
			this->textBoxÑheckGetLoanName->ReadOnly = true;
			this->textBoxÑheckGetLoanName->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckGetLoanName->TabIndex = 13;
			this->textBoxÑheckGetLoanName->Visible = false;
			// 
			// labelÑheckGetLoanDate
			// 
			this->labelÑheckGetLoanDate->AutoSize = true;
			this->labelÑheckGetLoanDate->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelÑheckGetLoanDate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelÑheckGetLoanDate->Location = System::Drawing::Point(89, 100);
			this->labelÑheckGetLoanDate->Name = L"labelÑheckGetLoanDate";
			this->labelÑheckGetLoanDate->Size = System::Drawing::Size(83, 24);
			this->labelÑheckGetLoanDate->TabIndex = 18;
			this->labelÑheckGetLoanDate->Text = L"Ñğîê: ïî";
			this->labelÑheckGetLoanDate->Visible = false;
			// 
			// textBoxÑheckGetLoanAmount
			// 
			this->textBoxÑheckGetLoanAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckGetLoanAmount->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckGetLoanAmount->Location = System::Drawing::Point(184, 60);
			this->textBoxÑheckGetLoanAmount->MaxLength = 10;
			this->textBoxÑheckGetLoanAmount->Name = L"textBoxÑheckGetLoanAmount";
			this->textBoxÑheckGetLoanAmount->ReadOnly = true;
			this->textBoxÑheckGetLoanAmount->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckGetLoanAmount->TabIndex = 14;
			this->textBoxÑheckGetLoanAmount->Visible = false;
			// 
			// textBoxÑheckGetLoanDate
			// 
			this->textBoxÑheckGetLoanDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxÑheckGetLoanDate->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxÑheckGetLoanDate->Location = System::Drawing::Point(184, 97);
			this->textBoxÑheckGetLoanDate->MaxLength = 10;
			this->textBoxÑheckGetLoanDate->Name = L"textBoxÑheckGetLoanDate";
			this->textBoxÑheckGetLoanDate->ReadOnly = true;
			this->textBoxÑheckGetLoanDate->Size = System::Drawing::Size(213, 30);
			this->textBoxÑheckGetLoanDate->TabIndex = 16;
			this->textBoxÑheckGetLoanDate->Visible = false;
			// 
			// groupBoxÑheckGetLoan
			// 
			this->groupBoxÑheckGetLoan->Controls->Add(this->labelÑheckGetLoanRate);
			this->groupBoxÑheckGetLoan->Controls->Add(this->textBoxÑheckGetLoaRate);
			this->groupBoxÑheckGetLoan->Controls->Add(this->labelÑheckGetLoanName);
			this->groupBoxÑheckGetLoan->Controls->Add(this->labelÑheckGetLoanTotalAmount);
			this->groupBoxÑheckGetLoan->Controls->Add(this->labelÑheckGetLoanAmount);
			this->groupBoxÑheckGetLoan->Controls->Add(this->textBoxÑheckGetLoanTotalAmount);
			this->groupBoxÑheckGetLoan->Controls->Add(this->textBoxÑheckGetLoanName);
			this->groupBoxÑheckGetLoan->Controls->Add(this->labelÑheckGetLoanDate);
			this->groupBoxÑheckGetLoan->Controls->Add(this->textBoxÑheckGetLoanAmount);
			this->groupBoxÑheckGetLoan->Controls->Add(this->textBoxÑheckGetLoanDate);
			this->groupBoxÑheckGetLoan->Location = System::Drawing::Point(418, 109);
			this->groupBoxÑheckGetLoan->Name = L"groupBoxÑheckGetLoan";
			this->groupBoxÑheckGetLoan->Size = System::Drawing::Size(423, 221);
			this->groupBoxÑheckGetLoan->TabIndex = 62;
			this->groupBoxÑheckGetLoan->TabStop = false;
			this->groupBoxÑheckGetLoan->Visible = false;
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
			this->labelGetLoanName->Text = L"Ââåäèòå íàçâàíèå";
			// 
			// radioButtonGetLoan18m
			// 
			this->radioButtonGetLoan18m->AutoSize = true;
			this->radioButtonGetLoan18m->Location = System::Drawing::Point(129, 218);
			this->radioButtonGetLoan18m->Name = L"radioButtonGetLoan18m";
			this->radioButtonGetLoan18m->Size = System::Drawing::Size(104, 21);
			this->radioButtonGetLoan18m->TabIndex = 12;
			this->radioButtonGetLoan18m->TabStop = true;
			this->radioButtonGetLoan18m->Text = L"18 ìåñÿöåâ";
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
			this->radioButtonGetLoan12m->Text = L"12 ìåñÿöåâ";
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
			this->radioButtonGetLoan9m->Text = L"9 ìåñÿöåâ";
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
			this->radioButtonGetLoan6m->Text = L"6 ìåñÿöåâ";
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
			this->labelGetLoanTime->Text = L"Âûáåğèòå ñğîê çàéìà";
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
			this->labelGetLoanAmount->Text = L"Ââåäèòå ñóììó çàéìà";
			// 
			// buttonGetLoanContinue
			// 
			this->buttonGetLoanContinue->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonGetLoanContinue->Location = System::Drawing::Point(116, 368);
			this->buttonGetLoanContinue->Name = L"buttonGetLoanContinue";
			this->buttonGetLoanContinue->Size = System::Drawing::Size(193, 44);
			this->buttonGetLoanContinue->TabIndex = 61;
			this->buttonGetLoanContinue->Text = L"Ïğîäîëæèòü";
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
			this->labelOpenDepositAccountID->Text = L"Âûáåğèòå ñ÷¸ò ñïèñàíèÿ";
			// 
			// FormGetLoan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 505);
			this->Controls->Add(this->buttonArrangeLoan);
			this->Controls->Add(this->groupBoxÑheckGetLoan);
			this->Controls->Add(this->groupBoxGetLoan);
			this->Controls->Add(this->buttonGetLoanContinue);
			this->Name = L"FormGetLoan";
			this->Text = L"FormGetLoan";
			this->groupBoxÑheckGetLoan->ResumeLayout(false);
			this->groupBoxÑheckGetLoan->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericGetLoanAmount))->EndInit();
			this->groupBoxGetLoan->ResumeLayout(false);
			this->groupBoxGetLoan->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
