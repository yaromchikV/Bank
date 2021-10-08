#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormRegister
	/// </summary>
	public ref class FormRegister : public System::Windows::Forms::Form
	{
	public:
		FormRegister(void)
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
		~FormRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelLoginReg;
	protected:
	private: System::Windows::Forms::MaskedTextBox^ textBoxNameReg;
	private: System::Windows::Forms::Label^ labelNameReg;
	private: System::Windows::Forms::MaskedTextBox^ textBoxLoginReg;
	private: System::Windows::Forms::Label^ labelPasswordRepeateReg;
	private: System::Windows::Forms::Label^ labelPasswordReg;
	private: System::Windows::Forms::TextBox^ textBoxPasswordReg;
	private: System::Windows::Forms::GroupBox^ groupBoxReg;
	private: System::Windows::Forms::TextBox^ textBoxPasswordRepeateReg;
	private: System::Windows::Forms::Button^ buttonSendRequest;

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
			this->labelLoginReg = (gcnew System::Windows::Forms::Label());
			this->textBoxNameReg = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelNameReg = (gcnew System::Windows::Forms::Label());
			this->textBoxLoginReg = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelPasswordRepeateReg = (gcnew System::Windows::Forms::Label());
			this->labelPasswordReg = (gcnew System::Windows::Forms::Label());
			this->textBoxPasswordReg = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxReg = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPasswordRepeateReg = (gcnew System::Windows::Forms::TextBox());
			this->buttonSendRequest = (gcnew System::Windows::Forms::Button());
			this->groupBoxReg->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelLoginReg
			// 
			this->labelLoginReg->AutoSize = true;
			this->labelLoginReg->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelLoginReg->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelLoginReg->Location = System::Drawing::Point(15, 19);
			this->labelLoginReg->Name = L"labelLoginReg";
			this->labelLoginReg->Size = System::Drawing::Size(131, 24);
			this->labelLoginReg->TabIndex = 5;
			this->labelLoginReg->Text = L"Введите логин";
			this->labelLoginReg->Visible = false;
			// 
			// textBoxNameReg
			// 
			this->textBoxNameReg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->textBoxNameReg->HidePromptOnLeave = true;
			this->textBoxNameReg->Location = System::Drawing::Point(262, 65);
			this->textBoxNameReg->Mask = L"L.L.L\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?";
			this->textBoxNameReg->Name = L"textBoxNameReg";
			this->textBoxNameReg->ResetOnPrompt = false;
			this->textBoxNameReg->ResetOnSpace = false;
			this->textBoxNameReg->Size = System::Drawing::Size(374, 38);
			this->textBoxNameReg->TabIndex = 69;
			// 
			// labelNameReg
			// 
			this->labelNameReg->AutoSize = true;
			this->labelNameReg->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelNameReg->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelNameReg->Location = System::Drawing::Point(258, 38);
			this->labelNameReg->Name = L"labelNameReg";
			this->labelNameReg->Size = System::Drawing::Size(133, 24);
			this->labelNameReg->TabIndex = 67;
			this->labelNameReg->Text = L"Введите Ф.И.О.";
			this->labelNameReg->Visible = false;
			// 
			// textBoxLoginReg
			// 
			this->textBoxLoginReg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->textBoxLoginReg->HidePromptOnLeave = true;
			this->textBoxLoginReg->Location = System::Drawing::Point(17, 46);
			this->textBoxLoginReg->Mask = L"AAAAAAAAAAAAAAAAAAAA";
			this->textBoxLoginReg->Name = L"textBoxLoginReg";
			this->textBoxLoginReg->ResetOnPrompt = false;
			this->textBoxLoginReg->ResetOnSpace = false;
			this->textBoxLoginReg->Size = System::Drawing::Size(374, 38);
			this->textBoxLoginReg->TabIndex = 62;
			// 
			// labelPasswordRepeateReg
			// 
			this->labelPasswordRepeateReg->AutoSize = true;
			this->labelPasswordRepeateReg->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelPasswordRepeateReg->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelPasswordRepeateReg->Location = System::Drawing::Point(13, 168);
			this->labelPasswordRepeateReg->Name = L"labelPasswordRepeateReg";
			this->labelPasswordRepeateReg->Size = System::Drawing::Size(165, 24);
			this->labelPasswordRepeateReg->TabIndex = 10;
			this->labelPasswordRepeateReg->Text = L"Повторите пароль";
			this->labelPasswordRepeateReg->Visible = false;
			// 
			// labelPasswordReg
			// 
			this->labelPasswordReg->AutoSize = true;
			this->labelPasswordReg->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelPasswordReg->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelPasswordReg->Location = System::Drawing::Point(13, 93);
			this->labelPasswordReg->Name = L"labelPasswordReg";
			this->labelPasswordReg->Size = System::Drawing::Size(145, 24);
			this->labelPasswordReg->TabIndex = 6;
			this->labelPasswordReg->Text = L"Введите пароль";
			this->labelPasswordReg->Visible = false;
			// 
			// textBoxPasswordReg
			// 
			this->textBoxPasswordReg->BackColor = System::Drawing::SystemColors::Window;
			this->textBoxPasswordReg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->textBoxPasswordReg->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxPasswordReg->Location = System::Drawing::Point(18, 120);
			this->textBoxPasswordReg->MaxLength = 20;
			this->textBoxPasswordReg->Name = L"textBoxPasswordReg";
			this->textBoxPasswordReg->Size = System::Drawing::Size(375, 38);
			this->textBoxPasswordReg->TabIndex = 4;
			this->textBoxPasswordReg->UseSystemPasswordChar = true;
			this->textBoxPasswordReg->Visible = false;
			// 
			// groupBoxReg
			// 
			this->groupBoxReg->Controls->Add(this->textBoxLoginReg);
			this->groupBoxReg->Controls->Add(this->labelPasswordRepeateReg);
			this->groupBoxReg->Controls->Add(this->textBoxPasswordRepeateReg);
			this->groupBoxReg->Controls->Add(this->labelLoginReg);
			this->groupBoxReg->Controls->Add(this->labelPasswordReg);
			this->groupBoxReg->Controls->Add(this->textBoxPasswordReg);
			this->groupBoxReg->Location = System::Drawing::Point(243, 118);
			this->groupBoxReg->Name = L"groupBoxReg";
			this->groupBoxReg->Size = System::Drawing::Size(412, 263);
			this->groupBoxReg->TabIndex = 68;
			this->groupBoxReg->TabStop = false;
			this->groupBoxReg->Visible = false;
			// 
			// textBoxPasswordRepeateReg
			// 
			this->textBoxPasswordRepeateReg->BackColor = System::Drawing::SystemColors::Window;
			this->textBoxPasswordRepeateReg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->textBoxPasswordRepeateReg->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxPasswordRepeateReg->Location = System::Drawing::Point(18, 195);
			this->textBoxPasswordRepeateReg->MaxLength = 20;
			this->textBoxPasswordRepeateReg->Name = L"textBoxPasswordRepeateReg";
			this->textBoxPasswordRepeateReg->Size = System::Drawing::Size(375, 38);
			this->textBoxPasswordRepeateReg->TabIndex = 8;
			this->textBoxPasswordRepeateReg->UseSystemPasswordChar = true;
			this->textBoxPasswordRepeateReg->Visible = false;
			// 
			// buttonSendRequest
			// 
			this->buttonSendRequest->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonSendRequest->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonSendRequest->Location = System::Drawing::Point(357, 396);
			this->buttonSendRequest->Name = L"buttonSendRequest";
			this->buttonSendRequest->Size = System::Drawing::Size(200, 57);
			this->buttonSendRequest->TabIndex = 66;
			this->buttonSendRequest->Text = L"Отправить заявку";
			this->buttonSendRequest->UseVisualStyleBackColor = true;
			// 
			// FormRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(899, 490);
			this->Controls->Add(this->textBoxNameReg);
			this->Controls->Add(this->labelNameReg);
			this->Controls->Add(this->groupBoxReg);
			this->Controls->Add(this->buttonSendRequest);
			this->Name = L"FormRegister";
			this->Text = L"FormRegister";
			this->groupBoxReg->ResumeLayout(false);
			this->groupBoxReg->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
