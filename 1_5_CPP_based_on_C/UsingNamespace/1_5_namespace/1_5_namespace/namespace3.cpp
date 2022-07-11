#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace BestComImpl
{
	void PrettyFunc(void);
}

namespace ProComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();

	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom Func" << std::endl;

	PrettyFunc();  // ������ �̸�����
	ProComImpl::SimpleFunc();  // �ٸ� �̸� ����
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!" << std::endl;
}

void ProComImpl::SimpleFunc(void)
{
	std::cout << "ProCom Func" << std::endl;
}
