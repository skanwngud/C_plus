#include <iostream>
#include "Ring.h"

int main(void)
{
	Ring ring;
	ring.Init(3, 1, 4, 2, 2, 3);
	ring.ShowRingInfo();

	return 0;
}