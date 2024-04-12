#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;


#ifndef _CONNECTION_H_
#define _CONNECTION_H_
// You dont have to include the connection string everytime, you will have to Open() connection
SqlConnection^ GetConnection();
// You dont have to include the connection string everytime, Open() will be run automatically
SqlConnection^ StartConnection();
// Closes the Connection!
void CloseConnection(SqlConnection^ connection);

#endif // !_CONNECTION_H_


/*
#ifndef WFDR
#define WFDR System::Windows::Forms::DialogResult
#endif // !WFDR
*/