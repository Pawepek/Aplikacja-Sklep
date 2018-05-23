#include "CheckWybor.h"

CheckWybor::CheckWybor(int wybor)
{
	if (wybor<0 || wybor> 5)
	{
		throw 1;
	}
	this->~CheckWybor();
}

CheckWybor::~CheckWybor()
{
}

