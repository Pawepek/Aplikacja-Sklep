#pragma once

#include "Error.h"


using namespace std;



Error::~Error()
{
}

Error::Error(int i)
{
	switch (i)
	{
	case 1:
		cout << "Niepoprawny wybor!";

		break;
	case 2:
		cout << "Nieprawidlowy login lub has³o";
		break;

	}
	Sleep(1000);
	this->~Error();
}

