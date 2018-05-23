#pragma once
#include <iostream>
#include <exception>
using namespace std;

class CheckWybor : public exception
{
public:
	CheckWybor(int);
	~CheckWybor();

};