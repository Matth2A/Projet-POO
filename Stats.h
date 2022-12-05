#pragma once
#include "Person.h"
ref class Stats : public Person
{
private:
	System::String^ client;
	System::String^ mois;
	int TVA;
	int MargeCommerciale;
	int RemiseCommerciale;
	int DemarqueInconnue;
public:
	System::String^ VariationsValeur(float a, float b, float c, float d);
	float TVA(int);
	float MargeCommerciale(int);
	float RemiseCommerciale(int);
	float DemarqueInconnue(int);
	float ChiffreAffaireM(System::String^ mois);
	float PrixtotaleC(System::String^ client);
	float PannierM();
	System::String^ dixplusVend();
	System::String^ dixmoinsVend();
	float ValeurStock();
	float ValeurStockVente();
	System::String^ ProduitReapprovisionner();
};