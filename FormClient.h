#pragma once

namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonAccountActions;
	protected:
	private: System::Windows::Forms::Button^ buttonGetLoan;
	private: System::Windows::Forms::Button^ buttonOpenDeposit;
	private: System::Windows::Forms::Button^ buttonClientLoan;
	private: System::Windows::Forms::Button^ buttonClientDeposit;
	private: System::Windows::Forms::Button^ buttonClientCreateAccount;

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
			this->buttonAccountActions = (gcnew System::Windows::Forms::Button());
			this->buttonGetLoan = (gcnew System::Windows::Forms::Button());
			this->buttonOpenDeposit = (gcnew System::Windows::Forms::Button());
			this->buttonClientLoan = (gcnew System::Windows::Forms::Button());
			this->buttonClientDeposit = (gcnew System::Windows::Forms::Button());
			this->buttonClientCreateAccount = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonAccountActions
			// 
			this->buttonAccountActions->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonAccountActions->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonAccountActions->Location = System::Drawing::Point(713, 76);
			this->buttonAccountActions->Name = L"buttonAccountActions";
			this->buttonAccountActions->Size = System::Drawing::Size(205, 45);
			this->buttonAccountActions->TabIndex = 93;
			this->buttonAccountActions->Text = L"Действия со счётом";
			this->buttonAccountActions->UseVisualStyleBackColor = true;
			// 
			// buttonGetLoan
			// 
			this->buttonGetLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonGetLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonGetLoan->Location = System::Drawing::Point(713, 302);
			this->buttonGetLoan->Name = L"buttonGetLoan";
			this->buttonGetLoan->Size = System::Drawing::Size(205, 45);
			this->buttonGetLoan->TabIndex = 92;
			this->buttonGetLoan->Text = L"Оформить заём";
			this->buttonGetLoan->UseVisualStyleBackColor = true;
			// 
			// buttonOpenDeposit
			// 
			this->buttonOpenDeposit->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonOpenDeposit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonOpenDeposit->Location = System::Drawing::Point(713, 189);
			this->buttonOpenDeposit->Name = L"buttonOpenDeposit";
			this->buttonOpenDeposit->Size = System::Drawing::Size(205, 45);
			this->buttonOpenDeposit->TabIndex = 91;
			this->buttonOpenDeposit->Text = L"Оформить депозит";
			this->buttonOpenDeposit->UseVisualStyleBackColor = true;
			// 
			// buttonClientLoan
			// 
			this->buttonClientLoan->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonClientLoan->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonClientLoan->Location = System::Drawing::Point(713, 251);
			this->buttonClientLoan->Name = L"buttonClientLoan";
			this->buttonClientLoan->Size = System::Drawing::Size(205, 45);
			this->buttonClientLoan->TabIndex = 90;
			this->buttonClientLoan->Text = L"Мой заём";
			this->buttonClientLoan->UseVisualStyleBackColor = true;
			// 
			// buttonClientDeposit
			// 
			this->buttonClientDeposit->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonClientDeposit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonClientDeposit->Location = System::Drawing::Point(713, 138);
			this->buttonClientDeposit->Name = L"buttonClientDeposit";
			this->buttonClientDeposit->Size = System::Drawing::Size(205, 45);
			this->buttonClientDeposit->TabIndex = 89;
			this->buttonClientDeposit->Text = L"Мой депозит";
			this->buttonClientDeposit->UseVisualStyleBackColor = true;
			// 
			// buttonClientCreateAccount
			// 
			this->buttonClientCreateAccount->Font = (gcnew System::Drawing::Font(L"adineue PRO Cyr Light", 12));
			this->buttonClientCreateAccount->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonClientCreateAccount->Location = System::Drawing::Point(79, 381);
			this->buttonClientCreateAccount->Name = L"buttonClientCreateAccount";
			this->buttonClientCreateAccount->Size = System::Drawing::Size(205, 45);
			this->buttonClientCreateAccount->TabIndex = 88;
			this->buttonClientCreateAccount->Text = L"Открыть новый счёт";
			this->buttonClientCreateAccount->UseVisualStyleBackColor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(997, 502);
			this->Controls->Add(this->buttonAccountActions);
			this->Controls->Add(this->buttonGetLoan);
			this->Controls->Add(this->buttonOpenDeposit);
			this->Controls->Add(this->buttonClientLoan);
			this->Controls->Add(this->buttonClientDeposit);
			this->Controls->Add(this->buttonClientCreateAccount);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
