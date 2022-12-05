#pragma once
#include "Person.h"
#include "DataBase.h"
#include <iostream>

ref class Client : public Person
{
private:
	DataServer::Database od;
	int	ID_C;
public:
	Client();
	Client(int ID_C);
	virtual System::String^ Find(System::String^ Fname, System::String^ Lname, System::String^ Birth) override;
	virtual System::Data::DataSet^ Returninfos() override;
	virtual System::String^ create(System::String^ Fname, System::String^ Lname, System::String^ Birth, int number, System::String^ city, System::String^ street, System::String^ info, System::String^ postcode)override;
	virtual System::String^ Delete(int) override;
	virtual System::String^ Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int number, System::String^ city, System::String^ street, System::String^ info, System::String^ postcode) override;
};