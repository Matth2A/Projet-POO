#pragma once
#include "person.h"
ref class address : public Person
{
private:
	int ID_ADR;
	int number;
	System::String^ Street;
	System::String^ Additional_info;
public:
	address(int ID_ADR);
	address();
	System::String^ Returninfos()override;
	System::String^ create(int ID_ADR,int number, System::String^ Street, System::String^ Additional_info)override;
	System::String^ Delete()override;
	System::String^ Modify(int ID_ADR, int number, System::String^ Street, System::String^ Additional_info) override;
	
};