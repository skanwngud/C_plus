#include <iostream>
using namespace std;

// �ڰ��� ���� ���� ĸ���� Ŭ����ȭ
class SinivelCap
{
public:
	void Take() const { cout << "�๰" << endl; }
};

class SneezeCap
{
public:
	void Take() const { cout << "��ä��" << endl; }
};

class SnuffleCap
{
public:
	void Take() const { cout << "�ڸ���" << endl; }
};

// ���� ȯ�ڸ� Ŭ����ȭ
class ColdPatient
{
public:
	// ���� �Դ� ������ �Լ�ȭ
	void TakeSinivelCap(const SinivelCap &cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
};

int main2(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	// �� ����
	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);

	return 0;
}

// �ش� �ڵ�� ĸ��ȭ�� ������ ��ǥ���� ���.
// ���������� �ʹ� �����ϴ�. �ڰ���� �׻� �๰, ��ä��, �ڸ����� �����Ѵٰ� ��