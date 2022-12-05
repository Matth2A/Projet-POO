#pragma once
#include "Client.h"

ref class Stock : public Client

{
private:
	System::String^ reference;
	System::String^ name;
	float available_quantity;
	float restock_threshold;
	float taxless_price;
	float tax;
public:
	int ID_item;
	Stock();
	Stock(int ID_item);
	System::String^ Returninfos() override;
	System::String^ create(System::String^ reference, System::String^ name, float available_quantity, float restock_threshold, float taxless_price, float tax)override;
	System::String^ Delete() override;
	System::String^ Modify(System::String^ reference, System::String^ name, float available_quantity, float restock_threshold, float taxless_price, float tax) override;


};