#pragma once
#include "Form3.h"
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
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			loadTable();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ nguyễnAnhTúToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sốDư5000000000vndToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ manageAccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ thôngTinCáNhânToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ thôngTinCáNhânToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ đăngToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ListView^ listView1;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->nguyễnAnhTúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sốDư5000000000vndToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manageAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thôngTinCáNhânToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thôngTinCáNhânToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->đăngToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(494, 512);
			this->panel1->TabIndex = 6;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(493, 504);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form2::dataGridView1_CellContentClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nguyễnAnhTúToolStripMenuItem,
					this->thôngTinCáNhânToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1472, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// nguyễnAnhTúToolStripMenuItem
			// 
			this->nguyễnAnhTúToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sốDư5000000000vndToolStripMenuItem,
					this->manageAccountToolStripMenuItem
			});
			this->nguyễnAnhTúToolStripMenuItem->Name = L"nguyễnAnhTúToolStripMenuItem";
			this->nguyễnAnhTúToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->nguyễnAnhTúToolStripMenuItem->Text = L"Nguyễn Anh Tú";
			// 
			// sốDư5000000000vndToolStripMenuItem
			// 
			this->sốDư5000000000vndToolStripMenuItem->Name = L"sốDư5000000000vndToolStripMenuItem";
			this->sốDư5000000000vndToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->sốDư5000000000vndToolStripMenuItem->Text = L"Số dư: 5.000.000.000vnd";
			// 
			// manageAccountToolStripMenuItem
			// 
			this->manageAccountToolStripMenuItem->Name = L"manageAccountToolStripMenuItem";
			this->manageAccountToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->manageAccountToolStripMenuItem->Text = L"Manage Account";
			this->manageAccountToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::manageAccountToolStripMenuItem_Click);
			// 
			// thôngTinCáNhânToolStripMenuItem
			// 
			this->thôngTinCáNhânToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->thôngTinCáNhânToolStripMenuItem1,
					this->đăngToolStripMenuItem
			});
			this->thôngTinCáNhânToolStripMenuItem->Name = L"thôngTinCáNhânToolStripMenuItem";
			this->thôngTinCáNhânToolStripMenuItem->Size = System::Drawing::Size(141, 24);
			this->thôngTinCáNhânToolStripMenuItem->Text = L"Thông tin cá nhân";
			// 
			// thôngTinCáNhânToolStripMenuItem1
			// 
			this->thôngTinCáNhânToolStripMenuItem1->Name = L"thôngTinCáNhânToolStripMenuItem1";
			this->thôngTinCáNhânToolStripMenuItem1->Size = System::Drawing::Size(210, 26);
			this->thôngTinCáNhânToolStripMenuItem1->Text = L"Thông tin cá nhân";
			// 
			// đăngToolStripMenuItem
			// 
			this->đăngToolStripMenuItem->Name = L"đăngToolStripMenuItem";
			this->đăngToolStripMenuItem->Size = System::Drawing::Size(210, 26);
			this->đăngToolStripMenuItem->Text = L"Đăng xuất";
			this->đăngToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::đăngToolStripMenuItem_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->comboBox2);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Location = System::Drawing::Point(669, 30);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(790, 59);
			this->panel2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(545, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Thêm món";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(404, 3);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(96, 49);
			this->numericUpDown1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(3, 32);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(345, 24);
			this->comboBox2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(3, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(345, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(667, 432);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(790, 70);
			this->panel3->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(568, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 55);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Thanh toán";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->listView1);
			this->panel4->Location = System::Drawing::Point(667, 95);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(792, 331);
			this->panel4->TabIndex = 9;
			// 
			// listView1
			// 
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(3, 5);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(786, 325);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::List;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1472, 540);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		void loadTable() {
			
			// Chuỗi kết nối tới cơ sở dữ liệu SQL Server
			SqlConnection^ connection = gcnew SqlConnection("Data Source=ATU-DEPCHAI\\SQLEXPRESS;Initial Catalog=CoffeeShop;Integrated Security=True");

			try {
				String^ query = "SELECT * FROM dbo.foodTable";
				connection->Open();

				SqlCommand^ command = gcnew SqlCommand(query, connection);
				DataTable^ data = gcnew DataTable();
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
				adapter->Fill(data);

				dataGridView1->DataSource = data;
			}
			catch (SqlException^ ex) {
				Console::WriteLine(ex->Message);
			}
			finally {
				connection->Close();
			}
		}

	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Form2";
	}
private: System::Void đăngToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Ban chac chan muon thoat ?", "Thong bao", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void manageAccountToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Form3^ form3 = gcnew Form3();
	form3->Show();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void btnBan_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Xử lý sự kiện khi btnBan được nhấn
		MessageBox::Show("Button 'btnBan' clicked!");
	}
};
}
