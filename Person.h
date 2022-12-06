#pragma once
#include <iostream>
#include "DataBase.h"
#include "Address.h"
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
	int getID_P();
	void setID_ADR(int IDA);
	void setFname(System::String^);
	void setLname(System::String^);
	void setBirth(System::String^);

	virtual System::String^ Find(System::String^ Fname, System::String^ Lname, System::String^ Birth);
	virtual System::Data::DataSet^ Returninfos();
	virtual void Person::create(System::String^ Fname, System::String^ Lname, System::String^ Birth, System::String^ number, System::String^ street, System::String^ info, System::String^ city, System::String^ postcode);
	virtual void Delete();
	virtual System::String^ Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR);
};