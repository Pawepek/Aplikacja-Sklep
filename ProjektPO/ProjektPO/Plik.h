#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include "Konsola.h"
#include "Gra.h"
using namespace std;
class Plik
{
public:
	static void zapisz(Konsola *);
	static void zapisz(Gra *);

	Plik() {};
	~Plik() {};
};

