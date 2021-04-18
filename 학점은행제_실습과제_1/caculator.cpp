#include <iostream>

using namespace std;

class caculator
{
private:
	int a, b;

public:
	void setValue(int x, int y);
	
	int Sum();
	int Sub();
	int Mul();
	double Div();
};

void caculator::setValue(int x, int y)
{
	a = x;
	b = y;
}

int caculator::Sum()
{
	return a + b;
}

int caculator::Sub()
{
	return a - b;
}

int caculator::Mul()
{
	return a * b;
}

double caculator::Div()
{
	return (double)a / (double)b;
}

int main()
{
label1:
	int x, y;
	char c;
	caculator cal;

	cout << "두 정수와 연산자를 입력>>";
	cin >> x >> c >> y;
	cal.setValue(x, y);

	switch(c)
	{
	case '+':
		cout << cal.Sum() << endl;
		goto label1;

	case '-':
		cout << cal.Sub() << endl;
		goto label1;
	case '*':
		cout << cal.Mul() << endl;
		goto label1;
	case '/':
		cout << cal.Div() << endl;
		goto label1;
	default:
		break;
	}
	cout << endl;
}