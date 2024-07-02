#pragma once
using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// We will now use a class, to temporary hold user data
public ref class User {
public:
	// Initializes the object with database values
	void InitializeVariables(int id);
	bool User::operator==(User^ other);
	User();
	int id;
	String^ username;
	String^ displayName;
	String^ password;
	String^ userType;
	System::Drawing::Image^ image = nullptr;//DateTime^ dateOfBirth;
};


// Clears a combobox and fills with table from the following table and field
void re_populateComboBox(ComboBox^ cbx, String^ field, String^ table);

// Clears a combobox and fills with data from the given query
void re_populateComboBox_FromQuery(ComboBox^ cbx, String^ query);

// Returns an int from a query...
int getValueFromQuery(String^ sqlQuery);

// Get value from a combobox
int getIDfromCombobox(ComboBox^ cbx, Label^ lblW, String^ table, String^ field);

// Returns bool if string is numeric
bool IsNumeric(String^ str);

// Returns bool if string only contains numeric digits
bool IsOnlyNumeric(String^ str);

void updateDataGridView(String^ queryCommand, DataGridView^ dgv);

bool check_existence(String^ sqlQuery);