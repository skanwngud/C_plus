#include "Calculator.h"
#include <math.h>
#include <iostream>
using namespace std;

void Calculator::Init()
{
	AddCnt = 0;
	SubCnt = 0;
	MulCnt = 0;
	DivCnt = 0;
}

void Calculator::ShowOpCount()
{
	// °¢ ÇÔ¼öº° cnt Ãâ·Â
	cout << "µ¡¼À: " << AddCnt << " »¬¼À: " << SubCnt << " °ö¼À: " << MulCnt << " ³ª´°¼À: " << DivCnt << endl;
}

double Calculator::Add(double x, double y)
{
	AddCnt += 1;
	return x + y;
}

double Calculator::Sub(double x, double y)
{
	SubCnt += 1;
	return x - y;
}

double Calculator::Mul(double x, double y)
{
	MulCnt += 1;
	return x * y;
}

double Calculator::Div(double x, double y)
{
	DivCnt += 1;
	return x / y;
}