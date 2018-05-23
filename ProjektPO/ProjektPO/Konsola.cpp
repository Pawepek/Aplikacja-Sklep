#include "Konsola.h"
#include <string>
#include "Gra.h"
using namespace std;



double operator+(const Gra &gra, const Konsola &konsola) {
	return 0;//gra.cena + konsola.cena;
}
Konsola::Konsola(int ilosc_padow, int dostepnosc, double cena, string nazwa) :Produkt(dostepnosc, cena, nazwa)
{
	this->ilosc_padow = ilosc_padow;

}



void Konsola::wypisz()
{
	cout << "Nazwa produktu:" << this->get_nazwa() << endl;
	cout << "Cena produktu: " << this->get_cena() << endl;
	cout << "Dostêpnoœæ produktu: " << this->get_dostepnosc() << " sztuk\n";
	cout << "Ilosc padow w zestawie z konsol¹: " << this->ilosc_padow << endl;


}

void Konsola::koszyk_info()
{
	cout << "Dodano konsolê do koszyka";
}




int Konsola::get_ilosc_padow()
{
	return this->ilosc_padow;
}