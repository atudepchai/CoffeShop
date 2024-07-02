#include "MyHeaders.h"
#include "database.h"

// ============================== USER ==============
// This function initializes the attributes in the User class when a user logs in.
void User::InitializeVariables(int id) {
	try {
		SqlConnection^ connection = GetConnection();
		if (connection->State == ConnectionState::Closed) {
			connection->Open();
		}
		// Send the query
		String^ sqlQuery = "SELECT * FROM Account WHERE id=@ID;";
		SqlCommand command(sqlQuery, connection);
		command.Parameters->AddWithValue("@ID", id);

		// Read contents of database
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			/*user = gcnew User;*/
			this->username = reader->GetString(1);
			this->id = id;
			this->password = reader->GetString(2);
			this->displayName = reader->GetString(3);
			this->userType = reader->GetString(4);

			// Check if column 4 is not null
			if (!reader->IsDBNull(5))
			{
				// Retrieve the image data from the column
				array<unsigned char>^ imageData = safe_cast<array<unsigned char>^>(reader->GetValue(5));

				// Convert the image data to a System::Drawing::Image^ object
				using namespace System::IO;

				MemoryStream^ stream = gcnew MemoryStream(imageData);
				this->image = Image::FromStream(stream);
			}
			else this->image = nullptr;
			reader->Close();
		}
		else {
			MessageBox::Show("Cannot read data...");
		}
		connection->Close();
	}
	catch (Exception^ ex) { MessageBox::Show(ex->Message, "CoffeeShop: Login"); }
}

// this will help when you want to compare two objects of type 'User'
// for example say you have two 'User', a and b, but you want to know if its the same thing or not
// this will return True if its the same user just by looking at their usernames
inline bool User::operator==(User^ other) {
	bool _0 = (this->username == other->username);

	return _0;
}

User::User()
{
	username = "username";
	displayName = "User";
	password = "password";
	userType = "userType";
}

// ========================

extern inline void re_populateComboBox(ComboBox^ cbx, String^ field, String^ table) {
	try {
		SqlConnection^ connection = StartConnection();
		// clear the combobox items
		cbx->Items->Clear();

		// Send the query
		String^ sqlQuery = "SELECT " + field + " FROM " + table + "; ";
		SqlCommand command(sqlQuery, connection);

		// Read contents of database
		SqlDataReader^ reader = command.ExecuteReader();

		while (reader->Read()) {
			cbx->Items->Add(reader->GetString(0));
		}
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

extern inline void re_populateComboBox_FromQuery(ComboBox^ cbx, String^ query) {
	try {
		SqlConnection^ connection = StartConnection();
		// clear the combobox items
		cbx->Items->Clear();

		// Send the query
		SqlCommand command(query, connection);

		// Read contents of database
		SqlDataReader^ reader = command.ExecuteReader();

		while (reader->Read()) {
			cbx->Items->Add(reader->GetString(0));
		}
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

extern inline int getValueFromQuery(String^ sqlQuery) {
	try {
		SqlConnection^ connection = StartConnection();
		SqlCommand^ sqlCommand = gcnew SqlCommand();
		sqlCommand->Connection = connection;

		sqlCommand->CommandText = sqlQuery;
		SqlDataReader^ reader = sqlCommand->ExecuteReader();

		if (reader->Read()) {
			return reader->GetInt32(0);
		}
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return 0;
	}
	return 0;
}

extern inline int getIDfromCombobox(ComboBox^ cbx, Label^ lblW, String^ table, String^ field) {
	String^ CBname = cbx->Text->Trim();

	int value = cbx->FindStringExact(CBname);

	bool NameInCB = cbx->Items->Contains(CBname);
	bool NameIsNull = String::IsNullOrEmpty(CBname);

	if (NameIsNull)
	{
		lblW->Visible = true;
		return -5; // do nothing
	}
	else if (NameInCB) {

		value = cbx->FindStringExact(CBname) + 1; // to match database ID's
		return value;
	}
	else return -2;
}

extern inline bool check_existence(String^ sqlQuery) {
	try {
		SqlConnection^ connection = StartConnection();

		SqlCommand command(sqlQuery, connection);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) return true;
		else return false;
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occured: " + ex->Message);
		return false;
	}
}

extern inline bool IsNumeric(String^ str)
{
	int result;
	return Int32::TryParse(str, result);
}

extern inline bool IsOnlyNumeric(String^ str) {
	if (str->Length != 0) {
		for (int i = 0; i < str->Length; i++)
			return (IsNumeric(str[i].ToString()));
		return false;
	}
	else return false;
}


extern inline void updateDataGridView(String^ queryCommand, DataGridView^ dgv) {
	try {
		SqlConnection^ connection = StartConnection();
		SqlCommand^ command = gcnew SqlCommand(queryCommand, connection);
		SqlDataAdapter^ sda = gcnew SqlDataAdapter();
		sda->SelectCommand = command;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dgv->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

