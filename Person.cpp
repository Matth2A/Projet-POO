#include "Person.h"

Person::Person()
{

}

void Person::setID_P(int idp)
{
    this->ID_P = idp;
}

void Person::setID_ADR(int ida)
{
    this->ID_ADR = ida;
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
    this->Lname = lname
}

void Person::setBirth(System::String^ birth)
{
    this->Birth = birth;
}

System::String^ Person::Find(System::String^ Fname, System::String^ Lname, System::String^ Birth)
{
}

System::String^ Person::Returninfos()
{

}

System::String^ Person::create(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR)
{

}

System::String^ Person::Delete()
{

}

System::String^ Person::Modify(System::String^ Fname, System::String^ Lname, System::String^ Birth, int ID_ADR)
{

}
