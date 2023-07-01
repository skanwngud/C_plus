// HAS-A
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class Gun
{
private:
	int bullet;

public:
	Gun(int bnum) : bullet(bnum)
	{
		// empty
	}

	void Shot()
	{
		std::cout << "BBANG!" << std::endl;
		bullet--;
	}
};

class Police : public Gun  // Police 라는 클래스가 Gun 을 갖고있음
{
private:
	int handcuffs;

public:
	Police(int bnum, int bcuff)
		: Gun(bnum), handcuffs(bcuff)
	{
		// empty
	}

	void PutHandCuff()
	{
		std::cout << "SNAP!" << std::endl;
		handcuffs--;
	}
};

int main2(void)
{
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandCuff();

	return 0;
}