#pragma once
#include <exception>
#include <iostream>
#include <string>
using namespace std;

class Pass : public exception
{
public:
	Pass(string,string);
	~Pass();
};