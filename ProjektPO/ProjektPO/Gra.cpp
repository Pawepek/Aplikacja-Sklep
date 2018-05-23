#include "Gra.h"

Gra::Gra(string platforma, int dostepnosc, double cena, string nazwa) :Produkt(dostepnosc, cena, nazwa)
{
	this->platforma = platforma;

}

string Gra::get_platforma()
{
	return this->platforma;
}


void Gra::wypisz()
{
	cout << "Nazwa produktu:" << this->get_nazwa() << endl;
	cout << "Cena produktu: " << this->get_cena() << endl;
	cout << "Dostêpnoœæ produktu: " << this->get_dostepnosc() << " sztuk\n";
	cout << "Platforma na jak¹ dedykowana jest gra: " << this->platforma << endl;
	cout << "Dodano grê do koszyka" << endl;


}