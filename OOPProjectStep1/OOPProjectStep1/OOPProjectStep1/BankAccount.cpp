#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int SelectMenu;
	int AccountNum;
	string Name;
	int DepositAmount;

	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;

	cout << "메뉴를 선택하세요."<<' ';
	cin >> SelectMenu;

	switch (SelectMenu)
	{
	case 1:
		{
			cout << "계좌개설을 선택하셨습니다." << endl;
			cout << "이름: ";
			cin >> Name;
			cout << "계좌번호: ";
			cin >> AccountNum;
			cout << "입금액: ";
			cin >> DepositAmount;

			cout << "계좌개설이 완료 되었습니다." << endl << "이름: " << Name << endl << "계좌번호: " << AccountNum << endl << "입금액: " << DepositAmount << endl;

			cout << "메뉴를 선택하세요." << endl;
			cin >> SelectMenu;
		}
	case 2:
		{
			cout << "입금을 선택하셨습니다." << endl;
			break;
		}
	case 3:
		{
			cout << "출금을 선택하셨습니다." << endl;
			break;
		}
	case 4:
		{
			cout << "계좌정보 전체 출력을 선택하셨습니다." << endl;
			break;
		}
	case 5:
		{
			cout << "프로그램 종료를 선택하셨습니다." << endl;
			break;
		}
	default:
		break;
	}

	return 0;
}