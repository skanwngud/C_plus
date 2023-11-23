// 객체 포인터
// AAA 객체 포인터는 AAA 객체 뿐만이 아니라 AAA 객체를 직간접적으로 상속하는 모든 객체에 접근 가능

#include <iostream>

class Person
{
    public:
        void Sleep() { std::cout << "Sleep" << std::endl; }
};

class Student : public Person
{
    public:
        void Study() { std::cout << "Study" << std::endl; }
};

class PartTimeStudent : public Student
{
    public:
        void work() { std::cout << "work" << std::endl; }
};

int main(void)
{
    Person *pt1 = new Student();  // Person 을 상속하는 Student 객체 지정
    Person *pt2 = new PartTimeStudent();  // Person 을 상속하는 Student 가 상속하는 PartTimeStudent 객체 지정
    Student *pt3 = new PartTimeStudent();  // Student 가 상속하는 PartTimeStudent 개체 지정

    pt1->Sleep();
    pt2->Sleep();
    pt3->Study();

    delete pt1;
    delete pt2;
    delete pt3;

    return 0;
}

// IS-A 의 관계가 성립
// 학생은 사람이다, 근로학생은 학생이다, 근로학생은 사람이다

// 학생은 사람의 일종이다, 근로학생은 학생의 일종이다, 근로학생은 사람의 일종이다