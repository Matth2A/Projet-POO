#pragma once
#include "Person.h"

ref class Employee : public Person
{
private:
	int	ID_E;
	System::String^ HireDate;
public:
	Employee();
	Employee(int ID_E);
	virtual System::String^ Find(System::String^ Fname, System::String^ Lname, System::String^ Birth) override;
	virtual System::String^ Returninfos() override;
	virtual System::String^ create(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR, int ID_superior)override;
	virtual System::String^ Delete() override;
	virtual System::String^ Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR, int ID_superior) override;
};