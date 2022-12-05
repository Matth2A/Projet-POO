#pragma once
#include <iostream>
#include "DataBase.h"
ref class Person
{
private:
	int ID_P;
	int ID_ADR;
	DataServer::Database db;
	System::String^ Fname;
	System::String^ Lname;
	System::String^ Birth;
public:
	Person();
	void setID_P(int IDP);
	void setID_ADR(int IDA);
	void setFname(System::String^);
	void setLname(System::String^);
	void setBirth(System::String^);

	virtual System::String^ Find(System::String^ Fname, System::String^ Lname, System::String^ Birth);
	virtual System::Data::DataSet^ Returninfos();
	virtual System::String^ create(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR);
	virtual System::String^ Delete();
	virtual System::String^ Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR);
};