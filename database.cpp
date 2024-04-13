#include "database.h"

SqlConnection^ GetConnection() {
	String^ connectionString = "Data Source=ATU-DEPCHAI\\SQLEXPRESS;Initial Catalog=CoffeeShop;Integrated Security=True;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	return connection;
}

SqlConnection^ StartConnection() {
	SqlConnection^ connection = GetConnection();
	connection->Open();
	return connection;
}

void CloseConnection(SqlConnection^ connection) {
	try {
		connection->Close();
	}
	catch (Exception^ ex) {
		System::Windows::Forms::MessageBox::Show("Error closing connection, check your internet connection or connection might be closed.\n" + ex->Message);
	}
}
