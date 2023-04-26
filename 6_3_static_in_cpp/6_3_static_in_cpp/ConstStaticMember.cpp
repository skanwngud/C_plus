// const 멤버변수는 초기생성자를 통해서만 선언 되어야하지만 const static 멤버변수는 선언과 동시에 초기화 가능

#include <iostream>

class CountrArea
{
public:
	const static int RUSSIA = 1707540;  // const 멤버변수의 선언과 동시에 초기화 가능
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