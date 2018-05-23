#include "Pass.h"

Pass::Pass(string login,string haslo )
{
	if (login != "login" && haslo != "password")
	{
		throw 2;
	}
	this->~Pass();

}

Pass::~Pass()
{
}
