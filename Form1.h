#pragma once
#include "General.h"
#include "database.h"

namespace CoffeShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			label10->Text = "Facebook";
			label10->ForeColor = System::Drawing::Color::Blue;
			label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);

			//
			label12->Text = "Telegram";
			label12->ForeColor = System::Drawing::Color::Blue;
			label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			//
			//TODO: Add the constructor code here
			label9->Text = "+84362887148 (Mr.AnhTu)";
			label9->ForeColor = System::Drawing::Color::Blue;
			label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::Windows::Forms::TextBox^ textBox2;






	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::PictureBox^ pictureBox8;









	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(60, 309);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Log in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->SizeChanged += gcnew System::EventHandler(this, &Form1::button1_SizeChanged);
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			this->button1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::button1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(60, 147);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 32);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_1);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Info;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(60, 183);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(339, 32);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Password";
			this->textBox2->Click += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged_1);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox2_KeyDown);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(60, 229);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(156, 24);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Toi dong y voi cac ";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			this->checkBox1->Click += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			this->checkBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::checkBox1_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(202, 229);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"dieu khoan va dich vu";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(58, 267);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 20);
			this->label5->TabIndex = 9;
			this->label5->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(58, 267);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(286, 24);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Incorrect username or password!";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Info;
			this->panel2->CausesValidation = false;
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(734, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(378, 490);
			this->panel2->TabIndex = 11;
			this->panel2->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(286, 192);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(89, 73);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 18;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form1::pictureBox8_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(104, 0);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(149, 31);
			this->label17->TabIndex = 17;
			this->label17->Text = L"CoffeeShop";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::LightSalmon;
			this->label16->Location = System::Drawing::Point(55, 10);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 26);
			this->label16->TabIndex = 16;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(58, 335);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(260, 19);
			this->label15->TabIndex = 15;
			this->label15->Text = L"183B, Hùng Vương, T.T Chư Sê, Gia Lai";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(26, 328);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(28, 26);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Curlz MT", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(104, 219);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(152, 30);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Chill and Relax";
			this->label14->Click += gcnew System::EventHandler(this, &Form1::label14_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(58, 458);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(105, 19);
			this->label12->TabIndex = 11;
			this->label12->Text = L"+84362887148";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(58, 427);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(183, 19);
			this->label11->TabIndex = 10;
			this->label11->Text = L"nat.coppyright@gmail.com";
			this->label11->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(58, 395);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(105, 19);
			this->label10->TabIndex = 9;
			this->label10->Text = L"+84362887148";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(58, 366);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 19);
			this->label9->TabIndex = 8;
			this->label9->Text = L"+84362887148 (Mr.Tú)";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click_1);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(26, 452);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(28, 26);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(26, 421);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(28, 26);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(26, 390);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(28, 26);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(26, 359);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(28, 26);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(22, 267);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(288, 18);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Brings joy and energy to every drop of coffee.";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::LightSalmon;
			this->label7->Location = System::Drawing::Point(76, 172);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(216, 36);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Anh Tu Coffee";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(44, 10);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(270, 180);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(53, 78);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(610, 43);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Hệ thống quán cà phê số 1 Việt Nam";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(49, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 49);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSalmon;
			this->label2->Location = System::Drawing::Point(106, 15);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 43);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Anh Tu Coffee";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(734, 490);
			this->panel1->TabIndex = 15;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(280, 408);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(26, 91);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(637, 28);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Nothing to see here, just purchase a drink and enjoy your day.";
			this->label13->Click += gcnew System::EventHandler(this, &Form1::label13_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(16, 22);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(332, 42);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Terms and Conditions";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1112, 490);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Ahn Tu CoffeeShop Login page";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseUp);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Definitions
		User^ user;

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ username = textBox1->Text;
			String^ password = textBox2->Text;

			SqlConnection^ connection = GetConnection(); // Gets connection but connection wont be started as of yet
			try
			{
				connection->Open();

				String^ query = "SELECT * FROM [dbo].[Account] WHERE Username=@Username AND Password=@Password";

				SqlCommand^ command = gcnew SqlCommand(query, connection);
				command->Parameters->AddWithValue("@Username", username);
				command->Parameters->AddWithValue("@Password", password);

				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read())
				{
					label6->Hide(); // Details of user matched successfully!
					user = gcnew User();
					user->username = username;
					user->password = reader->GetString(1);
					user->displayName = reader->GetString(2);
					user->userType = reader->GetString(3);
					if (!reader->IsDBNull(4))
					{
						// Retrieve the image data from the column
						array<unsigned char>^ imageData = safe_cast<array<unsigned char>^>(reader->GetValue(4));

						// Convert the image data to a System::Drawing::Image^ object
						using namespace System::IO;

						MemoryStream^ stream = gcnew MemoryStream(imageData);
						user->image = Image::FromStream(stream);
					}
					else user->image = nullptr;
					reader->Close();
				}
				else 
				{
					label6->Show(); // Details of user were not matching throughout or were not found
					return;
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Exception...\n\n" + ex->Message);
				return;
			}
			finally
			{
				connection->Close();
			}

			// User details were found and were correct so next do this
			General^ generalCoffeeForm = gcnew General(user);
			this->Hide(); // Hides the current form
			generalCoffeeForm->ShowDialog(); // Shows new form
			// The new form 'General' was closed...
			user = nullptr; // Clears the old user object data
			this->Show(); // Show the login form again
		}
		   
		private: System::Void button1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			button1->BackColor = System::Drawing::Color::Transparent;
		}
		// Form1_Load
		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
			button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button1->BackColor = System::Drawing::Color::Transparent;
			label1->BackColor = Color::Transparent;
			label2->BackColor = Color::Transparent;
			label4->BackColor = Color::Transparent;
			checkBox1->BackColor = Color::Transparent;
			label6->BackColor = Color::Transparent;
			pictureBox1->BackColor = Color::Transparent;
			panel1->Hide();
			label6->Hide();
			checkBox1->Checked = false;
			button1->Enabled = false;
			label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			pictureBox8->BackColor = Color::Transparent;
		}

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			panel1->Hide();
			checkBox1->Show();
			label4->Show();
		}
		private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
			panel1->Show();
			label4->Hide();
			checkBox1->Hide();
		}

		// Create Function MoveMouse
		bool dragging;
		Point offset;

		private: System::Void Form1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			dragging = true;
			offset.X = e->X;
			offset.Y = e->Y;
		}
		private: System::Void Form1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (dragging) {
				Point currentPosition = PointToScreen(Point(e->X, e->Y));
				Location = Point(currentPosition.X - offset.X, currentPosition.Y - offset.Y);
			}
		}
		private: System::Void Form1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			dragging = false;
		}

		private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox1->Checked) {
				button1->Enabled = true;
			}
			else {
				button1->Enabled = false;
			}
		}


		private: System::Void button1_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	
		}
		private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter) {
				e->SuppressKeyPress = true;// Prevent the Enter key from making a "beep" sound
				textBox2->Focus();
			}
		}
		private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter) {
				e->SuppressKeyPress = true;// Prevent the Enter key from making a "beep" sound
				button1->PerformClick();
			}
		}
		private: System::Void checkBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter) {
				e->SuppressKeyPress = true;// Prevent the Enter key from making a "beep" sound
				button1->PerformClick();
			}
		}

	   

		private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
			if (textBox1->Text == "Username") {
				textBox1->Text = "";
			}
			if (textBox2->Text == "") {
				textBox2->Text = "Password";
			}
		}

		private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (textBox2->Text == "Password") {
				textBox2->Text = "";
			}
			if (textBox1->Text == "") {
				textBox1->Text = "Username";
			}
		}

		private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Diagnostics::Process::Start("https://www.facebook.com/atudepchai");
		}

		private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Diagnostics::Process::Start("https://t.me/+84362887148");
		}

		private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
			if (textBox1->Text == "") {
				textBox1->Text = "Username";
			}if (textBox2->Text == "") {
				textBox2->Text = "Password";
			}
		}

		private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
		}
		private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
		}
		private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label9_Click_1(System::Object^ sender, System::EventArgs^ e) {
			System::Diagnostics::Process::Start("https://zaloapp.com/qr/p/1a0u6awmj0y3u?src=qr");
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
		}
	};
}
