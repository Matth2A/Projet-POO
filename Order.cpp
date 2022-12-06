#include "Order.h"

Order::Order()
{

}

Order::Order(int ID_ORDER)
{
	this->ID_ORDER = ID_ORDER;
}

System::String^ Order::Find()
{
	return" ";
}

System::Data::DataSet^ Order::Returninfos()
{
	return this->db.getRows("","");
}

void Order::create(System::String^ expnumber, System::String^ expstreet, System::String^ expinfo, System::String^ expcity, System::String^ exppostcode, System::String^ billnumber, System::String^ billstreet, System::String^ billinfo, System::String^ billcity, System::String^ billpostcode, System::String^ issue_date, System::String^ delivery_date, int discount, int id_c)
{
	Address^ adr = gcnew Address;
	int exp_adr_id; int bill_adr_id;
	exp_adr_id = adr->create(expnumber, expstreet, expinfo, expcity, exppostcode);
	bill_adr_id = adr->create(billnumber, billstreet, billinfo, billcity, billpostcode);
	db.actionRows("INSERT INTO dbo.orders VALUES('" + issue_date + "','" + delivery_date + "'," + discount + "," + id_c + ","+exp_adr_id+","+bill_adr_id+");");
}

System::String^ Order::Delete()
{
	return" ";
}

System::String^ Order::Modify()
{
	return" ";
}

System::String^ Order::remove_item(int ID_item)
{
	return" ";
}

System::String^ Order::add_item(int ID_item, int Quantity)
{
	return" ";
}