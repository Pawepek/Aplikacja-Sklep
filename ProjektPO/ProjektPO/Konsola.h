#pragma once
#include <string>
using namespace std;
#include "Produkt.h"
#include "Gra.h"

class Konsola : public Produkt<int,double,string>
{
	friend class Gra;
	int ilosc_padow;
public:
	Konsola();
	Konsola(int,int,double,string);
	void wypisz();
	void koszyk_info();
	int get_ilosc_padow();
};


