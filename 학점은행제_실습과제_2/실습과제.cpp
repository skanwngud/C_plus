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
	LaserPrinter* lp = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	cout << "현재 작ㅈ동중인 2대의 프린트는 아래와 같다" << endl;
	cout << "잉크젯 : " << ip->getModel() << " ," << ip->getManufacturer();
	cout << " ,남은 종이" << ip->getAvailableCount();
	cout << "장 ,남은 잉크 " << ip->getAvailableInk() << endl;
	cout << "레이저 : " << lp->getModel() << " ," << lp->getManufacturer();
	cout << " ,남은 종이" << lp->getAvailableCount();
	cout << "장 ,남은잉크 " << lp->getAvailableToner() << endl << endl;
	for (;;) {
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		int sw, n;
		cin >> sw >> n;
		if (sw == 1) {
			switch (ip->printInkJet(n)) {
			case 1:cout << "프린트하였습니다" << endl; break;
			case 2:cout << "용지가 부족하여 프린트할 수 없습니다." << endl; break;
			case 3:cout << "잉크가 부족하여 프린트할 수 없습니다." << endl; break;
			case 4:cout << "용지와 잉크가 모두 부족하여 프린트할 수 없습니다." << endl; break;
			}
			cout << "잉크젯 : " << ip->getModel() << " ," << ip->getManufacturer();
			cout << " ,남은 종이" << ip->getAvailableCount();
			cout << "장, 남은 잉크 " << ip->getAvailableInk() << endl;
			cout << "레이저 : " << lp->getModel() << " ," << lp->getManufacturer();
			cout << " ,남은 종이" << lp->getAvailableCount();
			cout << "장, 남은 잉크 " << lp->getAvailableToner() << endl;
		}
		else if (sw == 2) {
			switch (lp->printLaser(n)) {
			case 1:cout << "프린트하였습니다" << endl; break;
			case 2:cout << "용지가 부족하여 프린트할 수 없습니다." << endl; break;
			case 3:cout << "토너가 부족하여 프린트할 수 없습니다." << endl; break;
			case 4:cout << "용지와 토너가 모두 부족하여 프린트할 수 없습니다." << endl; break;
			}
			cout << "잉크젯 : " << ip->getModel() << " ," << ip->getManufacturer();
			cout << " ,남은 종이" << ip->getAvailableCount();
			cout << "장 ,남은 잉크 " << ip->getAvailableInk() << endl;
			cout << "레이저 : " << lp->getModel() << " ," << lp->getManufacturer();
			cout << " ,남은 종이" << lp->getAvailableCount();
			cout << "장 ,남은 잉크" << lp->getAvailableToner() << endl;
		}
		else cout << "프린트 종류 입력 에러" << endl;
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		char a;
		cin >> a;
		if (a == 'n') break;
		cout << endl << endl;
	}
delete ip; delete lp;
}