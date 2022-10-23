#ifndef __RING_H_
#define __RING_H_

#include "Circle.h"

class Ring
{
private:
	Circle inCircle;
	Circle outCircle;

public:
	Ring(int inX, int inY, int inR, int outX, int outY, int outR);
	void ShowRingInfo() const;
};
#endif // !__RING_H_
