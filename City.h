#pragma once
ref class City
{
private:
	int ID_C;
	System::String^ Name;
	int postcode;
public:
	City();
	City(int ID_C);
	System::String^ Returninfos();
	System::String^ Find(System::String^ Name, int postcode);
};