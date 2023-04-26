// const ��������� �ʱ�����ڸ� ���ؼ��� ���� �Ǿ�������� const static ��������� ����� ���ÿ� �ʱ�ȭ ����

#include <iostream>

class CountrArea
{
public:
	const static int RUSSIA = 1707540;  // const ��������� ����� ���ÿ� �ʱ�ȭ ����
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main5(void)
{
	std::cout << "Russia: " << CountrArea::RUSSIA << std::endl;
	std::cout << "Canada: " << CountrArea::CANADA << std::endl;
	std::cout << "China: " << CountrArea::CHINA << std::endl;
	std::cout << "Korea: " << CountrArea::SOUTH_KOREA << std::endl;

	return 0;
}