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
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;

	cout << "�޴��� �����ϼ���."<<' ';
	cin >> SelectMenu;

	switch (SelectMenu)
	{
	case 1:
		{
			cout << "���°����� �����ϼ̽��ϴ�." << endl;
			cout << "�̸�: ";
			cin >> Name;
			cout << "���¹�ȣ: ";
			cin >> AccountNum;
			cout << "�Աݾ�: ";
			cin >> DepositAmount;

			cout << "���°����� �Ϸ� �Ǿ����ϴ�." << endl << "�̸�: " << Name << endl << "���¹�ȣ: " << AccountNum << endl << "�Աݾ�: " << DepositAmount << endl;

			cout << "�޴��� �����ϼ���." << endl;
			cin >> SelectMenu;
		}
	case 2:
		{
			cout << "�Ա��� �����ϼ̽��ϴ�." << endl;
			break;
		}
	case 3:
		{
			cout << "����� �����ϼ̽��ϴ�." << endl;
			break;
		}
	case 4:
		{
			cout << "�������� ��ü ����� �����ϼ̽��ϴ�." << endl;
			break;
		}
	case 5:
		{
			cout << "���α׷� ���Ḧ �����ϼ̽��ϴ�." << endl;
			break;
		}
	default:
		break;
	}

	return 0;
}