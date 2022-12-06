#include "Person.h"

Person::Person()
{

}

void Person::setID_P(int idp)
{
    this->ID_P = idp;
}
int Person::getID_P()
{
    return(this->ID_P);
}


void Person::setID_ADR(int ida)
{
    this->ID_ADR = ida;
}


void Person::setFname(System::String^ fname)
{
    this->Fname = fname;
}

void Person::setLname(System::String^ lname)
{
    this->Lname = lname;
}

void Person::setBirth(System::String^ birth)
{
    this->Birth = birth;
}

System::String^ Person::Find(System::String^ Fname, System::String^ Lname, System::String^ Birth)
{
    return" ";
}

System::Data::DataSet^ Person::Returninfos()
{
    return db.getRows("","");
}

void Person::create(System::String^ Fname, System::String^ Lname, System::String^ Birth, System::String^ number, System::String^ street, System::String^ info, System::String^ city, System::String^ postcode)
{
    //Address creation
    Address^ adr = gcnew Address;
    setID_ADR(adr->create(number, street, info, city, postcode));
    //Person creation (using the address' ID)
    Object^ result = this->db.getScalar("INSERT INTO dbo.person VALUES('" + Fname + "', '" + Lname + "', '" + Birth + "', "+ID_ADR+");SELECT SCOPE_IDENTITY();");
    setID_P(System::Convert::ToInt32(result));
}

void Person::Delete()
{
}

System::String^ Person::Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR)
{
    return" ";
}
