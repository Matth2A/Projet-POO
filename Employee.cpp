#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(int ID_E)
{
	this->ID_E = ID_E;
}

void Employee::set_ID_E(int ID_E) {
	this->ID_E = ID_E;
}

System::String^ Employee::Find(System::String^ Fname, System::String^ Lname, System::String^ Birth)
{
	return" ";
}

System::Data::DataSet^ Employee::Returninfos()
{
	return this->db.getRows("SELECT person.[id_p], person.[first_name], person.[last_name], person.birth_date, employees.hire_date, address.number, address.street, cities.name, cities.postcode FROM[dbo].[employees] JOIN[dbo].[person] ON employees.id_p = person.id_p JOIN[dbo].[address] ON person.id_adr = address.id_adr JOIN[dbo].[cities] ON address.id_city = cities.id_city WHERE available = 1;","person");
}

void Employee::create(System::String^ Fname, System::String^ Lname, System::String^ Birth, System::String^ number, System::String^ street, System::String^ info, System::String^ city, System::String^ postcode, System::String^ ID_superior, System::String^ hire_date)
{
	this->HireDate = hire_date;
	//Person creation (using the address' ID)
	Person::create(Fname, Lname, Birth, number, street, info, city, postcode);
	//Client creation (using the person's ID)
	db.actionRows("INSERT INTO dbo.employees VALUES('" + this->HireDate + "', " + this->getID_P() + ", "+ID_superior+", 1); ");
}

void Employee::Delete()
{
	this->db.actionRows("UPDATE [dbo].[employees] set available = 0 WHERE id_emp=" + this->ID_E + ";");
}

System::String^ Employee::Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR, int ID_superior)
{
	return" ";
}