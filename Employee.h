#pragma once
#include "Person.h"
#include "DataBase.h"

ref class Employee : public Person
{
private:
	int	ID_E;
	System::String^ HireDate;
	DataServer::Database db;
public:
	Employee();
	Employee(int ID_E);
	void set_ID_E(int ID_E);
	virtual System::String^ Find(System::String^ Fname, System::String^ Lname, System::String^ Birth) override;
	virtual System::Data::DataSet^ Returninfos() override;
	virtual void create(System::String^ Fname, System::String^ Lname, System::String^ Birth, System::String^ number, System::String^ street, System::String^ info, System::String^ city, System::String^ postcode, System::String^ ID_superior, System::String^ hire_date)override;
	virtual void Delete() override;
	virtual System::String^ Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR, int ID_superior) override;
};