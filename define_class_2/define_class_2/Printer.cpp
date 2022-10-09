#define _CRT_SECURE_NO_WARNINGS

#include "Printer.h"
#include <iostream>
#include <cstring>

void Printer::SetString(const char * setString)
{
	strcpy(string, setString);
}

void Printer::ShowString()
{
	std::cout << string << std::endl;
}