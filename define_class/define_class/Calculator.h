#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>
#include <math.h>

class Calculator
{
private:
	double x;
	double y;
	int AddCnt;
	int SubCnt;
	int MulCnt;
	int DivCnt;
public:
	void Init();
	double Add(double x, double y);
	double Sub(double x, double y);
	double Mul(double x, double y);
	double Div(double x, double y);
	void ShowOpCount();
};

#endif