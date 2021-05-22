#include <iostream>
#include <string>
using namespace std;
class Printer {
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;

protected:
	Printer(string model, string manufacturer, int pages) {
		this->model = model; this->manufacturer = manufacturer;
		this->availableCount = pages; printedCount = 0;
	}
	void print(int pages) {
		printedCount += pages;
		availableCount -= pages;
	}
	string Model() { return model; }
	string Manufacturer() { return manufacturer; }
	int PrintedCount() { return printedCount; }
	int AvailableCount() { return availableCount; }
};

class InkJetPrinter :virtual protected Printer {
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int pages, int ink) :
Printer(model, manufacturer, pages) {
		availableInk = ink;
	}
	int printInkJet(int pages) {
		int sw;
		if (pages <= AvailableCount() && pages <= availableInk) {
			print(pages);
			availableInk -= pages;
			sw = 1;
		}
		else if (pages > AvailableCount() && pages <= availableInk)
			sw = 2;
		else if (pages <= AvailableCount() && pages > availableInk)
			sw = 3;
		else
			sw = 4;
		return sw;
	}
	string getModel() { return Model(); }
	string getManufacturer() { return Manufacturer(); }
	int getAvailableCount() { return AvailableCount(); }
	int getAvailableInk() { return availableInk; }
};
class LaserPrinter :virtual protected Printer {
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int pages, int toner)
		:Printer(model, manufacturer, pages) {
		availableToner = toner;
	}
	int printLaser(int pages) {
		int sw;
		if (pages <= AvailableCount() && pages <= availableToner) {
			print(pages);
			availableToner -= pages;
			sw = 1;
		}
		else if (pages > AvailableCount() && pages <= availableToner)
			sw = 2;
		else if (pages <= AvailableCount() && pages > availableToner)
			sw = 3;
		else
			sw = 4;
		return sw;
	}
	string getModel() { return Model(); }
	string getManufacturer() { return Manufacturer(); }
	int getAvailableCount() { return AvailableCount(); }
	int getAvailableToner() { return availableToner; }
};
int main() {
	InkJetPrinter* ip = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* lp = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	cout << "���� �ۤ������� 2���� ����Ʈ�� �Ʒ��� ����" << endl;
	cout << "��ũ�� : " << ip->getModel() << " ," << ip->getManufacturer();
	cout << " ,���� ����" << ip->getAvailableCount();
	cout << "�� ,���� ��ũ " << ip->getAvailableInk() << endl;
	cout << "������ : " << lp->getModel() << " ," << lp->getManufacturer();
	cout << " ,���� ����" << lp->getAvailableCount();
	cout << "�� ,������ũ " << lp->getAvailableToner() << endl << endl;
	for (;;) {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		int sw, n;
		cin >> sw >> n;
		if (sw == 1) {
			switch (ip->printInkJet(n)) {
			case 1:cout << "����Ʈ�Ͽ����ϴ�" << endl; break;
			case 2:cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl; break;
			case 3:cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl; break;
			case 4:cout << "������ ��ũ�� ��� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl; break;
			}
			cout << "��ũ�� : " << ip->getModel() << " ," << ip->getManufacturer();
			cout << " ,���� ����" << ip->getAvailableCount();
			cout << "��, ���� ��ũ " << ip->getAvailableInk() << endl;
			cout << "������ : " << lp->getModel() << " ," << lp->getManufacturer();
			cout << " ,���� ����" << lp->getAvailableCount();
			cout << "��, ���� ��ũ " << lp->getAvailableToner() << endl;
		}
		else if (sw == 2) {
			switch (lp->printLaser(n)) {
			case 1:cout << "����Ʈ�Ͽ����ϴ�" << endl; break;
			case 2:cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl; break;
			case 3:cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl; break;
			case 4:cout << "������ ��ʰ� ��� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl; break;
			}
			cout << "��ũ�� : " << ip->getModel() << " ," << ip->getManufacturer();
			cout << " ,���� ����" << ip->getAvailableCount();
			cout << "�� ,���� ��ũ " << ip->getAvailableInk() << endl;
			cout << "������ : " << lp->getModel() << " ," << lp->getManufacturer();
			cout << " ,���� ����" << lp->getAvailableCount();
			cout << "�� ,���� ��ũ" << lp->getAvailableToner() << endl;
		}
		else cout << "����Ʈ ���� �Է� ����" << endl;
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		char a;
		cin >> a;
		if (a == 'n') break;
		cout << endl << endl;
	}
delete ip; delete lp;
}