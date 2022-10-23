#include <iostream>
#include "Ring.h"

Ring::Ring(int inX, int inY, int inR, int outX, int outY, int outR)
	:inCircle(inX, inY, inR), outCircle(outX, outY, outR)
{
	// empty
}

void Ring::ShowRingInfo() const
{
	std::cout << "Inner circle info..." << std::endl;
	inCircle.ShowCircleInfo();
	std::cout << "Outer circle info..." << std::endl;
	outCircle.ShowCircleInfo();
}