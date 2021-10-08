#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FormNewAccount
	/// </summary>
	public ref class FormNewAccount : public System::Windows::Forms::Form
	{
	public:
		FormNewAccount(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~FormNewAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBoxNewAccount;
	protected:
	private: System::Windows::Forms::Button^ buttonCreateNewAccount;
	private: System::Windows::Forms::Label^ labelNewAccountName;
	private: System::Windows::Forms::MaskedTextBox^ textBoxNewAccountName;






	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBoxNewAccount = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCreateNewAccount = (gcnew System::Windows::Forms::Button());
			this->labelNewAccountName = (gcnew System::Windows::Forms::Label());
			this->textBoxNewAccountName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBoxNewAccount->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxNewAccount
			// 
			this->groupBoxNewAccount->Controls->Add(this->textBoxNewAccountName);
			this->groupBoxNewAccount->Controls->Add(this->buttonCreateNewAccount);
			this->groupBoxNewAccount->Controls->Add(this->labelNewAccountName);
			this->groupBoxNewAccount->Location = System::Drawing::Point(163, 124);
			this->groupBoxNewAccount->Name = L"groupBoxNewAccount";
			this->groupBoxNewAccount->Size = System::Drawing::Size(412, 172);
			this->groupBoxNewAccount->TabIndex = 9;
			this->groupBoxNewAccount->TabStop = false;
			// 
			// buttonCreateNewAccount
			// 
			this->buttonCreateNewAccount->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCreateNewAccount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonCreateNewAccount->Location = System::Drawing::Point(117, 99);
			this->buttonCreateNewAccount->Name = L"buttonCreateNewAccount";
			this->buttonCreateNewAccount->Size = System::Drawing::Size(193, 52);
			this->buttonCreateNewAccount->TabIndex = 9;
			this->buttonCreateNewAccount->Text = L"—оздать";
			this->buttonCreateNewAccount->UseVisualStyleBackColor = true;
			// 
			// labelNewAccountName
			// 
			this->labelNewAccountName->AutoSize = true;
			this->labelNewAccountName->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelNewAccountName->Location = System::Drawing::Point(15, 19);
			this->labelNewAccountName->Name = L"labelNewAccountName";
			this->labelNewAccountName->Size = System::Drawing::Size(221, 24);
			this->labelNewAccountName->TabIndex = 5;
			this->labelNewAccountName->Text = L"¬ведите название счЄта";
			// 
			// textBoxNewAccountName
			// 
			this->textBoxNewAccountName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxNewAccountName->Location = System::Drawing::Point(19, 45);
			this->textBoxNewAccountName->Mask = L"AAAAAAAAAAAAAAAAAAAA";
			this->textBoxNewAccountName->Name = L"textBoxNewAccountName";
			this->textBoxNewAccountName->ResetOnPrompt = false;
			this->textBoxNewAccountName->ResetOnSpace = false;
			this->textBoxNewAccountName->Size = System::Drawing::Size(374, 38);
			this->textBoxNewAccountName->TabIndex = 10;
			// 
			// FormNewAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 494);
			this->Controls->Add(this->groupBoxNewAccount);
			this->Name = L"FormNewAccount";
			this->Text = L"FormNewAccount";
			this->groupBoxNewAccount->ResumeLayout(false);
			this->groupBoxNewAccount->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
