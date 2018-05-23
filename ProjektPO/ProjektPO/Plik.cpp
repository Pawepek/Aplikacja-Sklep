#include "Plik.h"
#include<sstream>


void Plik::zapisz(Konsola *kl) {
	ofstream os;
	ostringstream ss;

	os.open("Konsola.txt", ios::out);
	if (os.good()) {

		ss << kl->get_nazwa() << "," << kl->get_dostepnosc() << "," << kl->get_cena() << "," << kl->get_ilosc_padow() << endl;

		os << ss.str();
		ss.clear();
	}
	os.close();
}
void Plik::zapisz(Gra *kl) {
	ofstream os;
	ostringstream ss;

	os.open("Gra.txt", ios::out);
	if (os.good()) {

		ss << kl->get_nazwa() << "," << kl->get_dostepnosc() << "," << kl->get_cena() << "," << kl->get_platforma() << endl;

		os << ss.str();
		ss.clear();
	}
	os.close();
}