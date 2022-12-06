#include "Client.h"

Client::Client()
{
}

Client::Client(int ID_C)
{
	this->ID_C = ID_C;
}

System::String^ Client::Find(System::String^ Fname, System::String^ Lname, System::String^ Birth)
{
	return "SELECT person.[id_p], person.[first_name], person.[last_name], person.birth_date, address.number, address.street, cities.name, cities.postcodeFROM[dbo].[clients] JOIN[dbo].[person] ON clients.id_p = person.id_pJOIN[dbo].[address] ON person.id_adr = address.id_adrJOIN[dbo].[cities] ON address.id_city = cities.id_cityWHERE available = 1 AND person.first_name LIKE '"+Fname+"' AND person.last_name LIKE '"+Lname+"'; ";
}

System::Data::DataSet^ Client::Returninfos()
{
	return this->od.getRows("SELECT person.[id_p], person.[first_name], person.[last_name], person.birth_date, address.number, address.street, cities.name, cities.postcode FROM[dbo].[clients] JOIN[dbo].[person] ON clients.id_p = person.id_p JOIN[dbo].[address] ON person.id_adr = address.id_adr JOIN[dbo].[cities] ON address.id_city = cities.id_city WHERE available = 1;","person");
}

void Client::create(System::String^ Fname, System::String^ Lname, System::String^ Birth, System::String^ number, System::String^ street, System::String^ info, System::String^ city, System::String^ postcode)
{
	//Person creation (using the address' ID)
	Person::create(Fname,Lname,Birth,number,street,info,city, postcode);
	//Client creation (using the person's ID)
	od.actionRows("INSERT INTO dbo.clients VALUES(" + this->getID_P() + ", 1);");
}

void Client::Delete(System::String^ id)
{
	this->od.actionRows("UPDATE [dbo].[clients] set available = 0 WHERE id_p=" + id + ";");
}

System::String^ Client::Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int number, System::String^ city, System::String^ street, System::String^ info, System::String^ postcode)
{
	return "UPDATE [dbo].[clients] set first_name = '" + Fname + "', last_name = '" + Lname + "', birth_date = '" + Birth + "', number='" + number + "', street = '" + street + "', additional_info = '" + info + "', name = " + city + ", postcode='" + postcode + "';";
}

System::Data::DataSet^ Client::ID_find(int ID) {
	return(od.getRows("SELECT person.[id_p], person.[first_name], person.[last_name], person.birth_date, address.number, address.street, cities.name, cities.postcode FROM[dbo].[clients] JOIN[dbo].[person] ON clients.id_p = person.id_p JOIN[dbo].[address] ON person.id_adr = address.id_adr JOIN[dbo].[cities] ON address.id_city = cities.id_city WHERE available = 1 AND clients.id_p = 5; ","client"));
}