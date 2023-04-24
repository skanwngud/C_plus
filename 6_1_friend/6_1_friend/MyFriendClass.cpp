// A class �� B class �� friend �� �����ϸ� B class �� A class �� private �� ���� ����
// �׷��� �ܼ��� A class �� B class �� friend �� �����ߴ��ؼ� A class �� B class �� private �� ���� ������ ���� �ƴ�
// B class �� A class �� friend �� �����ؾ� private �� ���� ����
// friend �� class �� � ���� (private, public) ���� ���� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Girl;  // Ŭ���� ����

class Boy
{
private:
	int height;
	friend class Girl;  // Gril class �� friend �� ���� -> Ŭ���� ���� ���� ���ֹǷ� 13���� �ʿ� ����

public:
	Boy(int len) : height(len)
	{
		// empty
	}

	void ShowYourFriendInfo(Girl &frn);  // Girl �� ���� ���� ���� �ʾ����� ������ ������ �߱� ������ �������� ����
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
	friend class Boy;  // Boy class �� friend �� ����
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
	cout << "Her Phone number is " << frn.phNum << endl;  // �� �Լ��� ���� �Ǳ� ���ؼ� Girl �� phNum ������ �ʿ��ϱ� ������ Ŭ�������� �ڿ� ���� ��
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

// friend ������ ��ü ���� ����� �������м��� ��ġ�Ƿ� �������� �ʴ� ���� ����