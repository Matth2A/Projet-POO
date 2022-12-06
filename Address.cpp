#include "Address.h"

Address::Address(int ID_ADR)
{
	throw gcnew System::NotImplementedException();
}

Address::Address()
{
	//
}

System::Data::DataSet^ Address::Returninfos()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

int Address::create(System::String^ number, System::String^ street, System::String^ info, System::String^ city, System::String^ postcode)
{
	Object^ result = this->db.getScalar("INSERT INTO address VALUES('" + number + "','" + street + "', '" + info + "', (SELECT id_city FROM cities WHERE name LIKE '" + city + "' AND postcode LIKE '" + postcode + "'));SELECT SCOPE_IDENTITY();");
	this->ID_ADR = System::Convert::ToInt32(result);
	return this->ID_ADR;
}

System::String^ Address::Delete()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

System::String^ Address::Modify(int ID_ADR, int number, System::String^ Street, System::String^ Additional_info)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}