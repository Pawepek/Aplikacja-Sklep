#pragma once
#include <string>
#include <iostream>
using namespace std;

template<typename Typ1, typename Typ2, typename Typ3>class  Produkt
{
	Typ2 cena;
	Typ1 dostepnosc;
	Typ3 nazwa;
public:
	
//	friend double operator+(const Gra &, const Konsola &);


Typ1 get_dostepnosc()
	{
		return this->dostepnosc;
	}

	Produkt(Typ1 dostepnosc, Typ2 cena, Typ3 nazwa)
	{
		this->cena = cena;
		this->nazwa = nazwa;
		this->dostepnosc = dostepnosc;
	}
	
	Typ2 get_cena()
	{
		return this->cena;

	}
	Typ3 get_nazwa()
	{
		return this->nazwa;
	}

};




