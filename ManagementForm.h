#pragma once
#include "database.h"
#include "MyHeaders.h"

namespace CoffeShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ManagementForm
	/// </summary>
	public ref class ManagementForm : public System::Windows::Forms::Form
	{
	public:
		ManagementForm(User^ obj)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManagementForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPageAccount;
	private: System::Windows::Forms::Panel^ panelAccountControls;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btnAccModify;

	private: System::Windows::Forms::Button^ btnAccDelete;
	private: System::Windows::Forms::Button^ btnAccAdd;




	private: System::Windows::Forms::Panel^ panelAccSelectView;
	private: System::Windows::Forms::Panel^ panelAccType;




	private: System::Windows::Forms::Label^ lblAccType;
	private: System::Windows::Forms::Panel^ panelAccDisplayName;
	private: System::Windows::Forms::TextBox^ tbAccDisplayName;




	private: System::Windows::Forms::Label^ lblDisplayName;
	private: System::Windows::Forms::Panel^ panelAccName;



	private: System::Windows::Forms::TextBox^ tbAccName;

	private: System::Windows::Forms::Label^ lblAccName;
	private: System::Windows::Forms::DataGridView^ dgvAccList;


	private: System::Windows::Forms::TabPage^ tabPageTable;
	private: System::Windows::Forms::Panel^ panelTableControls;


	private: System::Windows::Forms::Button^ btnTableModify;
	private: System::Windows::Forms::Button^ btnTableDelete;
	private: System::Windows::Forms::Button^ btnTableAdd;
	private: System::Windows::Forms::Panel^ panelTableList;




	private: System::Windows::Forms::DataGridView^ dgvTableList;
	private: System::Windows::Forms::Panel^ panelTableSelectView;
	private: System::Windows::Forms::Panel^ panelTableStatus;
	private: System::Windows::Forms::Label^ lblTableStatus;





	private: System::Windows::Forms::Panel^ panelTableName;

	private: System::Windows::Forms::TextBox^ tbTableName;
	private: System::Windows::Forms::Label^ lblTableName;


	private: System::Windows::Forms::Panel^ panelTableId;

	private: System::Windows::Forms::TextBox^ tbTableID;
	private: System::Windows::Forms::Label^ lblTableId;


	private: System::Windows::Forms::TabPage^ tabPageFood;


	private: System::Windows::Forms::Panel^ panelFoodControls;



	private: System::Windows::Forms::Button^ btnFoodModify;

	private: System::Windows::Forms::Button^ btnFoodDelete;
	private: System::Windows::Forms::Button^ btnFoodAdd;
	private: System::Windows::Forms::Panel^ panelFoodSearch;
	private: System::Windows::Forms::TextBox^ tbFoodSearch;





private: System::Windows::Forms::Button^ btnFoodSearch;


	private: System::Windows::Forms::Panel^ panelFoodSelectView;
private: System::Windows::Forms::Panel^ panelFoodPrice;



private: System::Windows::Forms::NumericUpDown^ numUDFoodPrice;




	private: System::Windows::Forms::Label^ lblPrice;

	private: System::Windows::Forms::Panel^ panelCategory;
private: System::Windows::Forms::ComboBox^ cbFoodCategory;



	private: System::Windows::Forms::Label^ lblCategory;
	private: System::Windows::Forms::Panel^ panelDishName;
private: System::Windows::Forms::TextBox^ tbFoodDishName;
private: System::Windows::Forms::Label^ lblFoodDish;






private: System::Windows::Forms::Panel^ panelFoodID;

private: System::Windows::Forms::TextBox^ tbFoodId;
private: System::Windows::Forms::Label^ lblFoodID;





private: System::Windows::Forms::Panel^ panelFoodList;
private: System::Windows::Forms::DataGridView^ dgvFoodList;



	private: System::Windows::Forms::TabPage^ tabPageBill;
private: System::Windows::Forms::DataGridView^ dgvBillData;


private: System::Windows::Forms::Panel^ panelBillHeader;

	private: System::Windows::Forms::Button^ btnBillCheck;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::TabControl^ tabControl1;

private: System::Windows::Forms::TextBox^ tbTableSearch;






	private: System::Windows::Forms::Button^ btnTableSearch;
private: System::Windows::Forms::TextBox^ tbTableStatus;


	private: System::Windows::Forms::Button^ btnAccSearch;
private: System::Windows::Forms::TextBox^ tbAccSearch;


private: System::Windows::Forms::Button^ btnBillPrint;
private: System::Windows::Forms::Panel^ panelAccountList;
private: System::Windows::Forms::ComboBox^ cbAccType;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TextBox^ tbAccID;
private: System::Windows::Forms::Label^ lblAccID;




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
			this->tabPageAccount = (gcnew System::Windows::Forms::TabPage());
			this->panelAccountList = (gcnew System::Windows::Forms::Panel());
			this->dgvAccList = (gcnew System::Windows::Forms::DataGridView());
			this->tbAccSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnAccSearch = (gcnew System::Windows::Forms::Button());
			this->panelAccountControls = (gcnew System::Windows::Forms::Panel());
			this->btnAccModify = (gcnew System::Windows::Forms::Button());
			this->btnAccDelete = (gcnew System::Windows::Forms::Button());
			this->btnAccAdd = (gcnew System::Windows::Forms::Button());
			this->panelAccSelectView = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbAccID = (gcnew System::Windows::Forms::TextBox());
			this->lblAccID = (gcnew System::Windows::Forms::Label());
			this->panelAccType = (gcnew System::Windows::Forms::Panel());
			this->cbAccType = (gcnew System::Windows::Forms::ComboBox());
			this->lblAccType = (gcnew System::Windows::Forms::Label());
			this->panelAccDisplayName = (gcnew System::Windows::Forms::Panel());
			this->tbAccDisplayName = (gcnew System::Windows::Forms::TextBox());
			this->lblDisplayName = (gcnew System::Windows::Forms::Label());
			this->panelAccName = (gcnew System::Windows::Forms::Panel());
			this->tbAccName = (gcnew System::Windows::Forms::TextBox());
			this->lblAccName = (gcnew System::Windows::Forms::Label());
			this->tabPageTable = (gcnew System::Windows::Forms::TabPage());
			this->tbTableSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnTableSearch = (gcnew System::Windows::Forms::Button());
			this->panelTableControls = (gcnew System::Windows::Forms::Panel());
			this->btnTableModify = (gcnew System::Windows::Forms::Button());
			this->btnTableDelete = (gcnew System::Windows::Forms::Button());
			this->btnTableAdd = (gcnew System::Windows::Forms::Button());
			this->panelTableList = (gcnew System::Windows::Forms::Panel());
			this->dgvTableList = (gcnew System::Windows::Forms::DataGridView());
			this->panelTableSelectView = (gcnew System::Windows::Forms::Panel());
			this->panelTableStatus = (gcnew System::Windows::Forms::Panel());
			this->tbTableStatus = (gcnew System::Windows::Forms::TextBox());
			this->lblTableStatus = (gcnew System::Windows::Forms::Label());
			this->panelTableName = (gcnew System::Windows::Forms::Panel());
			this->tbTableName = (gcnew System::Windows::Forms::TextBox());
			this->lblTableName = (gcnew System::Windows::Forms::Label());
			this->panelTableId = (gcnew System::Windows::Forms::Panel());
			this->tbTableID = (gcnew System::Windows::Forms::TextBox());
			this->lblTableId = (gcnew System::Windows::Forms::Label());
			this->tabPageFood = (gcnew System::Windows::Forms::TabPage());
			this->panelFoodControls = (gcnew System::Windows::Forms::Panel());
			this->btnFoodModify = (gcnew System::Windows::Forms::Button());
			this->btnFoodDelete = (gcnew System::Windows::Forms::Button());
			this->btnFoodAdd = (gcnew System::Windows::Forms::Button());
			this->panelFoodSearch = (gcnew System::Windows::Forms::Panel());
			this->tbFoodSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnFoodSearch = (gcnew System::Windows::Forms::Button());
			this->panelFoodSelectView = (gcnew System::Windows::Forms::Panel());
			this->panelFoodPrice = (gcnew System::Windows::Forms::Panel());
			this->numUDFoodPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->panelCategory = (gcnew System::Windows::Forms::Panel());
			this->cbFoodCategory = (gcnew System::Windows::Forms::ComboBox());
			this->lblCategory = (gcnew System::Windows::Forms::Label());
			this->panelDishName = (gcnew System::Windows::Forms::Panel());
			this->tbFoodDishName = (gcnew System::Windows::Forms::TextBox());
			this->lblFoodDish = (gcnew System::Windows::Forms::Label());
			this->panelFoodID = (gcnew System::Windows::Forms::Panel());
			this->tbFoodId = (gcnew System::Windows::Forms::TextBox());
			this->lblFoodID = (gcnew System::Windows::Forms::Label());
			this->panelFoodList = (gcnew System::Windows::Forms::Panel());
			this->dgvFoodList = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageBill = (gcnew System::Windows::Forms::TabPage());
			this->btnBillPrint = (gcnew System::Windows::Forms::Button());
			this->dgvBillData = (gcnew System::Windows::Forms::DataGridView());
			this->panelBillHeader = (gcnew System::Windows::Forms::Panel());
			this->btnBillCheck = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageAccount->SuspendLayout();
			this->panelAccountList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAccList))->BeginInit();
			this->panelAccountControls->SuspendLayout();
			this->panelAccSelectView->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelAccType->SuspendLayout();
			this->panelAccDisplayName->SuspendLayout();
			this->panelAccName->SuspendLayout();
			this->tabPageTable->SuspendLayout();
			this->panelTableControls->SuspendLayout();
			this->panelTableList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTableList))->BeginInit();
			this->panelTableSelectView->SuspendLayout();
			this->panelTableStatus->SuspendLayout();
			this->panelTableName->SuspendLayout();
			this->panelTableId->SuspendLayout();
			this->tabPageFood->SuspendLayout();
			this->panelFoodControls->SuspendLayout();
			this->panelFoodSearch->SuspendLayout();
			this->panelFoodSelectView->SuspendLayout();
			this->panelFoodPrice->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUDFoodPrice))->BeginInit();
			this->panelCategory->SuspendLayout();
			this->panelDishName->SuspendLayout();
			this->panelFoodID->SuspendLayout();
			this->panelFoodList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFoodList))->BeginInit();
			this->tabPageBill->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBillData))->BeginInit();
			this->panelBillHeader->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPageAccount
			// 
			this->tabPageAccount->Controls->Add(this->panelAccountList);
			this->tabPageAccount->Controls->Add(this->tbAccSearch);
			this->tabPageAccount->Controls->Add(this->btnAccSearch);
			this->tabPageAccount->Controls->Add(this->panelAccountControls);
			this->tabPageAccount->Controls->Add(this->panelAccSelectView);
			this->tabPageAccount->Location = System::Drawing::Point(4, 22);
			this->tabPageAccount->Margin = System::Windows::Forms::Padding(2);
			this->tabPageAccount->Name = L"tabPageAccount";
			this->tabPageAccount->Padding = System::Windows::Forms::Padding(2);
			this->tabPageAccount->Size = System::Drawing::Size(1100, 425);
			this->tabPageAccount->TabIndex = 4;
			this->tabPageAccount->Text = L"Account";
			this->tabPageAccount->UseVisualStyleBackColor = true;
			// 
			// panelAccountList
			// 
			this->panelAccountList->Controls->Add(this->dgvAccList);
			this->panelAccountList->Location = System::Drawing::Point(0, 78);
			this->panelAccountList->Name = L"panelAccountList";
			this->panelAccountList->Size = System::Drawing::Size(604, 347);
			this->panelAccountList->TabIndex = 15;
			// 
			// dgvAccList
			// 
			this->dgvAccList->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvAccList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAccList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvAccList->Location = System::Drawing::Point(0, 0);
			this->dgvAccList->Margin = System::Windows::Forms::Padding(2);
			this->dgvAccList->MultiSelect = false;
			this->dgvAccList->Name = L"dgvAccList";
			this->dgvAccList->ReadOnly = true;
			this->dgvAccList->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dgvAccList->RowTemplate->Height = 24;
			this->dgvAccList->Size = System::Drawing::Size(604, 347);
			this->dgvAccList->TabIndex = 7;
			this->dgvAccList->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ManagementForm::dgvAccList_CellDoubleClick);
			// 
			// tbAccSearch
			// 
			this->tbAccSearch->Location = System::Drawing::Point(618, 21);
			this->tbAccSearch->Margin = System::Windows::Forms::Padding(2);
			this->tbAccSearch->Multiline = true;
			this->tbAccSearch->Name = L"tbAccSearch";
			this->tbAccSearch->Size = System::Drawing::Size(381, 41);
			this->tbAccSearch->TabIndex = 7;
			// 
			// btnAccSearch
			// 
			this->btnAccSearch->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccSearch->Location = System::Drawing::Point(1003, 16);
			this->btnAccSearch->Margin = System::Windows::Forms::Padding(2);
			this->btnAccSearch->Name = L"btnAccSearch";
			this->btnAccSearch->Size = System::Drawing::Size(90, 53);
			this->btnAccSearch->TabIndex = 14;
			this->btnAccSearch->Text = L"Search";
			this->btnAccSearch->UseVisualStyleBackColor = true;
			// 
			// panelAccountControls
			// 
			this->panelAccountControls->Controls->Add(this->btnAccModify);
			this->panelAccountControls->Controls->Add(this->btnAccDelete);
			this->panelAccountControls->Controls->Add(this->btnAccAdd);
			this->panelAccountControls->Location = System::Drawing::Point(0, 0);
			this->panelAccountControls->Margin = System::Windows::Forms::Padding(2);
			this->panelAccountControls->Name = L"panelAccountControls";
			this->panelAccountControls->Size = System::Drawing::Size(377, 73);
			this->panelAccountControls->TabIndex = 12;
			// 
			// btnAccModify
			// 
			this->btnAccModify->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccModify->Location = System::Drawing::Point(220, 13);
			this->btnAccModify->Margin = System::Windows::Forms::Padding(2);
			this->btnAccModify->Name = L"btnAccModify";
			this->btnAccModify->Size = System::Drawing::Size(91, 45);
			this->btnAccModify->TabIndex = 2;
			this->btnAccModify->Text = L"Modify";
			this->btnAccModify->UseVisualStyleBackColor = true;
			this->btnAccModify->Click += gcnew System::EventHandler(this, &ManagementForm::btnAccModify_Click);
			// 
			// btnAccDelete
			// 
			this->btnAccDelete->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccDelete->Location = System::Drawing::Point(110, 13);
			this->btnAccDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnAccDelete->Name = L"btnAccDelete";
			this->btnAccDelete->Size = System::Drawing::Size(95, 45);
			this->btnAccDelete->TabIndex = 1;
			this->btnAccDelete->Text = L"Delete";
			this->btnAccDelete->UseVisualStyleBackColor = true;
			this->btnAccDelete->Click += gcnew System::EventHandler(this, &ManagementForm::btnAccDelete_Click);
			// 
			// btnAccAdd
			// 
			this->btnAccAdd->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccAdd->Location = System::Drawing::Point(13, 12);
			this->btnAccAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAccAdd->Name = L"btnAccAdd";
			this->btnAccAdd->Size = System::Drawing::Size(83, 45);
			this->btnAccAdd->TabIndex = 0;
			this->btnAccAdd->Text = L"Add";
			this->btnAccAdd->UseVisualStyleBackColor = true;
			this->btnAccAdd->Click += gcnew System::EventHandler(this, &ManagementForm::btnAccAdd_Click);
			// 
			// panelAccSelectView
			// 
			this->panelAccSelectView->Controls->Add(this->panel1);
			this->panelAccSelectView->Controls->Add(this->panelAccType);
			this->panelAccSelectView->Controls->Add(this->panelAccDisplayName);
			this->panelAccSelectView->Controls->Add(this->panelAccName);
			this->panelAccSelectView->Location = System::Drawing::Point(609, 78);
			this->panelAccSelectView->Margin = System::Windows::Forms::Padding(2);
			this->panelAccSelectView->Name = L"panelAccSelectView";
			this->panelAccSelectView->Size = System::Drawing::Size(491, 347);
			this->panelAccSelectView->TabIndex = 8;
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panel1->Controls->Add(this->tbAccID);
			this->panel1->Controls->Add(this->lblAccID);
			this->panel1->Location = System::Drawing::Point(12, 18);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(475, 57);
			this->panel1->TabIndex = 7;
			// 
			// tbAccID
			// 
			this->tbAccID->Enabled = false;
			this->tbAccID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAccID->Location = System::Drawing::Point(179, 13);
			this->tbAccID->Margin = System::Windows::Forms::Padding(2);
			this->tbAccID->Multiline = true;
			this->tbAccID->Name = L"tbAccID";
			this->tbAccID->Size = System::Drawing::Size(284, 29);
			this->tbAccID->TabIndex = 6;
			// 
			// lblAccID
			// 
			this->lblAccID->AutoSize = true;
			this->lblAccID->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAccID->Location = System::Drawing::Point(8, 13);
			this->lblAccID->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAccID->Name = L"lblAccID";
			this->lblAccID->Size = System::Drawing::Size(128, 29);
			this->lblAccID->TabIndex = 0;
			this->lblAccID->Text = L"Account ID:";
			// 
			// panelAccType
			// 
			this->panelAccType->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelAccType->Controls->Add(this->cbAccType);
			this->panelAccType->Controls->Add(this->lblAccType);
			this->panelAccType->Location = System::Drawing::Point(12, 257);
			this->panelAccType->Margin = System::Windows::Forms::Padding(2);
			this->panelAccType->Name = L"panelAccType";
			this->panelAccType->Size = System::Drawing::Size(475, 56);
			this->panelAccType->TabIndex = 8;
			// 
			// cbAccType
			// 
			this->cbAccType->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbAccType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbAccType->Enabled = false;
			this->cbAccType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbAccType->FormattingEnabled = true;
			this->cbAccType->Location = System::Drawing::Point(179, 13);
			this->cbAccType->Name = L"cbAccType";
			this->cbAccType->Size = System::Drawing::Size(284, 28);
			this->cbAccType->TabIndex = 1;
			// 
			// lblAccType
			// 
			this->lblAccType->AutoSize = true;
			this->lblAccType->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAccType->Location = System::Drawing::Point(2, 13);
			this->lblAccType->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAccType->Name = L"lblAccType";
			this->lblAccType->Size = System::Drawing::Size(154, 29);
			this->lblAccType->TabIndex = 0;
			this->lblAccType->Text = L"Account Type:";
			// 
			// panelAccDisplayName
			// 
			this->panelAccDisplayName->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelAccDisplayName->Controls->Add(this->tbAccDisplayName);
			this->panelAccDisplayName->Controls->Add(this->lblDisplayName);
			this->panelAccDisplayName->Location = System::Drawing::Point(12, 175);
			this->panelAccDisplayName->Margin = System::Windows::Forms::Padding(2);
			this->panelAccDisplayName->Name = L"panelAccDisplayName";
			this->panelAccDisplayName->Size = System::Drawing::Size(475, 57);
			this->panelAccDisplayName->TabIndex = 7;
			// 
			// tbAccDisplayName
			// 
			this->tbAccDisplayName->Enabled = false;
			this->tbAccDisplayName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAccDisplayName->Location = System::Drawing::Point(179, 13);
			this->tbAccDisplayName->Margin = System::Windows::Forms::Padding(2);
			this->tbAccDisplayName->Multiline = true;
			this->tbAccDisplayName->Name = L"tbAccDisplayName";
			this->tbAccDisplayName->Size = System::Drawing::Size(284, 29);
			this->tbAccDisplayName->TabIndex = 6;
			// 
			// lblDisplayName
			// 
			this->lblDisplayName->AutoSize = true;
			this->lblDisplayName->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDisplayName->Location = System::Drawing::Point(2, 13);
			this->lblDisplayName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblDisplayName->Name = L"lblDisplayName";
			this->lblDisplayName->Size = System::Drawing::Size(158, 29);
			this->lblDisplayName->TabIndex = 0;
			this->lblDisplayName->Text = L"Display Name:";
			// 
			// panelAccName
			// 
			this->panelAccName->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelAccName->Controls->Add(this->tbAccName);
			this->panelAccName->Controls->Add(this->lblAccName);
			this->panelAccName->Location = System::Drawing::Point(12, 97);
			this->panelAccName->Margin = System::Windows::Forms::Padding(2);
			this->panelAccName->Name = L"panelAccName";
			this->panelAccName->Size = System::Drawing::Size(475, 57);
			this->panelAccName->TabIndex = 4;
			// 
			// tbAccName
			// 
			this->tbAccName->Enabled = false;
			this->tbAccName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAccName->Location = System::Drawing::Point(179, 13);
			this->tbAccName->Margin = System::Windows::Forms::Padding(2);
			this->tbAccName->Multiline = true;
			this->tbAccName->Name = L"tbAccName";
			this->tbAccName->Size = System::Drawing::Size(284, 29);
			this->tbAccName->TabIndex = 6;
			// 
			// lblAccName
			// 
			this->lblAccName->AutoSize = true;
			this->lblAccName->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAccName->Location = System::Drawing::Point(8, 13);
			this->lblAccName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAccName->Name = L"lblAccName";
			this->lblAccName->Size = System::Drawing::Size(167, 29);
			this->lblAccName->TabIndex = 0;
			this->lblAccName->Text = L"Account Name:";
			// 
			// tabPageTable
			// 
			this->tabPageTable->Controls->Add(this->tbTableSearch);
			this->tabPageTable->Controls->Add(this->btnTableSearch);
			this->tabPageTable->Controls->Add(this->panelTableControls);
			this->tabPageTable->Controls->Add(this->panelTableList);
			this->tabPageTable->Controls->Add(this->panelTableSelectView);
			this->tabPageTable->Location = System::Drawing::Point(4, 22);
			this->tabPageTable->Margin = System::Windows::Forms::Padding(2);
			this->tabPageTable->Name = L"tabPageTable";
			this->tabPageTable->Padding = System::Windows::Forms::Padding(2);
			this->tabPageTable->Size = System::Drawing::Size(1100, 425);
			this->tabPageTable->TabIndex = 3;
			this->tabPageTable->Text = L"Table";
			this->tabPageTable->UseVisualStyleBackColor = true;
			// 
			// tbTableSearch
			// 
			this->tbTableSearch->Location = System::Drawing::Point(648, 21);
			this->tbTableSearch->Margin = System::Windows::Forms::Padding(2);
			this->tbTableSearch->Multiline = true;
			this->tbTableSearch->Name = L"tbTableSearch";
			this->tbTableSearch->Size = System::Drawing::Size(351, 41);
			this->tbTableSearch->TabIndex = 14;
			// 
			// btnTableSearch
			// 
			this->btnTableSearch->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTableSearch->Location = System::Drawing::Point(1003, 16);
			this->btnTableSearch->Margin = System::Windows::Forms::Padding(2);
			this->btnTableSearch->Name = L"btnTableSearch";
			this->btnTableSearch->Size = System::Drawing::Size(90, 53);
			this->btnTableSearch->TabIndex = 13;
			this->btnTableSearch->Text = L"Search";
			this->btnTableSearch->UseVisualStyleBackColor = true;
			// 
			// panelTableControls
			// 
			this->panelTableControls->Controls->Add(this->btnTableModify);
			this->panelTableControls->Controls->Add(this->btnTableDelete);
			this->panelTableControls->Controls->Add(this->btnTableAdd);
			this->panelTableControls->Location = System::Drawing::Point(0, 0);
			this->panelTableControls->Margin = System::Windows::Forms::Padding(2);
			this->panelTableControls->Name = L"panelTableControls";
			this->panelTableControls->Size = System::Drawing::Size(382, 74);
			this->panelTableControls->TabIndex = 12;
			// 
			// btnTableModify
			// 
			this->btnTableModify->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTableModify->Location = System::Drawing::Point(225, 13);
			this->btnTableModify->Margin = System::Windows::Forms::Padding(2);
			this->btnTableModify->Name = L"btnTableModify";
			this->btnTableModify->Size = System::Drawing::Size(91, 45);
			this->btnTableModify->TabIndex = 2;
			this->btnTableModify->Text = L"Modify";
			this->btnTableModify->UseVisualStyleBackColor = true;
			// 
			// btnTableDelete
			// 
			this->btnTableDelete->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTableDelete->Location = System::Drawing::Point(110, 13);
			this->btnTableDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnTableDelete->Name = L"btnTableDelete";
			this->btnTableDelete->Size = System::Drawing::Size(93, 45);
			this->btnTableDelete->TabIndex = 1;
			this->btnTableDelete->Text = L"Delete";
			this->btnTableDelete->UseVisualStyleBackColor = true;
			// 
			// btnTableAdd
			// 
			this->btnTableAdd->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTableAdd->Location = System::Drawing::Point(12, 13);
			this->btnTableAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnTableAdd->Name = L"btnTableAdd";
			this->btnTableAdd->Size = System::Drawing::Size(83, 45);
			this->btnTableAdd->TabIndex = 0;
			this->btnTableAdd->Text = L"Add";
			this->btnTableAdd->UseVisualStyleBackColor = true;
			// 
			// panelTableList
			// 
			this->panelTableList->Controls->Add(this->dgvTableList);
			this->panelTableList->Location = System::Drawing::Point(0, 78);
			this->panelTableList->Margin = System::Windows::Forms::Padding(2);
			this->panelTableList->Name = L"panelTableList";
			this->panelTableList->Size = System::Drawing::Size(634, 347);
			this->panelTableList->TabIndex = 4;
			// 
			// dgvTableList
			// 
			this->dgvTableList->AllowUserToAddRows = false;
			this->dgvTableList->AllowUserToDeleteRows = false;
			this->dgvTableList->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvTableList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTableList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvTableList->Location = System::Drawing::Point(0, 0);
			this->dgvTableList->Margin = System::Windows::Forms::Padding(2);
			this->dgvTableList->MultiSelect = false;
			this->dgvTableList->Name = L"dgvTableList";
			this->dgvTableList->ReadOnly = true;
			this->dgvTableList->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dgvTableList->RowTemplate->Height = 24;
			this->dgvTableList->Size = System::Drawing::Size(634, 347);
			this->dgvTableList->TabIndex = 0;
			// 
			// panelTableSelectView
			// 
			this->panelTableSelectView->Controls->Add(this->panelTableStatus);
			this->panelTableSelectView->Controls->Add(this->panelTableName);
			this->panelTableSelectView->Controls->Add(this->panelTableId);
			this->panelTableSelectView->Location = System::Drawing::Point(638, 78);
			this->panelTableSelectView->Margin = System::Windows::Forms::Padding(2);
			this->panelTableSelectView->Name = L"panelTableSelectView";
			this->panelTableSelectView->Size = System::Drawing::Size(462, 347);
			this->panelTableSelectView->TabIndex = 5;
			// 
			// panelTableStatus
			// 
			this->panelTableStatus->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelTableStatus->Controls->Add(this->tbTableStatus);
			this->panelTableStatus->Controls->Add(this->lblTableStatus);
			this->panelTableStatus->Location = System::Drawing::Point(10, 196);
			this->panelTableStatus->Margin = System::Windows::Forms::Padding(2);
			this->panelTableStatus->Name = L"panelTableStatus";
			this->panelTableStatus->Size = System::Drawing::Size(445, 57);
			this->panelTableStatus->TabIndex = 8;
			// 
			// tbTableStatus
			// 
			this->tbTableStatus->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tbTableStatus->Location = System::Drawing::Point(156, 12);
			this->tbTableStatus->Margin = System::Windows::Forms::Padding(2);
			this->tbTableStatus->Multiline = true;
			this->tbTableStatus->Name = L"tbTableStatus";
			this->tbTableStatus->Size = System::Drawing::Size(279, 29);
			this->tbTableStatus->TabIndex = 7;
			// 
			// lblTableStatus
			// 
			this->lblTableStatus->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblTableStatus->AutoSize = true;
			this->lblTableStatus->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTableStatus->Location = System::Drawing::Point(14, 12);
			this->lblTableStatus->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTableStatus->Name = L"lblTableStatus";
			this->lblTableStatus->Size = System::Drawing::Size(82, 29);
			this->lblTableStatus->TabIndex = 0;
			this->lblTableStatus->Text = L"Status:";
			// 
			// panelTableName
			// 
			this->panelTableName->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelTableName->Controls->Add(this->tbTableName);
			this->panelTableName->Controls->Add(this->lblTableName);
			this->panelTableName->Location = System::Drawing::Point(10, 106);
			this->panelTableName->Margin = System::Windows::Forms::Padding(2);
			this->panelTableName->Name = L"panelTableName";
			this->panelTableName->Size = System::Drawing::Size(445, 57);
			this->panelTableName->TabIndex = 7;
			// 
			// tbTableName
			// 
			this->tbTableName->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tbTableName->Location = System::Drawing::Point(156, 12);
			this->tbTableName->Margin = System::Windows::Forms::Padding(2);
			this->tbTableName->Multiline = true;
			this->tbTableName->Name = L"tbTableName";
			this->tbTableName->Size = System::Drawing::Size(279, 29);
			this->tbTableName->TabIndex = 6;
			// 
			// lblTableName
			// 
			this->lblTableName->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblTableName->AutoSize = true;
			this->lblTableName->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTableName->Location = System::Drawing::Point(14, 12);
			this->lblTableName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTableName->Name = L"lblTableName";
			this->lblTableName->Size = System::Drawing::Size(138, 29);
			this->lblTableName->TabIndex = 0;
			this->lblTableName->Text = L"Table Name:";
			// 
			// panelTableId
			// 
			this->panelTableId->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelTableId->Controls->Add(this->tbTableID);
			this->panelTableId->Controls->Add(this->lblTableId);
			this->panelTableId->Location = System::Drawing::Point(10, 22);
			this->panelTableId->Margin = System::Windows::Forms::Padding(2);
			this->panelTableId->Name = L"panelTableId";
			this->panelTableId->Size = System::Drawing::Size(445, 57);
			this->panelTableId->TabIndex = 4;
			// 
			// tbTableID
			// 
			this->tbTableID->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tbTableID->Enabled = false;
			this->tbTableID->Location = System::Drawing::Point(156, 12);
			this->tbTableID->Margin = System::Windows::Forms::Padding(2);
			this->tbTableID->Multiline = true;
			this->tbTableID->Name = L"tbTableID";
			this->tbTableID->Size = System::Drawing::Size(279, 29);
			this->tbTableID->TabIndex = 6;
			// 
			// lblTableId
			// 
			this->lblTableId->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblTableId->AutoSize = true;
			this->lblTableId->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTableId->Location = System::Drawing::Point(14, 12);
			this->lblTableId->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTableId->Name = L"lblTableId";
			this->lblTableId->Size = System::Drawing::Size(41, 29);
			this->lblTableId->TabIndex = 0;
			this->lblTableId->Text = L"ID:";
			// 
			// tabPageFood
			// 
			this->tabPageFood->Controls->Add(this->panelFoodControls);
			this->tabPageFood->Controls->Add(this->panelFoodSearch);
			this->tabPageFood->Controls->Add(this->panelFoodSelectView);
			this->tabPageFood->Controls->Add(this->panelFoodList);
			this->tabPageFood->Location = System::Drawing::Point(4, 22);
			this->tabPageFood->Margin = System::Windows::Forms::Padding(2);
			this->tabPageFood->Name = L"tabPageFood";
			this->tabPageFood->Padding = System::Windows::Forms::Padding(2);
			this->tabPageFood->Size = System::Drawing::Size(1100, 425);
			this->tabPageFood->TabIndex = 1;
			this->tabPageFood->Text = L"Food";
			this->tabPageFood->UseVisualStyleBackColor = true;
			// 
			// panelFoodControls
			// 
			this->panelFoodControls->Controls->Add(this->btnFoodModify);
			this->panelFoodControls->Controls->Add(this->btnFoodDelete);
			this->panelFoodControls->Controls->Add(this->btnFoodAdd);
			this->panelFoodControls->Location = System::Drawing::Point(0, 0);
			this->panelFoodControls->Margin = System::Windows::Forms::Padding(2);
			this->panelFoodControls->Name = L"panelFoodControls";
			this->panelFoodControls->Size = System::Drawing::Size(376, 66);
			this->panelFoodControls->TabIndex = 12;
			// 
			// btnFoodModify
			// 
			this->btnFoodModify->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFoodModify->Location = System::Drawing::Point(218, 13);
			this->btnFoodModify->Margin = System::Windows::Forms::Padding(2);
			this->btnFoodModify->Name = L"btnFoodModify";
			this->btnFoodModify->Size = System::Drawing::Size(94, 45);
			this->btnFoodModify->TabIndex = 2;
			this->btnFoodModify->Text = L"Modify";
			this->btnFoodModify->UseVisualStyleBackColor = true;
			this->btnFoodModify->Click += gcnew System::EventHandler(this, &ManagementForm::btnFoodModify_Click);
			// 
			// btnFoodDelete
			// 
			this->btnFoodDelete->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFoodDelete->Location = System::Drawing::Point(110, 13);
			this->btnFoodDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnFoodDelete->Name = L"btnFoodDelete";
			this->btnFoodDelete->Size = System::Drawing::Size(91, 45);
			this->btnFoodDelete->TabIndex = 1;
			this->btnFoodDelete->Text = L"Delete";
			this->btnFoodDelete->UseVisualStyleBackColor = true;
			this->btnFoodDelete->Click += gcnew System::EventHandler(this, &ManagementForm::btnFoodDelete_Click);
			// 
			// btnFoodAdd
			// 
			this->btnFoodAdd->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFoodAdd->Location = System::Drawing::Point(13, 13);
			this->btnFoodAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnFoodAdd->Name = L"btnFoodAdd";
			this->btnFoodAdd->Size = System::Drawing::Size(83, 45);
			this->btnFoodAdd->TabIndex = 0;
			this->btnFoodAdd->Text = L"Add";
			this->btnFoodAdd->UseVisualStyleBackColor = true;
			this->btnFoodAdd->Click += gcnew System::EventHandler(this, &ManagementForm::btnFoodAdd_Click);
			// 
			// panelFoodSearch
			// 
			this->panelFoodSearch->Controls->Add(this->tbFoodSearch);
			this->panelFoodSearch->Controls->Add(this->btnFoodSearch);
			this->panelFoodSearch->Location = System::Drawing::Point(636, 0);
			this->panelFoodSearch->Margin = System::Windows::Forms::Padding(2);
			this->panelFoodSearch->Name = L"panelFoodSearch";
			this->panelFoodSearch->Size = System::Drawing::Size(464, 66);
			this->panelFoodSearch->TabIndex = 3;
			// 
			// tbFoodSearch
			// 
			this->tbFoodSearch->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->tbFoodSearch->Location = System::Drawing::Point(15, 13);
			this->tbFoodSearch->Margin = System::Windows::Forms::Padding(2);
			this->tbFoodSearch->Multiline = true;
			this->tbFoodSearch->Name = L"tbFoodSearch";
			this->tbFoodSearch->Size = System::Drawing::Size(345, 41);
			this->tbFoodSearch->TabIndex = 5;
			// 
			// btnFoodSearch
			// 
			this->btnFoodSearch->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->btnFoodSearch->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFoodSearch->Location = System::Drawing::Point(364, 5);
			this->btnFoodSearch->Margin = System::Windows::Forms::Padding(2);
			this->btnFoodSearch->Name = L"btnFoodSearch";
			this->btnFoodSearch->Size = System::Drawing::Size(90, 53);
			this->btnFoodSearch->TabIndex = 4;
			this->btnFoodSearch->Text = L"Search";
			this->btnFoodSearch->UseVisualStyleBackColor = true;
			// 
			// panelFoodSelectView
			// 
			this->panelFoodSelectView->Controls->Add(this->panelFoodPrice);
			this->panelFoodSelectView->Controls->Add(this->panelCategory);
			this->panelFoodSelectView->Controls->Add(this->panelDishName);
			this->panelFoodSelectView->Controls->Add(this->panelFoodID);
			this->panelFoodSelectView->Location = System::Drawing::Point(636, 70);
			this->panelFoodSelectView->Margin = System::Windows::Forms::Padding(2);
			this->panelFoodSelectView->Name = L"panelFoodSelectView";
			this->panelFoodSelectView->Size = System::Drawing::Size(464, 355);
			this->panelFoodSelectView->TabIndex = 1;
			// 
			// panelFoodPrice
			// 
			this->panelFoodPrice->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelFoodPrice->Controls->Add(this->numUDFoodPrice);
			this->panelFoodPrice->Controls->Add(this->lblPrice);
			this->panelFoodPrice->Location = System::Drawing::Point(15, 251);
			this->panelFoodPrice->Margin = System::Windows::Forms::Padding(2);
			this->panelFoodPrice->Name = L"panelFoodPrice";
			this->panelFoodPrice->Size = System::Drawing::Size(442, 57);
			this->panelFoodPrice->TabIndex = 7;
			// 
			// numUDFoodPrice
			// 
			this->numUDFoodPrice->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->numUDFoodPrice->DecimalPlaces = 2;
			this->numUDFoodPrice->Enabled = false;
			this->numUDFoodPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numUDFoodPrice->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numUDFoodPrice->Location = System::Drawing::Point(149, 16);
			this->numUDFoodPrice->Margin = System::Windows::Forms::Padding(2);
			this->numUDFoodPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->numUDFoodPrice->Name = L"numUDFoodPrice";
			this->numUDFoodPrice->Size = System::Drawing::Size(283, 32);
			this->numUDFoodPrice->TabIndex = 1;
			this->numUDFoodPrice->ThousandsSeparator = true;
			// 
			// lblPrice
			// 
			this->lblPrice->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblPrice->AutoSize = true;
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrice->Location = System::Drawing::Point(4, 19);
			this->lblPrice->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(70, 29);
			this->lblPrice->TabIndex = 0;
			this->lblPrice->Text = L"Price:";
			// 
			// panelCategory
			// 
			this->panelCategory->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelCategory->Controls->Add(this->cbFoodCategory);
			this->panelCategory->Controls->Add(this->lblCategory);
			this->panelCategory->Location = System::Drawing::Point(15, 174);
			this->panelCategory->Margin = System::Windows::Forms::Padding(2);
			this->panelCategory->Name = L"panelCategory";
			this->panelCategory->Size = System::Drawing::Size(442, 57);
			this->panelCategory->TabIndex = 7;
			// 
			// cbFoodCategory
			// 
			this->cbFoodCategory->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->cbFoodCategory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbFoodCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbFoodCategory->Enabled = false;
			this->cbFoodCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbFoodCategory->FormattingEnabled = true;
			this->cbFoodCategory->Location = System::Drawing::Point(146, 16);
			this->cbFoodCategory->Margin = System::Windows::Forms::Padding(2);
			this->cbFoodCategory->Name = L"cbFoodCategory";
			this->cbFoodCategory->Size = System::Drawing::Size(284, 30);
			this->cbFoodCategory->TabIndex = 8;
			// 
			// lblCategory
			// 
			this->lblCategory->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblCategory->AutoSize = true;
			this->lblCategory->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCategory->Location = System::Drawing::Point(4, 14);
			this->lblCategory->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCategory->Name = L"lblCategory";
			this->lblCategory->Size = System::Drawing::Size(109, 29);
			this->lblCategory->TabIndex = 0;
			this->lblCategory->Text = L"Category:";
			// 
			// panelDishName
			// 
			this->panelDishName->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelDishName->Controls->Add(this->tbFoodDishName);
			this->panelDishName->Controls->Add(this->lblFoodDish);
			this->panelDishName->Location = System::Drawing::Point(15, 95);
			this->panelDishName->Margin = System::Windows::Forms::Padding(2);
			this->panelDishName->Name = L"panelDishName";
			this->panelDishName->Size = System::Drawing::Size(442, 62);
			this->panelDishName->TabIndex = 7;
			// 
			// tbFoodDishName
			// 
			this->tbFoodDishName->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tbFoodDishName->Enabled = false;
			this->tbFoodDishName->Location = System::Drawing::Point(146, 13);
			this->tbFoodDishName->Margin = System::Windows::Forms::Padding(2);
			this->tbFoodDishName->Multiline = true;
			this->tbFoodDishName->Name = L"tbFoodDishName";
			this->tbFoodDishName->Size = System::Drawing::Size(284, 29);
			this->tbFoodDishName->TabIndex = 6;
			// 
			// lblFoodDish
			// 
			this->lblFoodDish->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblFoodDish->AutoSize = true;
			this->lblFoodDish->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFoodDish->Location = System::Drawing::Point(4, 13);
			this->lblFoodDish->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblFoodDish->Name = L"lblFoodDish";
			this->lblFoodDish->Size = System::Drawing::Size(129, 29);
			this->lblFoodDish->TabIndex = 0;
			this->lblFoodDish->Text = L"Dish Name:";
			// 
			// panelFoodID
			// 
			this->panelFoodID->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panelFoodID->Controls->Add(this->tbFoodId);
			this->panelFoodID->Controls->Add(this->lblFoodID);
			this->panelFoodID->Location = System::Drawing::Point(15, 17);
			this->panelFoodID->Margin = System::Windows::Forms::Padding(2);
			this->panelFoodID->Name = L"panelFoodID";
			this->panelFoodID->Size = System::Drawing::Size(442, 60);
			this->panelFoodID->TabIndex = 4;
			// 
			// tbFoodId
			// 
			this->tbFoodId->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tbFoodId->Enabled = false;
			this->tbFoodId->Location = System::Drawing::Point(146, 13);
			this->tbFoodId->Margin = System::Windows::Forms::Padding(2);
			this->tbFoodId->Multiline = true;
			this->tbFoodId->Name = L"tbFoodId";
			this->tbFoodId->Size = System::Drawing::Size(284, 29);
			this->tbFoodId->TabIndex = 6;
			// 
			// lblFoodID
			// 
			this->lblFoodID->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblFoodID->AutoSize = true;
			this->lblFoodID->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFoodID->Location = System::Drawing::Point(4, 13);
			this->lblFoodID->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblFoodID->Name = L"lblFoodID";
			this->lblFoodID->Size = System::Drawing::Size(41, 29);
			this->lblFoodID->TabIndex = 0;
			this->lblFoodID->Text = L"ID:";
			// 
			// panelFoodList
			// 
			this->panelFoodList->Controls->Add(this->dgvFoodList);
			this->panelFoodList->Location = System::Drawing::Point(0, 70);
			this->panelFoodList->Margin = System::Windows::Forms::Padding(2);
			this->panelFoodList->Name = L"panelFoodList";
			this->panelFoodList->Size = System::Drawing::Size(632, 355);
			this->panelFoodList->TabIndex = 0;
			// 
			// dgvFoodList
			// 
			this->dgvFoodList->AllowUserToAddRows = false;
			this->dgvFoodList->AllowUserToDeleteRows = false;
			this->dgvFoodList->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvFoodList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFoodList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvFoodList->Location = System::Drawing::Point(0, 0);
			this->dgvFoodList->Margin = System::Windows::Forms::Padding(2);
			this->dgvFoodList->Name = L"dgvFoodList";
			this->dgvFoodList->ReadOnly = true;
			this->dgvFoodList->RowHeadersWidth = 51;
			this->dgvFoodList->RowTemplate->Height = 24;
			this->dgvFoodList->Size = System::Drawing::Size(632, 355);
			this->dgvFoodList->TabIndex = 0;
			this->dgvFoodList->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ManagementForm::dgvFoodList_CellDoubleClick);
			// 
			// tabPageBill
			// 
			this->tabPageBill->Controls->Add(this->btnBillPrint);
			this->tabPageBill->Controls->Add(this->dgvBillData);
			this->tabPageBill->Controls->Add(this->panelBillHeader);
			this->tabPageBill->Location = System::Drawing::Point(4, 22);
			this->tabPageBill->Margin = System::Windows::Forms::Padding(2);
			this->tabPageBill->Name = L"tabPageBill";
			this->tabPageBill->Padding = System::Windows::Forms::Padding(2);
			this->tabPageBill->Size = System::Drawing::Size(1100, 425);
			this->tabPageBill->TabIndex = 0;
			this->tabPageBill->Text = L"Bill infor";
			this->tabPageBill->UseVisualStyleBackColor = true;
			// 
			// btnBillPrint
			// 
			this->btnBillPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBillPrint->Location = System::Drawing::Point(846, 310);
			this->btnBillPrint->Name = L"btnBillPrint";
			this->btnBillPrint->Size = System::Drawing::Size(133, 52);
			this->btnBillPrint->TabIndex = 2;
			this->btnBillPrint->Text = L"Print";
			this->btnBillPrint->UseVisualStyleBackColor = true;
			// 
			// dgvBillData
			// 
			this->dgvBillData->AllowUserToAddRows = false;
			this->dgvBillData->AllowUserToDeleteRows = false;
			this->dgvBillData->AllowUserToOrderColumns = true;
			this->dgvBillData->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvBillData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBillData->Location = System::Drawing::Point(7, 34);
			this->dgvBillData->Margin = System::Windows::Forms::Padding(2);
			this->dgvBillData->MultiSelect = false;
			this->dgvBillData->Name = L"dgvBillData";
			this->dgvBillData->ReadOnly = true;
			this->dgvBillData->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dgvBillData->RowTemplate->Height = 24;
			this->dgvBillData->Size = System::Drawing::Size(1089, 259);
			this->dgvBillData->TabIndex = 0;
			// 
			// panelBillHeader
			// 
			this->panelBillHeader->Controls->Add(this->btnBillCheck);
			this->panelBillHeader->Controls->Add(this->dateTimePicker2);
			this->panelBillHeader->Controls->Add(this->dateTimePicker1);
			this->panelBillHeader->Location = System::Drawing::Point(0, 2);
			this->panelBillHeader->Margin = System::Windows::Forms::Padding(2);
			this->panelBillHeader->Name = L"panelBillHeader";
			this->panelBillHeader->Size = System::Drawing::Size(1108, 28);
			this->panelBillHeader->TabIndex = 1;
			// 
			// btnBillCheck
			// 
			this->btnBillCheck->BackColor = System::Drawing::Color::PowderBlue;
			this->btnBillCheck->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBillCheck->Location = System::Drawing::Point(449, 2);
			this->btnBillCheck->Margin = System::Windows::Forms::Padding(2);
			this->btnBillCheck->Name = L"btnBillCheck";
			this->btnBillCheck->Size = System::Drawing::Size(223, 24);
			this->btnBillCheck->TabIndex = 2;
			this->btnBillCheck->Text = L"Check";
			this->btnBillCheck->UseVisualStyleBackColor = false;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(717, 1);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(390, 20);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(4, 2);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(390, 20);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageBill);
			this->tabControl1->Controls->Add(this->tabPageFood);
			this->tabControl1->Controls->Add(this->tabPageTable);
			this->tabControl1->Controls->Add(this->tabPageAccount);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1108, 451);
			this->tabControl1->TabIndex = 0;
			// 
			// ManagementForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1108, 451);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ManagementForm";
			this->Text = L"Management";
			this->Load += gcnew System::EventHandler(this, &ManagementForm::ManagementForm_Load);
			this->tabPageAccount->ResumeLayout(false);
			this->tabPageAccount->PerformLayout();
			this->panelAccountList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAccList))->EndInit();
			this->panelAccountControls->ResumeLayout(false);
			this->panelAccSelectView->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelAccType->ResumeLayout(false);
			this->panelAccType->PerformLayout();
			this->panelAccDisplayName->ResumeLayout(false);
			this->panelAccDisplayName->PerformLayout();
			this->panelAccName->ResumeLayout(false);
			this->panelAccName->PerformLayout();
			this->tabPageTable->ResumeLayout(false);
			this->tabPageTable->PerformLayout();
			this->panelTableControls->ResumeLayout(false);
			this->panelTableList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTableList))->EndInit();
			this->panelTableSelectView->ResumeLayout(false);
			this->panelTableStatus->ResumeLayout(false);
			this->panelTableStatus->PerformLayout();
			this->panelTableName->ResumeLayout(false);
			this->panelTableName->PerformLayout();
			this->panelTableId->ResumeLayout(false);
			this->panelTableId->PerformLayout();
			this->tabPageFood->ResumeLayout(false);
			this->panelFoodControls->ResumeLayout(false);
			this->panelFoodSearch->ResumeLayout(false);
			this->panelFoodSearch->PerformLayout();
			this->panelFoodSelectView->ResumeLayout(false);
			this->panelFoodPrice->ResumeLayout(false);
			this->panelFoodPrice->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUDFoodPrice))->EndInit();
			this->panelCategory->ResumeLayout(false);
			this->panelCategory->PerformLayout();
			this->panelDishName->ResumeLayout(false);
			this->panelDishName->PerformLayout();
			this->panelFoodID->ResumeLayout(false);
			this->panelFoodID->PerformLayout();
			this->panelFoodList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFoodList))->EndInit();
			this->tabPageBill->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBillData))->EndInit();
			this->panelBillHeader->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		User^ user = nullptr;
		int foodAddCount = 0, accAddCount = 0;
		int foodModifyCount = 0, accModifyCount = 0;


		void updateFoodList() {
			String^ tableFoodQuery = "SELECT f.id AS[ID], f.[name] AS[Liquour Name], fc.[name] as Category, f.price AS Price FROM Food f INNER JOIN FoodCategory fc ON f.idCategory = fc.id;";
			updateDataGridView(tableFoodQuery, dgvFoodList); 
		}

		void updateAccountList() {
			String^ tableAccountQuery = "SELECT ID AS [User ID], Username, DisplayName, UserType FROM dbo.Account;";
			updateDataGridView(tableAccountQuery, dgvAccList);
		}

		private: System::Void ManagementForm_Load(System::Object^ sender, System::EventArgs^ e) {
			String^ tableTableQuery = "SELECT ";

			updateFoodList();
			updateAccountList();
			// Fill the comboboxes with values from the database
			re_populateComboBox(cbFoodCategory, "name", "FoodCategory");
			re_populateComboBox(cbAccType, "UserType", "Account");
		}
		private: System::Void dgvFoodList_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			int idValue = Convert::ToInt32(dgvFoodList->CurrentRow->Cells[0]->Value);

			// DataGridViewCellCollection^ rows = dgvFoodList->Rows[idValue - 1]->Cells;
			DataGridViewCellCollection^ rows = dgvFoodList->CurrentRow->Cells;

			tbFoodId->Text = rows[0]->Value->ToString();
			tbFoodDishName->Text = rows[1]->Value->ToString();
			cbFoodCategory->Text = rows[2]->Value->ToString();
			numUDFoodPrice->Value = Convert::ToDecimal(rows[3]->Value);
		}
		private: System::Void btnFoodAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			foodAddCount++;
			if (foodAddCount == 1) {
				// Lets assume they are adding something new.
				tbFoodId->Clear();
				tbFoodDishName->Clear();
				cbFoodCategory->SelectedIndex = -1;
				numUDFoodPrice->ResetText();

				tbFoodId->Text = "-";
				tbFoodDishName->Enabled = true;
				cbFoodCategory->Enabled = true;
				numUDFoodPrice->Enabled = true;
			}
			else if (foodAddCount == 2) {
				String^ name = tbFoodDishName->Text->Trim();
				//int categoryID = getValueFromQuery("SELECT id FROM FoodCategory WHERE [name] = '" + name + "'");
				int categoryID = cbFoodCategory->SelectedIndex;
				double price = Convert::ToDouble(numUDFoodPrice->Value);

				// meets min
				if ((name->Length <= 2) && (cbFoodCategory->SelectedIndex != -1)) {
					MessageBox::Show("Please fill details: Food name length must be greater than 2");
					foodAddCount = 1;
					return;
				}
				// not duplicate
				if (check_existence("SELECT * FROM Food WHERE name='" + name + "'")) {
					MessageBox::Show("Duplicates not allowed!");
					foodAddCount = 1;
					return;
				}

				// add details to database
				try {
					SqlConnection^ connection = StartConnection();

					// Send the query
					SqlCommand^ command = gcnew SqlCommand();
					command->Connection = connection;
					command->CommandText = "INSERT INTO Food ([name], [idCategory], [price]) "
						" VALUES (@Name, @CategoryID, @Price);";
					command->Parameters->AddWithValue("@Name", name);
					command->Parameters->AddWithValue("@CategoryID", categoryID);
					command->Parameters->AddWithValue("@Price", price);

					command->ExecuteNonQuery();
					MessageBox::Show("Food Successfully ADDED!");
					connection->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message, "Add Food Dialog");
					foodAddCount = 1;
					return;
				}

				// Disable controls now
				tbFoodDishName->Enabled = false;
				cbFoodCategory->Enabled = false;
				numUDFoodPrice->Enabled = false;

				// Refresh Food List
				updateFoodList();
			}
			
		}

		private: System::Void btnFoodDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			//
		}

		private: System::Void btnFoodModify_Click(System::Object^ sender, System::EventArgs^ e) {
			btnFoodAdd->Enabled    = false;
			btnFoodDelete->Enabled = false;
			dgvFoodList->Enabled   = false;
			btnFoodSearch->Enabled = false;

			DataGridViewCellCollection^ rows = dgvFoodList->CurrentRow->Cells; 



			// When Done
			btnFoodAdd->Enabled    = true;
			btnFoodDelete->Enabled = true;
			dgvFoodList->Enabled   = true;
			btnFoodSearch->Enabled = true;
		}

		private: System::Void dgvAccList_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			//int idValue = Convert::ToInt32(dgvFoodList->CurrentRow->Cells[0]->Value);

			// DataGridViewCellCollection^ rows = dgvAccList->Rows[idValue - 1]->Cells;
			DataGridViewCellCollection^ rows = dgvAccList->CurrentRow->Cells;

			tbAccID->Text = rows[0]->Value->ToString();
			tbAccName->Text = rows[1]->Value->ToString();
			tbAccDisplayName->Text = rows[2]->Value->ToString();
			cbAccType->Text = rows[3]->Value->ToString();
		}

		private: System::Void btnAccAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			accAddCount++;
			if (accAddCount == 1) {
				// Lets assume they are adding something new.
				tbAccID->Clear();
				tbAccName->Clear();
				tbAccDisplayName->Clear();
				cbAccType->SelectedIndex = -1;

				tbAccID->Text = "-";
				tbAccName->Enabled        = true;
				tbAccDisplayName->Enabled = true;
				cbAccType->Enabled        = true;
			}
			else if (accAddCount == 2) {
				String^ username = tbAccName->Text->Trim(); 
				String^ displayName = tbAccDisplayName->Text->Trim();

				String^ usrType  = cbAccType->SelectedItem->ToString();
				
				// meets min
				if (username->Length <= 2) {
					MessageBox::Show("Please fill details: Username length must be greater than 2");
					accAddCount = 1;
					return;
				}
				// not duplicate
				if (check_existence("SELECT * FROM Account WHERE Username='" + username + "'")) {
					MessageBox::Show("Duplicates not allowed!");
					accAddCount = 1;
					return;
				}

				// add details to database
				try {
					SqlConnection^ connection = StartConnection();

					// Send the query
					SqlCommand^ command = gcnew SqlCommand();
					command->Connection = connection;
					command->CommandText = "INSERT INTO Account ([Username], [Password], [DisplayName], [UserType]) "
						" VALUES (@usrName, @PassPhrase, @dispName, @usrType);"; // User Image to be added later + password

					command->Parameters->AddWithValue("@usrName",    username);
					command->Parameters->AddWithValue("@PassPhrase", "321");
					command->Parameters->AddWithValue("@dispName",   displayName);
					command->Parameters->AddWithValue("@usrType",    usrType); 


					command->ExecuteNonQuery();
					MessageBox::Show("Account Successfully ADDED!");
					connection->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message, "Add Account Dialog");
					accAddCount = 1;
					return;
				}

				// Disable controls now
				tbAccName->Enabled        = false;
				tbAccDisplayName->Enabled = false;
				cbAccType->Enabled        = false;

				// Refresh Food List
				updateAccountList();
			}
		}

		private: System::Void btnAccDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			//
		}

		private: System::Void btnAccModify_Click(System::Object^ sender, System::EventArgs^ e) {
			accModifyCount++;
			DataGridViewCellCollection^ rows;

			if (accModifyCount < 1)
			{
				btnAccAdd->Enabled    = false;
				btnAccDelete->Enabled = false;
				dgvAccList->Enabled   = false;
				btnAccSearch->Enabled = false;
			
				tbAccName->Enabled			= true;
				tbAccDisplayName->Enabled	= true;
				cbAccType->Enabled			= true;
			
				rows = dgvAccList->CurrentRow->Cells;
			}


			// WORK ON IT!!! YOU CAN DO IT!

			// When done
			tbAccName->Enabled			= false;
			tbAccDisplayName->Enabled	= false;
			cbAccType->Enabled			= false;
			
			btnAccAdd->Enabled		= true;
			btnAccDelete->Enabled	= true;
			dgvAccList->Enabled		= true;
			btnAccSearch->Enabled	= true;
		}
			   
	};
}
