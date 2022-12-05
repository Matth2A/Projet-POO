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
	Person();
	void setID_P(int IDP);
	void setID_ADR(int IDA);
	void setFname(System::String^);
	void setLname(System::String^);
	void setBirth(System::String^);

	virtual System::String^ Find(System::String^ Fname, System::String^ Lname, System::String^ Birth);
	virtual System::String^ Returninfos();
	virtual System::String^ create(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR);
	virtual System::String^ Delete();
	virtual System::String^ Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR);
};