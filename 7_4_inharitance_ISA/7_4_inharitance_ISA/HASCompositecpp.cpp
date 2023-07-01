#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class Gun
{
private:
	int bullet;

public:
	Gun(int bnum)
		: bullet(bnum)
	{
		// empty
	}

	void Shot()
	{
		std::cout << "BBANG!" << std::endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs;
	Gun * pistol;  // 클래스 포인터, 상속이 아니라 객체를 생성해서 참조

public:
	Police(int bnum, int bcuff)
		:handcuffs(bcuff)
	{
		if (bnum > 0)  // bnum 이 1 이상이면 총에 장전
			pistol = new Gun(bnum);

		else  // 0 이면 총에 아무것도 장전하지 않음
			pistol = NULL;
	}

	void PutHandcuff()
	{
		std::cout << "SNAP!" << std::endl;
		handcuffs--;
	}

	void Shot()  // Gun 클래스를 상속한다면 필요없지만 객체를 만들어 참조하기 때문에 필요
	{
		if (pistol == NULL)
			std::cout << "Hut BBANG" << std::endl;

		else
			pistol->Shot();  // 객체로 생성 된 Gun 클래스의 함수 호출
	}

	~Police()
	{
		if (pistol == NULL)
			delete pistol;
	}
};

int main(void)
{
	Police pman1(5, 3);
	pman1.Shot();
	pman1.PutHandcuff();

	Police pman2(0, 3);
	pman2.Shot();
	pman2.PutHandcuff();

	return 0;
}

// HAS-A 관계는 총을 소유하지 않은 경찰을 표현하기 어려우나 Composite 는 NULL 로 초기화해 간단히 해결.
// 상속으로 서로 묶인 HAS 관계에서는 클래스를 확장하는 것도 쉽지 않다.