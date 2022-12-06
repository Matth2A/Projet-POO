#pragma once
#include "DataBase.h"

ref class Address
{
private:
	int ID_ADR;
	int number;
	DataServer::Database db;
	System::String^ Street;
	System::String^ Additional_info;
public:
	Address(int ID_ADR);
	Address();
	System::Data::DataSet^ Returninfos()override;
	int create(System::String^ number, System::String^ street, System::String^ info, System::String^ city, System::String^ postcode)override;
	System::String^ Delete()override;
	System::String^ Modify(int ID_ADR, int number, System::String^ Street, System::String^ Additional_info) override;

};