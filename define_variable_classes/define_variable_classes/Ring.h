#ifndef __RING_H_
#define __RING_H_

class Ring
{
private:
	int inner_xpos;
	int inner_ypos;
	int inner_radius;

	int outer_xpos;
	int outer_ypos;
	int outer_radius;
public:
	void Init(int inner_xpos, int inner_ypos, int inner_radius, int outer_xpos, int outer_yos, int outer_radius);
	void ShowRingInfo();
};

#endif
