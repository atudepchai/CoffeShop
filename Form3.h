#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include <vector>
#include <sstream>
namespace CoffeShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			loadAccount();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;



	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox1;









	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel11;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel10;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::DataGridView^ dataGridView4;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
private: System::Windows::Forms::Button^ button19;

private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::ColorDialog^ colorDialog2;























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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel17->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel21->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel25->SuspendLayout();
			this->panel26->SuspendLayout();
			this->panel27->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(-4, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1505, 562);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1497, 533);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Doanh thu";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form3::tabPage1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->dateTimePicker2);
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Location = System::Drawing::Point(0, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1477, 28);
			this->panel3->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PowderBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(599, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(297, 22);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Thống kê";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(956, 1);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(518, 22);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(6, 3);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(518, 22);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(3, 34);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1525, 496);
			this->panel2->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1471, 493);
			this->dataGridView1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSalmon;
			this->panel1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1474, 530);
			this->panel1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->panel7);
			this->tabPage2->Controls->Add(this->panel6);
			this->tabPage2->Controls->Add(this->panel5);
			this->tabPage2->Controls->Add(this->panel4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1497, 533);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Thức ăn";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->textBox1);
			this->panel7->Controls->Add(this->button6);
			this->panel7->Location = System::Drawing::Point(741, 6);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(732, 120);
			this->panel7->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(5, 38);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(547, 49);
			this->textBox1->TabIndex = 5;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(599, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(138, 116);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Search";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button5);
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->button3);
			this->panel6->Controls->Add(this->button2);
			this->panel6->Location = System::Drawing::Point(3, 6);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(732, 120);
			this->panel6->TabIndex = 2;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form3::panel6_Paint);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(591, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 116);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Xem";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(393, -1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(138, 120);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Sửa";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(188, -2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 123);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Xóa";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(3, -1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 120);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Thêm";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click_1);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->panel11);
			this->panel5->Controls->Add(this->panel10);
			this->panel5->Controls->Add(this->panel9);
			this->panel5->Controls->Add(this->panel8);
			this->panel5->Location = System::Drawing::Point(741, 129);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(734, 404);
			this->panel5->TabIndex = 1;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->numericUpDown1);
			this->panel11->Controls->Add(this->label4);
			this->panel11->Location = System::Drawing::Point(2, 198);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(732, 70);
			this->panel11->TabIndex = 7;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(318, 15);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(377, 38);
			this->numericUpDown1->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 45);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Giá:";
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->comboBox1);
			this->panel10->Controls->Add(this->label3);
			this->panel10->Location = System::Drawing::Point(5, 135);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(732, 70);
			this->panel10->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(314, 15);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(378, 37);
			this->comboBox1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 45);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Danh mục:";
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->textBox3);
			this->panel9->Controls->Add(this->label2);
			this->panel9->Location = System::Drawing::Point(5, 69);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(732, 70);
			this->panel9->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(313, 11);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(378, 49);
			this->textBox3->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 45);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Tên món:";
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->textBox2);
			this->panel8->Controls->Add(this->label1);
			this->panel8->Location = System::Drawing::Point(5, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(732, 70);
			this->panel8->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(313, 11);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(378, 49);
			this->textBox2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID:";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->dataGridView2);
			this->panel4->Location = System::Drawing::Point(3, 129);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(732, 404);
			this->panel4->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(3, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(726, 401);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->panel15);
			this->tabPage3->Controls->Add(this->panel16);
			this->tabPage3->Controls->Add(this->panel13);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1497, 533);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Danh mục";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->panel19);
			this->panel15->Controls->Add(this->panel20);
			this->panel15->Location = System::Drawing::Point(758, 136);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(709, 397);
			this->panel15->TabIndex = 2;
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->textBox5);
			this->panel19->Controls->Add(this->label7);
			this->panel19->Location = System::Drawing::Point(5, 69);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(732, 70);
			this->panel19->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(313, 11);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(378, 49);
			this->textBox5->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(243, 45);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Tên danh muc:";
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->textBox6);
			this->panel20->Controls->Add(this->label8);
			this->panel20->Location = System::Drawing::Point(5, 3);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(732, 70);
			this->panel20->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(313, 11);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(378, 49);
			this->textBox6->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(18, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 45);
			this->label8->TabIndex = 0;
			this->label8->Text = L"ID:";
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->button8);
			this->panel16->Controls->Add(this->button9);
			this->panel16->Controls->Add(this->button10);
			this->panel16->Controls->Add(this->button11);
			this->panel16->Location = System::Drawing::Point(3, 3);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(749, 120);
			this->panel16->TabIndex = 3;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(605, 1);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(138, 116);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Xem";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(393, -1);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(138, 120);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Sửa";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(188, -2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(138, 123);
			this->button10->TabIndex = 1;
			this->button10->Text = L"Xóa";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(3, -1);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(138, 120);
			this->button11->TabIndex = 0;
			this->button11->Text = L"Thêm";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->dataGridView4);
			this->panel13->Location = System::Drawing::Point(3, 134);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(749, 393);
			this->panel13->TabIndex = 1;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(0, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(746, 393);
			this->dataGridView4->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->panel12);
			this->tabPage4->Controls->Add(this->panel14);
			this->tabPage4->Controls->Add(this->panel17);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1497, 533);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Bàn ăn";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->button7);
			this->panel12->Controls->Add(this->button12);
			this->panel12->Controls->Add(this->button13);
			this->panel12->Controls->Add(this->button14);
			this->panel12->Location = System::Drawing::Point(6, 1);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(759, 120);
			this->panel12->TabIndex = 6;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(618, 1);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 116);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Xem";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form3::button7_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(393, -1);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(138, 120);
			this->button12->TabIndex = 2;
			this->button12->Text = L"Sửa";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(188, -2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(138, 123);
			this->button13->TabIndex = 1;
			this->button13->Text = L"Xóa";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(3, -1);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(138, 120);
			this->button14->TabIndex = 0;
			this->button14->Text = L"Thêm";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->dataGridView3);
			this->panel14->Location = System::Drawing::Point(3, 132);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(762, 393);
			this->panel14->TabIndex = 4;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(9, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(753, 393);
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form3::dataGridView3_CellContentClick_1);
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->panel22);
			this->panel17->Controls->Add(this->panel18);
			this->panel17->Controls->Add(this->panel21);
			this->panel17->Location = System::Drawing::Point(771, 134);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(709, 397);
			this->panel17->TabIndex = 5;
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->comboBox2);
			this->panel22->Controls->Add(this->label9);
			this->panel22->Location = System::Drawing::Point(3, 135);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(732, 70);
			this->panel22->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(315, 15);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(378, 39);
			this->comboBox2->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(18, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(182, 45);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Trạng thái:";
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->textBox4);
			this->panel18->Controls->Add(this->label5);
			this->panel18->Location = System::Drawing::Point(5, 69);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(732, 70);
			this->panel18->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(313, 11);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(378, 49);
			this->textBox4->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 45);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Tên bàn:";
			// 
			// panel21
			// 
			this->panel21->Controls->Add(this->textBox7);
			this->panel21->Controls->Add(this->label6);
			this->panel21->Location = System::Drawing::Point(5, 3);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(732, 70);
			this->panel21->TabIndex = 4;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(313, 11);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(378, 49);
			this->textBox7->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 45);
			this->label6->TabIndex = 0;
			this->label6->Text = L"ID:";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label14);
			this->tabPage5->Controls->Add(this->label13);
			this->tabPage5->Controls->Add(this->panel23);
			this->tabPage5->Controls->Add(this->panel24);
			this->tabPage5->Controls->Add(this->dataGridView5);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1497, 533);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Tài khoản";
			this->tabPage5->UseVisualStyleBackColor = true;
			this->tabPage5->Click += gcnew System::EventHandler(this, &Form3::tabPage5_Click_1);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(785, 57);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(108, 24);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Type2: Staff";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(785, 25);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(144, 24);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Type1: Manager";
			// 
			// panel23
			// 
			this->panel23->Controls->Add(this->button15);
			this->panel23->Controls->Add(this->button16);
			this->panel23->Controls->Add(this->button17);
			this->panel23->Controls->Add(this->button18);
			this->panel23->Location = System::Drawing::Point(6, 3);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(749, 125);
			this->panel23->TabIndex = 9;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(605, 1);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(138, 124);
			this->button15->TabIndex = 3;
			this->button15->Text = L"Xem";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(393, -1);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(138, 120);
			this->button16->TabIndex = 2;
			this->button16->Text = L"Sửa";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(188, -2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(138, 123);
			this->button17->TabIndex = 1;
			this->button17->Text = L"Xóa";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(3, -1);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(138, 120);
			this->button18->TabIndex = 0;
			this->button18->Text = L"Thêm";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// panel24
			// 
			this->panel24->Controls->Add(this->button19);
			this->panel24->Controls->Add(this->panel25);
			this->panel24->Controls->Add(this->panel26);
			this->panel24->Controls->Add(this->panel27);
			this->panel24->Location = System::Drawing::Point(758, 130);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(709, 397);
			this->panel24->TabIndex = 8;
			this->panel24->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form3::panel24_Paint);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(500, 211);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(196, 94);
			this->button19->TabIndex = 4;
			this->button19->Text = L"Xem";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// panel25
			// 
			this->panel25->Controls->Add(this->comboBox3);
			this->panel25->Controls->Add(this->label10);
			this->panel25->Location = System::Drawing::Point(3, 135);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(732, 70);
			this->panel25->TabIndex = 8;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(315, 15);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(378, 39);
			this->comboBox3->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(18, 15);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(245, 45);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Loại tài khoản:";
			// 
			// panel26
			// 
			this->panel26->Controls->Add(this->textBox8);
			this->panel26->Controls->Add(this->label11);
			this->panel26->Location = System::Drawing::Point(5, 69);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(732, 70);
			this->panel26->TabIndex = 7;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(313, 11);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(378, 49);
			this->textBox8->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(18, 15);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(210, 45);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Tên hiển thị:";
			// 
			// panel27
			// 
			this->panel27->Controls->Add(this->textBox9);
			this->panel27->Controls->Add(this->label12);
			this->panel27->Location = System::Drawing::Point(5, 3);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(732, 70);
			this->panel27->TabIndex = 4;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(313, 11);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(378, 49);
			this->textBox9->TabIndex = 6;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(18, 15);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(236, 45);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Tên tài khoản:";
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(6, 134);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(746, 393);
			this->dataGridView5->TabIndex = 7;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1477, 555);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Form3";
			this->Text = L"Form3";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel17->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel24->ResumeLayout(false);
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void loadAccount() {
			// Chuỗi kết nối tới cơ sở dữ liệu SQL Server
			SqlConnection^ connection = gcnew SqlConnection("Data Source=ATU-DEPCHAI\\SQLEXPRESS;Initial Catalog=CoffeeShop;Integrated Security=True");

			try {
				String^ query = "SELECT * FROM dbo.Account";
				connection->Open();

				SqlCommand^ command = gcnew SqlCommand(query, connection);
				DataTable^ data = gcnew DataTable();
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
				adapter->Fill(data);

				dataGridView5->DataSource = data;
			}
			catch (SqlException^ ex) {
				Console::WriteLine(ex->Message);
			}
			finally {
				connection->Close();
			}
			
			
		}
		
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPage5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dataGridView3_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void panel24_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
