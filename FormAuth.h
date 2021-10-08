#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormAuth
	/// </summary>
	public ref class FormAuth : public System::Windows::Forms::Form
	{
	public:
		FormAuth(void)
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
		~FormAuth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonRegister;
	protected:
	private: System::Windows::Forms::Button^ buttonLogIn;
	private: System::Windows::Forms::GroupBox^ groupBoxAuth;
	private: System::Windows::Forms::Button^ buttonEye;
	private: System::Windows::Forms::Label^ labelInputLogin;
	private: System::Windows::Forms::Label^ labelInputPassword;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::PictureBox^ pictureBank;
	private: System::Windows::Forms::Label^ labelBankName;
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ buttonAboutProgram;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAuth::typeid));
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->buttonLogIn = (gcnew System::Windows::Forms::Button());
			this->groupBoxAuth = (gcnew System::Windows::Forms::GroupBox());
			this->buttonEye = (gcnew System::Windows::Forms::Button());
			this->labelInputLogin = (gcnew System::Windows::Forms::Label());
			this->labelInputPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->pictureBank = (gcnew System::Windows::Forms::PictureBox());
			this->labelBankName = (gcnew System::Windows::Forms::Label());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->buttonAboutProgram = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxAuth->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBank))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonRegister
			// 
			this->buttonRegister->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 10.2F));
			this->buttonRegister->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonRegister->Location = System::Drawing::Point(359, 404);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(193, 36);
			this->buttonRegister->TabIndex = 21;
			this->buttonRegister->Text = L"Зарегистрироваться";
			this->buttonRegister->UseVisualStyleBackColor = true;
			this->buttonRegister->Visible = false;
			// 
			// buttonLogIn
			// 
			this->buttonLogIn->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonLogIn->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonLogIn->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonLogIn->Location = System::Drawing::Point(359, 345);
			this->buttonLogIn->Name = L"buttonLogIn";
			this->buttonLogIn->Size = System::Drawing::Size(193, 52);
			this->buttonLogIn->TabIndex = 20;
			this->buttonLogIn->Text = L"Войти";
			this->buttonLogIn->UseVisualStyleBackColor = true;
			this->buttonLogIn->Visible = false;
			// 
			// groupBoxAuth
			// 
			this->groupBoxAuth->Controls->Add(this->buttonEye);
			this->groupBoxAuth->Controls->Add(this->labelInputLogin);
			this->groupBoxAuth->Controls->Add(this->labelInputPassword);
			this->groupBoxAuth->Controls->Add(this->textBoxLogin);
			this->groupBoxAuth->Controls->Add(this->textBoxPassword);
			this->groupBoxAuth->Location = System::Drawing::Point(224, 156);
			this->groupBoxAuth->Name = L"groupBoxAuth";
			this->groupBoxAuth->Size = System::Drawing::Size(451, 179);
			this->groupBoxAuth->TabIndex = 19;
			this->groupBoxAuth->TabStop = false;
			this->groupBoxAuth->Visible = false;
			// 
			// buttonEye
			// 
			this->buttonEye->BackColor = System::Drawing::SystemColors::Control;
			this->buttonEye->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->buttonEye->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonEye->Location = System::Drawing::Point(375, 118);
			this->buttonEye->Name = L"buttonEye";
			this->buttonEye->Size = System::Drawing::Size(58, 38);
			this->buttonEye->TabIndex = 14;
			this->buttonEye->Text = L"👁";
			this->buttonEye->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonEye->UseVisualStyleBackColor = false;
			this->buttonEye->Visible = false;
			// 
			// labelInputLogin
			// 
			this->labelInputLogin->AutoSize = true;
			this->labelInputLogin->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelInputLogin->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelInputLogin->Location = System::Drawing::Point(15, 17);
			this->labelInputLogin->Name = L"labelInputLogin";
			this->labelInputLogin->Size = System::Drawing::Size(131, 24);
			this->labelInputLogin->TabIndex = 5;
			this->labelInputLogin->Text = L"Введите логин";
			this->labelInputLogin->Visible = false;
			// 
			// labelInputPassword
			// 
			this->labelInputPassword->AutoSize = true;
			this->labelInputPassword->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->labelInputPassword->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelInputPassword->Location = System::Drawing::Point(13, 91);
			this->labelInputPassword->Name = L"labelInputPassword";
			this->labelInputPassword->Size = System::Drawing::Size(145, 24);
			this->labelInputPassword->TabIndex = 6;
			this->labelInputPassword->Text = L"Введите пароль";
			this->labelInputPassword->Visible = false;
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 16.2F));
			this->textBoxLogin->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxLogin->Location = System::Drawing::Point(18, 43);
			this->textBoxLogin->MaxLength = 20;
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(415, 39);
			this->textBoxLogin->TabIndex = 2;
			this->textBoxLogin->Visible = false;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::SystemColors::Window;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->textBoxPassword->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBoxPassword->Location = System::Drawing::Point(18, 118);
			this->textBoxPassword->MaxLength = 20;
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(351, 38);
			this->textBoxPassword->TabIndex = 4;
			this->textBoxPassword->UseSystemPasswordChar = true;
			this->textBoxPassword->Visible = false;
			// 
			// pictureBank
			// 
			this->pictureBank->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBank->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBank.Image")));
			this->pictureBank->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBank->Location = System::Drawing::Point(311, 50);
			this->pictureBank->Name = L"pictureBank";
			this->pictureBank->Size = System::Drawing::Size(100, 100);
			this->pictureBank->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBank->TabIndex = 23;
			this->pictureBank->TabStop = false;
			// 
			// labelBankName
			// 
			this->labelBankName->AutoSize = true;
			this->labelBankName->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 48));
			this->labelBankName->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->labelBankName->Location = System::Drawing::Point(405, 50);
			this->labelBankName->Name = L"labelBankName";
			this->labelBankName->Size = System::Drawing::Size(202, 94);
			this->labelBankName->TabIndex = 22;
			this->labelBankName->Text = L"Банк";
			// 
			// menuStrip
			// 
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->buttonAboutProgram });
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(899, 28);
			this->menuStrip->TabIndex = 71;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// buttonAboutProgram
			// 
			this->buttonAboutProgram->Name = L"buttonAboutProgram";
			this->buttonAboutProgram->Size = System::Drawing::Size(118, 24);
			this->buttonAboutProgram->Text = L"О программе";
			// 
			// FormAuth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(899, 490);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->buttonRegister);
			this->Controls->Add(this->buttonLogIn);
			this->Controls->Add(this->groupBoxAuth);
			this->Controls->Add(this->pictureBank);
			this->Controls->Add(this->labelBankName);
			this->Name = L"FormAuth";
			this->Text = L"FormAuth";
			this->groupBoxAuth->ResumeLayout(false);
			this->groupBoxAuth->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBank))->EndInit();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
