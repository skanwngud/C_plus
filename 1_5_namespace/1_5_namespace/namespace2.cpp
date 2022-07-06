#include <iostream>

namespace BestComImpl2
{
	void SimpleFunc2(void);
}

namespace ProComImpl2
{
	void SimpleFunc2(void);
}

int main2(void)
{
	BestComImpl2::SimpleFunc2();
	ProComImpl2::SimpleFunc2();

	return 0;
}

void BestComImpl2::SimpleFunc2(void)
{
	std::cout << "BestComImpl func" << std::endl;
}

void ProComImpl2::SimpleFunc2(void)
{
	std::cout << "ProComImpl func" << std::endl;
}