#pragma once
#include "Person.h"
#include <iostream>

ref class Client : public Person
{
private:
	int	ID_C;
public:
	Client();
	Client(int ID_C);
	virtual System::String^ Find(System::String^ Fname, System::String^ Lname, System::String^ Birth) override;
	virtual System::String^ Returninfos() override;
	virtual System::String^ create(System::String^ Fname, System::String^ Lname, System::String^ Birth, int number, System::String^ city, System::String^ street, System::String^ info, System::String^ postcode)override;
	virtual System::String^ Delete(int) override;
	virtual System::String^ Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int number, System::String^ city, System::String^ street, System::String^ info, System::String^ postcode) override;
};