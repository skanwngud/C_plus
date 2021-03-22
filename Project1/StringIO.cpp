#include <iostream>

int main(void)
{
	char name[100]; // name 변수 초기화
	char lang[200]; // lang 변수 초기화

	std::cout << "이름은 무엇입니까?";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
	std::cin >> lang;

	std::cout << "내 이름은 "<<name<<" 입니다.\n"; // 문자열 중간에 << << 로 변수를 넣어 출력
	std::cout << "내가 제일 좋아하는 언어는 " << lang << " 입니다." << std::endl;

	return 0;
}