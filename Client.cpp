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
	return "SELECT person.[id_p], person.[first_name], person.[last_name], person.birth_date, address.number, address.street, cities.name, cities.postcodeFROM[dbo].[clients] JOIN[dbo].[person] ON clients.id_p = person.id_pJOIN[dbo].[address] ON person.id_adr = address.id_adrJOIN[dbo].[cities] ON address.id_city = cities.id_cityWHERE available = 1 AND person.first_name LIKE '"+Fname+"' AND person.last_name LIKE '"+Lname+"'; "
        ;
}

System::String^ Client::Returninfos()
{
	return "SELECT person.[id_p], person.[first_name], person.[last_name], person.birth_date, address.number, address.street, cities.name, cities.postcode FROM[dbo].[clients] JOIN[dbo].[person] ON clients.id_p = person.id_pJOIN[dbo].[address] ON person.id_adr = address.id_adr JOIN[dbo].[cities] ON address.id_city = cities.id_city WHERE available = 1;";

}

System::String^ Client::create(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR)
{
	return "insert into person (first_name, last_name, birth_date, id_adr) values('" + Fname + "', '" + Lname + "', '" + Birth + "', '" + ID_ADR + "');	insert into clients(id_p) values(scope_identity())";
}

System::String^ Client::Delete(int id)
{
	return "UPDATE [dbo].[clients] set available = 0 WHERE id_p=" + id + ";";
}

System::String^ Client::Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR)
{
	return "UPDATE [dbo].[clients] set first_name = '" + Fname + "', last_name = '" + Lname + "', birth_date = '" + Birth + "', id_adr = '" + ID_ADR + "'";
}