#include <iostream>
#define SQUARE_1(x) ((x)*(x))

inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;

	std::cout << SQUARE_1(5) << std::endl;
	std::cout << SQUARE_1(12) << std::endl;

	return 0;
}