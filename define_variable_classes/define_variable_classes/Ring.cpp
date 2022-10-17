#include <iostream>
#include "Ring.h"
using namespace std;

void Ring::Init(int inner_x, int inner_y, int inner_rad, int outer_x, int outer_y, int outer_rad)
{
	if (inner_x > outer_x && inner_rad > outer_rad || inner_y > outer_y && inner_rad > outer_rad)
	{
		cout << "circle 정의가 잘못 되었습니다." << endl;
		return;
	}

	inner_xpos = inner_x;
	inner_ypos = inner_y;
	inner_radius = inner_rad;

	outer_xpos = outer_x;
	outer_ypos = outer_y;
	outer_radius = outer_rad;
}

void Ring::ShowRingInfo()
{
	cout << "Inner circle Info..." << endl;
	cout << "radius: " << inner_radius << endl;
	cout << "[" << inner_xpos << ", " << inner_ypos << "]" << endl;

	cout << "Outer circle Info..." << endl;
	cout << "radius: " << outer_radius << endl;
	cout << "[" << outer_xpos << ", " << outer_ypos << "]" << endl;
}