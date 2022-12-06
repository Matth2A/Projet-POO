#pragma once
#include "Client.h"
#include "Stock.h"
#include "DataBase.h"
ref class Order : public Stock
{
private:
	int ID_ORDER;
	int ID_C;
	int Delivery_ID_ADR;
	int Billing_ID_ADR;
	DataServer::Database db;
	System::String^ itemlist;
public:
	Order();
	Order(int ID_ORDER);
	System::String^ Find() override;
	System::Data::DataSet^ Returninfos() override;
	void create(System::String^ expnumber, System::String^ expstreet, System::String^ expinfo, System::String^ expcity, System::String^ exppostcode, System::String^ billnumber, System::String^ billstreet, System::String^ billinfo, System::String^ billcity, System::String^ billpostcode, System::String^ issue_date, System::String^ delivery_date, int discount, int id_c)override;
	System::String^ Delete() override;
	System::String^ Modify() override;
	System::String^ remove_item(int ID_item);
	System::String^ add_item(int ID_item, int Quantity);
};