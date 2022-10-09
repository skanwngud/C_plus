#include "Calculator.h"
using namespace std;

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Sub(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cout << "2.2 * 2.0 = " << cal.Mul(2.2, 2.0) << endl;
	cal.ShowOpCount();
	cal.Init();
	cal.ShowOpCount();

	return 0;
}