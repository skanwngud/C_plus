// 烙矫按眉狼 积己苞 家戈

#include <iostream>
using namespace std;

class SoSimple3
{
private:
	int num;

public:
	SoSimple3(int n) : num(n)
	{
		cout << "New Object " << this << endl;
	}

	SoSimple3(const SoSimple3& copy) : num(copy.num)
	{
		cout << "New Object Copy " << this << endl;
	}

	~SoSimple3()
	{
		cout << "Destroy Objcet " << this << endl;
	}
};

SoSimple3 SimpleFuncObj3(SoSimple3 ob)
{
	cout << "Pram ADR: " << &ob << endl;
	return ob;
}

int main(void)
{
	SoSimple3 obj(7);
	SimpleFuncObj3(obj);

	cout << endl;
	SoSimple3 tempref = SimpleFuncObj3(obj);
	cout << "Return obj" << &tempref << endl;

	return 0;
}