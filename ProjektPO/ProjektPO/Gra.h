#pragma once
#include "Produkt.h"
#include "Konsola.h"
class Gra :public Produkt<int, double, string>
{
	string platforma;
	friend class Konsola;

public:

	Gra(string, int, double, string);
	string get_platforma();
	void wypisz();
	
};