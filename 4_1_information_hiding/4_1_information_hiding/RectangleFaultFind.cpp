#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main(void)
{
	Point pos1;  // Point 호출
	if (!pos1.InitMembers(-2, 4))  // pos1 초기화 -> 문제가 생기면 초기화 되지 않음
		cout << "Initialize fail" << endl;
	if (!pos1.InitMembers(2, 4))
		cout << "Initialize fail" << endl;

	Point pos2;
	if (!pos2.InitMembers(5, 9))
		cout << "Initialize fail" << endl;

	Rectangle rec;  // Rectangle 호출
	if (!rec.InitMembers(pos2, pos1))  // rec 초기화 -> 문제가 생기면 초기화 되지 않음
		cout << "Initialize rectangle fail" << endl;

	if (!rec.InitMembers(pos1, pos2))
		cout << "Initialize rectangle fail" << endl;

	rec.ShowRecInfo();

	return 0;
}