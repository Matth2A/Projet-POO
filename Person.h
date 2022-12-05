#pragma once
#include <iostream>
ref class Person
{
private:
	int ID_P;
	int ID_ADR;
	System::String^ Fname;
	System::String^ Lname;
	System::String^ Birth;
public:
	void setID_P();
	void setID_ADR(int a);
	Person();
	Person(int ID_P);
	virtual System::String^ Find(System::String^ Fname, System::String^ Lname, System::String^ Birth);
	virtual System::String^ Returninfos();
	virtual System::String^ create(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR);
	virtual System::String^ Delete();
	virtual System::String^ Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR);
};