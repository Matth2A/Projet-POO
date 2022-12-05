#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(int ID_E)
{
	this->ID_E = ID_E;
}

System::String^ Employee::Find(System::String^ Fname, System::String^ Lname, System::String^ Birth)
{
	return" ";
}

System::String^ Employee::Returninfos()
{
	return "SELECT person.[id_p], person.[first_name], person.[last_name], person.birth_date, employees.hire_date, address.number, address.street, cities.name, cities.postcode FROM[dbo].[employees] JOIN[dbo].[person] ON employees.id_p = person.id_p JOIN[dbo].[address] ON person.id_adr = address.id_adr JOIN[dbo].[cities] ON address.id_city = cities.id_city WHERE available = 1;";
}

System::String^ Employee::create(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR, int ID_superior)
{
	return" ";
}

System::String^ Employee::Delete()
{
	return" ";
}

System::String^ Employee::Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR, int ID_superior)
{
	return" ";
}