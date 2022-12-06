#pragma once
#include "DataBase.h"
ref class City
{
private:
	int ID_C;
	System::String^ Name;
	int postcode;
	DataServer::Database db;
public:
	City();
	City(int ID_C);
	System::Data::DataSet^ Returninfos();
	System::String^ Find(System::String^ Name, int postcode);
};