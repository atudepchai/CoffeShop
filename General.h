#pragma once
#include "database.h"
#include "MyHeaders.h"
#include "ManagementForm.h"

namespace CoffeShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for General
	/// </summary>
	public ref class General : public System::Windows::Forms::Form
	{
	public:
		General(User^ obj)
		{
			InitializeComponent();

			// Fill the comboboxes with values from the database
			re_populateComboBox(cbCategory, "name", "FoodCategory");
			re_populateComboBox(cbItem, "name", "Food");

			// Now Pick a default value
			cbCategory->SelectedIndex = 0; // i.e. select 'All Categories' by default

			usr = obj; // This transfers (by copying to the new object) all user data from Form1 to this form!
			
			// since user data is loaded...
			lblGreeting1->Text = "Hi! " + usr->displayName + "!";
			picboxProfilePicture->Image = usr->image;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~General()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelNavigationBar;
	private: System::Windows::Forms::PictureBox^ picboxProfilePicture;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lblGreeting1;
	private: System::Windows::Forms::Panel^ panelTableButtons1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayout_Buttons;

	private: System::Windows::Forms::Panel^ panelStore;
	private: System::Windows::Forms::Button^ btnTable15;

	private: System::Windows::Forms::Button^ btnTable14;

	private: System::Windows::Forms::Button^ btnTable13;

	private: System::Windows::Forms::Button^ btnTable12;

	private: System::Windows::Forms::Button^ btnTable11;

	private: System::Windows::Forms::Button^ btnTable10;

	private: System::Windows::Forms::Button^ btnTable9;

	private: System::Windows::Forms::Button^ btnTable8;

	private: System::Windows::Forms::Button^ btnTable7;

	private: System::Windows::Forms::Button^ btnTable6;

	private: System::Windows::Forms::Button^ btnTable5;

	private: System::Windows::Forms::Button^ btnTable4;

	private: System::Windows::Forms::Button^ btnTable3;

	private: System::Windows::Forms::Button^ btnTable2;

	private: System::Windows::Forms::Button^ btnTable1;
	private: System::Windows::Forms::Panel^ panelSelectedItemOptions;
	private: System::Windows::Forms::Label^ lblQuantity;
	private: System::Windows::Forms::NumericUpDown^ numQuantity;

	private: System::Windows::Forms::Label^ lblSelectedItem;

	private: System::Windows::Forms::Label^ lblCategory;
	private: System::Windows::Forms::ComboBox^ cbItem;

	private: System::Windows::Forms::ComboBox^ cbCategory;

	private: System::Windows::Forms::Button^ btnAddToCart;
	private: System::Windows::Forms::DataGridView^ dgvListOfItems1;
	private: System::Windows::Forms::Panel^ panelItemBrief;
	private: System::Windows::Forms::PictureBox^ picboxSelectedItem;
	private: System::Windows::Forms::RichTextBox^ rtbSelectedItemInfo;










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
			this->panelNavigationBar = (gcnew System::Windows::Forms::Panel());
			this->lblGreeting1 = (gcnew System::Windows::Forms::Label());
			this->picboxProfilePicture = (gcnew System::Windows::Forms::PictureBox());
			this->panelTableButtons1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayout_Buttons = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnTable15 = (gcnew System::Windows::Forms::Button());
			this->btnTable14 = (gcnew System::Windows::Forms::Button());
			this->btnTable13 = (gcnew System::Windows::Forms::Button());
			this->btnTable12 = (gcnew System::Windows::Forms::Button());
			this->btnTable11 = (gcnew System::Windows::Forms::Button());
			this->btnTable10 = (gcnew System::Windows::Forms::Button());
			this->btnTable9 = (gcnew System::Windows::Forms::Button());
			this->btnTable8 = (gcnew System::Windows::Forms::Button());
			this->btnTable7 = (gcnew System::Windows::Forms::Button());
			this->btnTable6 = (gcnew System::Windows::Forms::Button());
			this->btnTable5 = (gcnew System::Windows::Forms::Button());
			this->btnTable4 = (gcnew System::Windows::Forms::Button());
			this->btnTable3 = (gcnew System::Windows::Forms::Button());
			this->btnTable2 = (gcnew System::Windows::Forms::Button());
			this->btnTable1 = (gcnew System::Windows::Forms::Button());
			this->panelStore = (gcnew System::Windows::Forms::Panel());
			this->dgvListOfItems1 = (gcnew System::Windows::Forms::DataGridView());
			this->panelSelectedItemOptions = (gcnew System::Windows::Forms::Panel());
			this->panelItemBrief = (gcnew System::Windows::Forms::Panel());
			this->rtbSelectedItemInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->picboxSelectedItem = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddToCart = (gcnew System::Windows::Forms::Button());
			this->lblQuantity = (gcnew System::Windows::Forms::Label());
			this->numQuantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblSelectedItem = (gcnew System::Windows::Forms::Label());
			this->lblCategory = (gcnew System::Windows::Forms::Label());
			this->cbItem = (gcnew System::Windows::Forms::ComboBox());
			this->cbCategory = (gcnew System::Windows::Forms::ComboBox());
			this->panelNavigationBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picboxProfilePicture))->BeginInit();
			this->panelTableButtons1->SuspendLayout();
			this->tableLayout_Buttons->SuspendLayout();
			this->panelStore->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListOfItems1))->BeginInit();
			this->panelSelectedItemOptions->SuspendLayout();
			this->panelItemBrief->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picboxSelectedItem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->BeginInit();
			this->SuspendLayout();
			// 
			// panelNavigationBar
			// 
			this->panelNavigationBar->BackColor = System::Drawing::SystemColors::Info;
			this->panelNavigationBar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelNavigationBar->Controls->Add(this->lblGreeting1);
			this->panelNavigationBar->Controls->Add(this->picboxProfilePicture);
			this->panelNavigationBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelNavigationBar->Location = System::Drawing::Point(0, 0);
			this->panelNavigationBar->Margin = System::Windows::Forms::Padding(0);
			this->panelNavigationBar->Name = L"panelNavigationBar";
			this->panelNavigationBar->Size = System::Drawing::Size(1329, 109);
			this->panelNavigationBar->TabIndex = 0;
			// 
			// lblGreeting1
			// 
			this->lblGreeting1->AutoSize = true;
			this->lblGreeting1->Location = System::Drawing::Point(1121, 25);
			this->lblGreeting1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblGreeting1->Name = L"lblGreeting1";
			this->lblGreeting1->Size = System::Drawing::Size(73, 16);
			this->lblGreeting1->TabIndex = 1;
			this->lblGreeting1->Text = L"Hi! {name}!";
			// 
			// picboxProfilePicture
			// 
			this->picboxProfilePicture->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picboxProfilePicture->Location = System::Drawing::Point(1227, 14);
			this->picboxProfilePicture->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->picboxProfilePicture->Name = L"picboxProfilePicture";
			this->picboxProfilePicture->Size = System::Drawing::Size(85, 78);
			this->picboxProfilePicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picboxProfilePicture->TabIndex = 0;
			this->picboxProfilePicture->TabStop = false;
			this->picboxProfilePicture->Click += gcnew System::EventHandler(this, &General::picboxProfilePicture_Click);
			// 
			// panelTableButtons1
			// 
			this->panelTableButtons1->Controls->Add(this->tableLayout_Buttons);
			this->panelTableButtons1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelTableButtons1->Location = System::Drawing::Point(0, 109);
			this->panelTableButtons1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelTableButtons1->Name = L"panelTableButtons1";
			this->panelTableButtons1->Size = System::Drawing::Size(340, 517);
			this->panelTableButtons1->TabIndex = 1;
			// 
			// tableLayout_Buttons
			// 
			this->tableLayout_Buttons->ColumnCount = 3;
			this->tableLayout_Buttons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayout_Buttons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayout_Buttons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayout_Buttons->Controls->Add(this->btnTable15, 2, 4);
			this->tableLayout_Buttons->Controls->Add(this->btnTable14, 1, 4);
			this->tableLayout_Buttons->Controls->Add(this->btnTable13, 0, 4);
			this->tableLayout_Buttons->Controls->Add(this->btnTable12, 2, 3);
			this->tableLayout_Buttons->Controls->Add(this->btnTable11, 1, 3);
			this->tableLayout_Buttons->Controls->Add(this->btnTable10, 0, 3);
			this->tableLayout_Buttons->Controls->Add(this->btnTable9, 2, 2);
			this->tableLayout_Buttons->Controls->Add(this->btnTable8, 1, 2);
			this->tableLayout_Buttons->Controls->Add(this->btnTable7, 0, 2);
			this->tableLayout_Buttons->Controls->Add(this->btnTable6, 2, 1);
			this->tableLayout_Buttons->Controls->Add(this->btnTable5, 1, 1);
			this->tableLayout_Buttons->Controls->Add(this->btnTable4, 0, 1);
			this->tableLayout_Buttons->Controls->Add(this->btnTable3, 2, 0);
			this->tableLayout_Buttons->Controls->Add(this->btnTable2, 1, 0);
			this->tableLayout_Buttons->Controls->Add(this->btnTable1, 0, 0);
			this->tableLayout_Buttons->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayout_Buttons->Location = System::Drawing::Point(0, 0);
			this->tableLayout_Buttons->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tableLayout_Buttons->Name = L"tableLayout_Buttons";
			this->tableLayout_Buttons->RowCount = 5;
			this->tableLayout_Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayout_Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayout_Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayout_Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayout_Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayout_Buttons->Size = System::Drawing::Size(340, 517);
			this->tableLayout_Buttons->TabIndex = 0;
			// 
			// btnTable15
			// 
			this->btnTable15->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable15->Location = System::Drawing::Point(230, 416);
			this->btnTable15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable15->Name = L"btnTable15";
			this->btnTable15->Size = System::Drawing::Size(106, 97);
			this->btnTable15->TabIndex = 14;
			this->btnTable15->Text = L"Table 15";
			this->btnTable15->UseVisualStyleBackColor = false;
			// 
			// btnTable14
			// 
			this->btnTable14->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable14->Location = System::Drawing::Point(117, 416);
			this->btnTable14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable14->Name = L"btnTable14";
			this->btnTable14->Size = System::Drawing::Size(105, 97);
			this->btnTable14->TabIndex = 13;
			this->btnTable14->Text = L"Table 14";
			this->btnTable14->UseVisualStyleBackColor = false;
			// 
			// btnTable13
			// 
			this->btnTable13->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable13->Location = System::Drawing::Point(4, 416);
			this->btnTable13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable13->Name = L"btnTable13";
			this->btnTable13->Size = System::Drawing::Size(105, 97);
			this->btnTable13->TabIndex = 12;
			this->btnTable13->Text = L"Table 13";
			this->btnTable13->UseVisualStyleBackColor = false;
			// 
			// btnTable12
			// 
			this->btnTable12->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable12->Location = System::Drawing::Point(230, 313);
			this->btnTable12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable12->Name = L"btnTable12";
			this->btnTable12->Size = System::Drawing::Size(106, 95);
			this->btnTable12->TabIndex = 11;
			this->btnTable12->Text = L"Table 12";
			this->btnTable12->UseVisualStyleBackColor = false;
			// 
			// btnTable11
			// 
			this->btnTable11->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable11->Location = System::Drawing::Point(117, 313);
			this->btnTable11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable11->Name = L"btnTable11";
			this->btnTable11->Size = System::Drawing::Size(105, 95);
			this->btnTable11->TabIndex = 10;
			this->btnTable11->Text = L"Table 11";
			this->btnTable11->UseVisualStyleBackColor = false;
			// 
			// btnTable10
			// 
			this->btnTable10->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable10->Location = System::Drawing::Point(4, 313);
			this->btnTable10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable10->Name = L"btnTable10";
			this->btnTable10->Size = System::Drawing::Size(105, 95);
			this->btnTable10->TabIndex = 9;
			this->btnTable10->Text = L"Table 10";
			this->btnTable10->UseVisualStyleBackColor = false;
			// 
			// btnTable9
			// 
			this->btnTable9->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable9->Location = System::Drawing::Point(230, 210);
			this->btnTable9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable9->Name = L"btnTable9";
			this->btnTable9->Size = System::Drawing::Size(106, 95);
			this->btnTable9->TabIndex = 8;
			this->btnTable9->Text = L"Table 9";
			this->btnTable9->UseVisualStyleBackColor = false;
			// 
			// btnTable8
			// 
			this->btnTable8->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable8->Location = System::Drawing::Point(117, 210);
			this->btnTable8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable8->Name = L"btnTable8";
			this->btnTable8->Size = System::Drawing::Size(105, 95);
			this->btnTable8->TabIndex = 7;
			this->btnTable8->Text = L"Table 8";
			this->btnTable8->UseVisualStyleBackColor = false;
			// 
			// btnTable7
			// 
			this->btnTable7->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable7->Location = System::Drawing::Point(4, 210);
			this->btnTable7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable7->Name = L"btnTable7";
			this->btnTable7->Size = System::Drawing::Size(105, 95);
			this->btnTable7->TabIndex = 6;
			this->btnTable7->Text = L"Table 7";
			this->btnTable7->UseVisualStyleBackColor = false;
			// 
			// btnTable6
			// 
			this->btnTable6->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable6->Location = System::Drawing::Point(230, 107);
			this->btnTable6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable6->Name = L"btnTable6";
			this->btnTable6->Size = System::Drawing::Size(106, 95);
			this->btnTable6->TabIndex = 5;
			this->btnTable6->Text = L"Table 6";
			this->btnTable6->UseVisualStyleBackColor = false;
			// 
			// btnTable5
			// 
			this->btnTable5->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable5->Location = System::Drawing::Point(117, 107);
			this->btnTable5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable5->Name = L"btnTable5";
			this->btnTable5->Size = System::Drawing::Size(105, 95);
			this->btnTable5->TabIndex = 4;
			this->btnTable5->Text = L"Table 5";
			this->btnTable5->UseVisualStyleBackColor = false;
			// 
			// btnTable4
			// 
			this->btnTable4->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable4->Location = System::Drawing::Point(4, 107);
			this->btnTable4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable4->Name = L"btnTable4";
			this->btnTable4->Size = System::Drawing::Size(105, 95);
			this->btnTable4->TabIndex = 3;
			this->btnTable4->Text = L"Table 4";
			this->btnTable4->UseVisualStyleBackColor = false;
			// 
			// btnTable3
			// 
			this->btnTable3->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable3->Location = System::Drawing::Point(230, 4);
			this->btnTable3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable3->Name = L"btnTable3";
			this->btnTable3->Size = System::Drawing::Size(106, 95);
			this->btnTable3->TabIndex = 2;
			this->btnTable3->Text = L"Table 3";
			this->btnTable3->UseVisualStyleBackColor = false;
			// 
			// btnTable2
			// 
			this->btnTable2->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable2->Location = System::Drawing::Point(117, 4);
			this->btnTable2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable2->Name = L"btnTable2";
			this->btnTable2->Size = System::Drawing::Size(105, 95);
			this->btnTable2->TabIndex = 1;
			this->btnTable2->Text = L"Table 2";
			this->btnTable2->UseVisualStyleBackColor = false;
			// 
			// btnTable1
			// 
			this->btnTable1->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTable1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTable1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTable1->Location = System::Drawing::Point(4, 4);
			this->btnTable1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTable1->Name = L"btnTable1";
			this->btnTable1->Size = System::Drawing::Size(105, 95);
			this->btnTable1->TabIndex = 0;
			this->btnTable1->Text = L"Table 1";
			this->btnTable1->UseVisualStyleBackColor = false;
			// 
			// panelStore
			// 
			this->panelStore->Controls->Add(this->dgvListOfItems1);
			this->panelStore->Controls->Add(this->panelSelectedItemOptions);
			this->panelStore->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelStore->Location = System::Drawing::Point(340, 109);
			this->panelStore->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelStore->Name = L"panelStore";
			this->panelStore->Size = System::Drawing::Size(989, 517);
			this->panelStore->TabIndex = 2;
			// 
			// dgvListOfItems1
			// 
			this->dgvListOfItems1->AllowUserToAddRows = false;
			this->dgvListOfItems1->AllowUserToDeleteRows = false;
			this->dgvListOfItems1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvListOfItems1->ColumnHeadersHeight = 29;
			this->dgvListOfItems1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvListOfItems1->Location = System::Drawing::Point(0, 123);
			this->dgvListOfItems1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvListOfItems1->MultiSelect = false;
			this->dgvListOfItems1->Name = L"dgvListOfItems1";
			this->dgvListOfItems1->ReadOnly = true;
			this->dgvListOfItems1->RowHeadersWidth = 51;
			this->dgvListOfItems1->ShowEditingIcon = false;
			this->dgvListOfItems1->Size = System::Drawing::Size(989, 394);
			this->dgvListOfItems1->TabIndex = 1;
			this->dgvListOfItems1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &General::dgvListOfItems1_CellContentClick);
			this->dgvListOfItems1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &General::dgvListOfItems1_CellDoubleClick);
			// 
			// panelSelectedItemOptions
			// 
			this->panelSelectedItemOptions->Controls->Add(this->panelItemBrief);
			this->panelSelectedItemOptions->Controls->Add(this->btnAddToCart);
			this->panelSelectedItemOptions->Controls->Add(this->lblQuantity);
			this->panelSelectedItemOptions->Controls->Add(this->numQuantity);
			this->panelSelectedItemOptions->Controls->Add(this->lblSelectedItem);
			this->panelSelectedItemOptions->Controls->Add(this->lblCategory);
			this->panelSelectedItemOptions->Controls->Add(this->cbItem);
			this->panelSelectedItemOptions->Controls->Add(this->cbCategory);
			this->panelSelectedItemOptions->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSelectedItemOptions->Location = System::Drawing::Point(0, 0);
			this->panelSelectedItemOptions->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelSelectedItemOptions->Name = L"panelSelectedItemOptions";
			this->panelSelectedItemOptions->Size = System::Drawing::Size(989, 123);
			this->panelSelectedItemOptions->TabIndex = 0;
			// 
			// panelItemBrief
			// 
			this->panelItemBrief->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelItemBrief->Controls->Add(this->rtbSelectedItemInfo);
			this->panelItemBrief->Controls->Add(this->picboxSelectedItem);
			this->panelItemBrief->Location = System::Drawing::Point(377, 4);
			this->panelItemBrief->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelItemBrief->Name = L"panelItemBrief";
			this->panelItemBrief->Size = System::Drawing::Size(426, 114);
			this->panelItemBrief->TabIndex = 7;
			// 
			// rtbSelectedItemInfo
			// 
			this->rtbSelectedItemInfo->Cursor = System::Windows::Forms::Cursors::No;
			this->rtbSelectedItemInfo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->rtbSelectedItemInfo->Enabled = false;
			this->rtbSelectedItemInfo->Location = System::Drawing::Point(155, 0);
			this->rtbSelectedItemInfo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rtbSelectedItemInfo->Name = L"rtbSelectedItemInfo";
			this->rtbSelectedItemInfo->ReadOnly = true;
			this->rtbSelectedItemInfo->Size = System::Drawing::Size(269, 112);
			this->rtbSelectedItemInfo->TabIndex = 1;
			this->rtbSelectedItemInfo->Text = L"";
			this->rtbSelectedItemInfo->TextChanged += gcnew System::EventHandler(this, &General::rtbSelectedItemInfo_TextChanged);
			this->rtbSelectedItemInfo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &General::rtbSelectedItemInfo_KeyDown);
			// 
			// picboxSelectedItem
			// 
			this->picboxSelectedItem->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picboxSelectedItem->Dock = System::Windows::Forms::DockStyle::Left;
			this->picboxSelectedItem->Location = System::Drawing::Point(0, 0);
			this->picboxSelectedItem->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->picboxSelectedItem->Name = L"picboxSelectedItem";
			this->picboxSelectedItem->Size = System::Drawing::Size(155, 112);
			this->picboxSelectedItem->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picboxSelectedItem->TabIndex = 0;
			this->picboxSelectedItem->TabStop = false;
			this->picboxSelectedItem->Click += gcnew System::EventHandler(this, &General::picboxSelectedItem_Click);
			// 
			// btnAddToCart
			// 
			this->btnAddToCart->Location = System::Drawing::Point(861, 52);
			this->btnAddToCart->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAddToCart->Name = L"btnAddToCart";
			this->btnAddToCart->Size = System::Drawing::Size(112, 43);
			this->btnAddToCart->TabIndex = 6;
			this->btnAddToCart->Text = L"Add to cart";
			this->btnAddToCart->UseVisualStyleBackColor = true;
			// 
			// lblQuantity
			// 
			this->lblQuantity->AutoSize = true;
			this->lblQuantity->Location = System::Drawing::Point(812, 4);
			this->lblQuantity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblQuantity->Name = L"lblQuantity";
			this->lblQuantity->Size = System::Drawing::Size(58, 16);
			this->lblQuantity->TabIndex = 5;
			this->lblQuantity->Text = L"Quantity:";
			// 
			// numQuantity
			// 
			this->numQuantity->Location = System::Drawing::Point(816, 23);
			this->numQuantity->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->numQuantity->Name = L"numQuantity";
			this->numQuantity->Size = System::Drawing::Size(160, 22);
			this->numQuantity->TabIndex = 4;
			this->numQuantity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numQuantity->ValueChanged += gcnew System::EventHandler(this, &General::numQuantity_ValueChanged);
			// 
			// lblSelectedItem
			// 
			this->lblSelectedItem->AutoSize = true;
			this->lblSelectedItem->Location = System::Drawing::Point(21, 65);
			this->lblSelectedItem->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSelectedItem->Name = L"lblSelectedItem";
			this->lblSelectedItem->Size = System::Drawing::Size(35, 16);
			this->lblSelectedItem->TabIndex = 3;
			this->lblSelectedItem->Text = L"Item:";
			// 
			// lblCategory
			// 
			this->lblCategory->AutoSize = true;
			this->lblCategory->Location = System::Drawing::Point(21, 16);
			this->lblCategory->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCategory->Name = L"lblCategory";
			this->lblCategory->Size = System::Drawing::Size(65, 16);
			this->lblCategory->TabIndex = 2;
			this->lblCategory->Text = L"Category:";
			// 
			// cbItem
			// 
			this->cbItem->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbItem->FormattingEnabled = true;
			this->cbItem->Location = System::Drawing::Point(25, 85);
			this->cbItem->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cbItem->Name = L"cbItem";
			this->cbItem->Size = System::Drawing::Size(343, 24);
			this->cbItem->TabIndex = 1;
			this->cbItem->SelectedIndexChanged += gcnew System::EventHandler(this, &General::cbItem_SelectedIndexChanged);
			// 
			// cbCategory
			// 
			this->cbCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCategory->FormattingEnabled = true;
			this->cbCategory->Location = System::Drawing::Point(25, 36);
			this->cbCategory->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cbCategory->Name = L"cbCategory";
			this->cbCategory->Size = System::Drawing::Size(343, 24);
			this->cbCategory->TabIndex = 0;
			this->cbCategory->SelectedIndexChanged += gcnew System::EventHandler(this, &General::cbCategory_SelectedIndexChanged);
			// 
			// General
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1329, 626);
			this->Controls->Add(this->panelStore);
			this->Controls->Add(this->panelTableButtons1);
			this->Controls->Add(this->panelNavigationBar);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"General";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Ahn\'s Coffee Shop";
			this->panelNavigationBar->ResumeLayout(false);
			this->panelNavigationBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picboxProfilePicture))->EndInit();
			this->panelTableButtons1->ResumeLayout(false);
			this->tableLayout_Buttons->ResumeLayout(false);
			this->panelStore->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListOfItems1))->EndInit();
			this->panelSelectedItemOptions->ResumeLayout(false);
			this->panelSelectedItemOptions->PerformLayout();
			this->panelItemBrief->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picboxSelectedItem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// ===========================
		User^ usr;
		array<Byte>^ imageData;
		bool profilePictureChanged = false;

		// =============================
		void loadTable() {
			SqlConnection^ connection = GetConnection();

			try {
				String^ query = "SELECT * FROM dbo.Food";
				connection->Open();

				SqlCommand^ command = gcnew SqlCommand(query, connection);
				DataTable^ data = gcnew DataTable();
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
				adapter->Fill(data);

				dgvListOfItems1->DataSource = data;
			}
			catch (SqlException^ ex) {
				Console::WriteLine(ex->Message);
			}
			finally {
				connection->Close();
			}
		}

		private: System::Void cbCategory_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			cbItem->Items->Clear();

			// We need the name of the category here first...
			String^ categoryName = cbCategory->Text;

			// Now with the name we need to find the id of this category!
			int idCategory = getValueFromQuery("SELECT id FROM FoodCategory WHERE [FoodCategory].[name] = '" + categoryName +"'");

			String^ query = "SELECT name FROM Food WHERE idCategory='" + idCategory.ToString() + "'";
			
			// Do you remember that 'All Categories' has id of -1? Well we gonna use that to our advantage!
			if (idCategory == -1) {
				query = "SELECT name FROM Food"; // we show everything at this point hehe
			}

			re_populateComboBox_FromQuery(cbItem, query);

			String^ tableQuery = "SELECT f.id AS[ID], f.[name] AS[Liquour Name], fc.[name] as Category, f.price AS Price FROM Food f INNER JOIN FoodCategory fc ON f.idCategory = fc.id";

			updateDataGridView(tableQuery, dgvListOfItems1);
		}

		private: System::Void cbItem_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			int currentId = cbItem->SelectedIndex + 1;
			String^ idString = currentId.ToString();

			dgvListOfItems1->Rows[currentId - 1]->Cells[0]->Selected = true;

			DataGridViewCellCollection^ rows = dgvListOfItems1->Rows[currentId - 1]->Cells;

			picboxSelectedItem->Image = nullptr;
			rtbSelectedItemInfo->Text = " Item ID\t: " + rows[0]->Value->ToString() +
				"\n Name\t: " + rows[1]->Value->ToString() +
				"\n Category\t: " + rows[2]->Value->ToString() +
				"\n Price\t: " + rows[3]->Value->ToString();
		}

		private: System::Void dgvListOfItems1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			//int idValue = Convert::ToInt32(dgvListOfItems1->CurrentRow->Cells[0]->Value);
			

		}
		
		private: System::Void picboxProfilePicture_Click(System::Object^ sender, System::EventArgs^ e) {
			ManagementForm^ managepage = gcnew ManagementForm();
			this->Hide();
			managepage->ShowDialog();
			this->Show();
			return;
			// Change profile picture
			OpenFileDialog^ ofd = gcnew OpenFileDialog();
			ofd->Title = L"Coffee Shop: Select an Image";
			ofd->Filter = L"Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG";
			ofd->Multiselect = false;

			if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK)
			{
				imageData = System::IO::File::ReadAllBytes(ofd->FileName);
				picboxProfilePicture->Image = System::Drawing::Image::FromFile(ofd->FileName);
				profilePictureChanged = true;
			}
			else {
				picboxProfilePicture->Image = usr->image;
				profilePictureChanged = false;
			}
		}
		private: System::Void dgvListOfItems1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			int idValue = Convert::ToInt32(dgvListOfItems1->CurrentRow->Cells[0]->Value);
			cbCategory->SelectedIndex = 0;
			cbItem->SelectedIndex = idValue - 1;

			DataGridViewCellCollection^ rows = dgvListOfItems1->Rows[idValue - 1]->Cells;

			picboxSelectedItem->Image = nullptr;
			rtbSelectedItemInfo->Text = " Item ID\t: " + rows[0]->Value->ToString() +
				"\n Name\t: " + rows[1]->Value->ToString() +
				"\n Category\t: " + rows[2]->Value->ToString() +
				"\n Price\t: " + rows[3]->Value->ToString();
		}
		private: System::Void numQuantity_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void rtbSelectedItemInfo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//nah, i think when press button "add to cart", will show bill in here
		}

		private: System::Void picboxSelectedItem_Click(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void rtbSelectedItemInfo_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
				e->SuppressKeyPress = true;// Prevent any key from making a "beep" sound
		}
	};
}
