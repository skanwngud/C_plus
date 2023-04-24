// A class 가 B class 를 friend 로 지정하면 B class 는 A class 의 private 에 접근 가능
// 그러나 단순히 A class 가 B class 를 friend 로 지정했다해서 A class 가 B class 의 private 에 접근 가능한 것은 아님
// B class 도 A class 를 friend 로 지정해야 private 에 접근 가능
// friend 는 class 의 어떤 영역 (private, public) 에도 지정 가능

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Girl;  // 클래스 선언

class Boy
{
private:
	int height;
	friend class Girl;  // Gril class 를 friend 로 선언 -> 클래스 선언도 같이 해주므로 13행이 필요 없다

public:
	Boy(int len) : height(len)
	{
		// empty
	}

	void ShowYourFriendInfo(Girl &frn);  // Girl 은 아직 정의 되지 않았지만 위에서 선언을 했기 때문에 컴파일이 가능
};

class Girl
{
private:
	char phNum[20];

public:
	Girl(char * num)
	{
		strcpy(phNum, num);
	}

	void ShowYourFriendInfo(Boy &frn);
	friend class Boy;  // Boy class 를 friend 로 선언
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
	cout << "Her Phone number is " << frn.phNum << endl;  // 이 함수가 실행 되기 위해선 Girl 의 phNum 변수가 필요하기 때문에 클래스보다 뒤에 정의 됨
}

void Girl::ShowYourFriendInfo(Boy &frn)
{
	cout << "His height is " << frn.height << endl;
}

int main1(void)
{
	char num[20] = "010-1235-5678";
	Boy boy(170);
	Girl girl(num);
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);

	return 0;
}

// friend 선언은 객체 지향 언어의 정보은닉성을 해치므로 남용하지 않는 것이 좋음