#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace CoffeShop {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: Guna::UI2::WinForms::Guna2TextBox^ txtItemname;
	private: Guna::UI2::WinForms::Guna2TextBox^ txtPrice;
	private: Guna::UI2::WinForms::Guna2Button^ btnAdd;
	private: System::Windows::Forms::Label^ label2;
	private: Guna::UI2::WinForms::Guna2Elipse^ guna2Elipse1;



	public:
	private:


	private: System::ComponentModel::IContainer^ components;
	protected:












	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			Guna::UI2::WinForms::Suite::CustomizableEdges^ customizableEdges13 = (gcnew Guna::UI2::WinForms::Suite::CustomizableEdges());
			Guna::UI2::WinForms::Suite::CustomizableEdges^ customizableEdges14 = (gcnew Guna::UI2::WinForms::Suite::CustomizableEdges());
			Guna::UI2::WinForms::Suite::CustomizableEdges^ customizableEdges15 = (gcnew Guna::UI2::WinForms::Suite::CustomizableEdges());
			Guna::UI2::WinForms::Suite::CustomizableEdges^ customizableEdges16 = (gcnew Guna::UI2::WinForms::Suite::CustomizableEdges());
			Guna::UI2::WinForms::Suite::CustomizableEdges^ customizableEdges17 = (gcnew Guna::UI2::WinForms::Suite::CustomizableEdges());
			Guna::UI2::WinForms::Suite::CustomizableEdges^ customizableEdges18 = (gcnew Guna::UI2::WinForms::Suite::CustomizableEdges());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtItemname = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txtPrice = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->btnAdd = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->guna2Elipse1 = (gcnew Guna::UI2::WinForms::Guna2Elipse(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(188, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add new item";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(55, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Category";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(55, 264);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Name";
			this->label4->Click += gcnew System::EventHandler(this, &MyUserControl::label4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Coffee", L"Tea", L"Ice Blend", L"Juice", L"Smoothies & Yaout" });
			this->comboBox1->Location = System::Drawing::Point(62, 197);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(403, 33);
			this->comboBox1->TabIndex = 4;
			// 
			// txtItemname
			// 
			this->txtItemname->BackColor = System::Drawing::Color::White;
			this->txtItemname->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtItemname->CustomizableEdges = customizableEdges13;
			this->txtItemname->DefaultText = L"";
			this->txtItemname->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txtItemname->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txtItemname->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtItemname->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtItemname->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtItemname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->txtItemname->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtItemname->Location = System::Drawing::Point(61, 298);
			this->txtItemname->Name = L"txtItemname";
			this->txtItemname->PasswordChar = '\0';
			this->txtItemname->PlaceholderText = L"";
			this->txtItemname->SelectedText = L"";
			this->txtItemname->ShadowDecoration->CustomizableEdges = customizableEdges14;
			this->txtItemname->Size = System::Drawing::Size(404, 55);
			this->txtItemname->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
			this->txtItemname->TabIndex = 5;
			// 
			// txtPrice
			// 
			this->txtPrice->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPrice->CustomizableEdges = customizableEdges15;
			this->txtPrice->DefaultText = L"";
			this->txtPrice->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txtPrice->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txtPrice->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtPrice->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtPrice->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->txtPrice->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtPrice->Location = System::Drawing::Point(62, 406);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->PasswordChar = '\0';
			this->txtPrice->PlaceholderText = L"";
			this->txtPrice->SelectedText = L"";
			this->txtPrice->ShadowDecoration->CustomizableEdges = customizableEdges16;
			this->txtPrice->Size = System::Drawing::Size(403, 55);
			this->txtPrice->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
			this->txtPrice->TabIndex = 6;
			// 
			// btnAdd
			// 
			this->btnAdd->BorderRadius = 21;
			this->btnAdd->CustomizableEdges = customizableEdges17;
			this->btnAdd->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnAdd->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnAdd->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnAdd->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Black;
			this->btnAdd->Location = System::Drawing::Point(146, 505);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->ShadowDecoration->CustomizableEdges = customizableEdges18;
			this->btnAdd->Size = System::Drawing::Size(197, 74);
			this->btnAdd->TabIndex = 7;
			this->btnAdd->Text = L"Add";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(59, 372);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 31);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Price";
			// 
			// guna2Elipse1
			// 
			this->guna2Elipse1->BorderRadius = 30;
			this->guna2Elipse1->TargetControl = this;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtItemname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->btnAdd);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(1249, 659);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
