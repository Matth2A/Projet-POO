#pragma once
#include "person.h"
ref class Address : public Person
{
private:
	int ID_ADR;
	int number;
	System::String^ Street;
	System::String^ Additional_info;
public:
	Address(int ID_ADR);
	Address();
	System::String^ Returninfos()override;
	System::String^ create(int ID_ADR, int number, System::String^ Street, System::String^ Additional_info)override;
	System::String^ Delete()override;
	System::String^ Modify(int ID_ADR, int number, System::String^ Street, System::String^ Additional_info) override;

};