#include <iostream>

int main_a(void)
{
	int num = 20;

	std::cout << "Hello World!" << std::endl; // std::cout �� << �� �̿��� ���
	std::cout << "Hello "<<" World!" << std::endl; // std::endl; �� �̿��� ����(enter)
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}

/*
<iostream> : C ������ <stdio.h> �� ���� ����
std, endl, cout
std::cout << '��´��' ; : C �� �ٸ��� %d %lf �� ���� ���� ���ڰ� ��� ��� ����
<<endl : ���� (enter, �ٹٲ�)
*/