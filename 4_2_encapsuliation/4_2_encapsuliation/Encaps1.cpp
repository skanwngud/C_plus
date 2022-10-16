#include <iostream>
using namespace std;

// 코감기 증상에 대한 캡슐을 클래스화
class SinivelCap
{
public:
	void Take() const { cout << "콧물" << endl; }
};

class SneezeCap
{
public:
	void Take() const { cout << "재채기" << endl; }
};

class SnuffleCap
{
public:
	void Take() const { cout << "코막힘" << endl; }
};

// 감기 환자를 클래스화
class ColdPatient
{
public:
	// 약을 먹는 행위를 함수화
	void TakeSinivelCap(const SinivelCap &cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
};

int main2(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	// 약 복용
	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);

	return 0;
}

// 해당 코드는 캡슐화가 무너진 대표적인 사례.
// 복용절차가 너무 부족하다. 코감기는 항상 콧물, 재채기, 코막힘을 동반한다고 했