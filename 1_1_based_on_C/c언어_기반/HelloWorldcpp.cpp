#include <iostream> // 헤더 파일 선언

using namespace std;

int a(void)
{
	int num = 20;

	cout << "hello world" << endl; // cout 과 << 연산자로 출력
	cout << "hello" << "world" << endl; // endl 로 개행
	cout << num << ' ' << 'A'; // 변수 출력 가능
	cout << ' ' << 3.14 << endl; // 숫자 출력 가능

	return 0;
}