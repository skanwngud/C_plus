// 유도 클래스 객체 소멸

#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;

public:
	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase() : " << baseNum << endl;
	}

	~SoBase()
	{
		cout << "~SoBase() : " << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;

public:
	SoDerived(int n) : SoBase(n), derivNum(n)
	{
		cout << "SoDerived() : " << derivNum << endl;
	}

	~SoDerived()
	{
		cout << "~SoDerived()" << derivNum << endl;
	}
};

int main3(void)
{
	SoDerived drv1(15);
	SoDerived drv2(27);

	return 0;
}

// 소멸은 생성과 반대
// drv1 SoBase init -> drv2 SoBase init -> drv1 SoDeriv init -> drv2 SoDeriv init -> drv2 SoDeriv dest -> drv1 SoDeriv dest -> drv2 SoBase dest -> drv1 SoBase dest 순서