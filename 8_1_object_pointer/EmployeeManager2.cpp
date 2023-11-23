#include <iostream>
#include <cstring>

class Employee
{
    private:
        char name[100];

    public:
        Employee(char *name)
        {
            strcpy(this->name, name);
        }

        void ShowYourName() const
        {
            std::cout << "name: " << name << std::endl;
        }
};

class PermanentWorker : public Employee
{
    private:
        int salary;  // 월 급여

    public:
        PermanentWorker(char *name, int money)
            : Employee(name), salary(money)
        {
            // empty
        }

        int GetPay() const
        {
            return salary;
        }

        void ShowSalaryInfo() const
        {
            ShowYourName();
            std::cout << "salary: " << GetPay() << std::endl;
        }
};

class EmployeeHandler
{
    private:
        Employee *empList[50];
        int empNum;

    public:
        EmployeeHandler() : empNum(0)
        {
            // empty
        }

        void AddEmployee(Employee *emp)
        {
            empList[empNum++] = emp;
        }

        void ShowAllSalaryInfo() const
        {
            /*
            for (int i = 0; empNum; i++)
            {
                empList[i]->ShowSalaryInfo();
            }
            */
        }

        void ShowTotalSaraly() const
        {
            int sum = 0;

            /*
            for (int i = 0; i < empNum; i++)
            {
                sum += empList[i]->GetPay();
            }
            */
            std::cout << "salary sum: " << sum << std::endl;
        }

        ~EmployeeHandler()
        {
            for (int i = 0; i < empNum; i++)
            {
                delete empList[i];
            }
        }
};

int main(void)
{
    // 직원 관리를 목적으로 설계 된 컨트롤 클래스의 객체생성
    EmployeeHandler handler;

    // 직원 등록
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));

    // 이번 달에 지불해야 할 급여 정보
    handler.ShowAllSalaryInfo();

    // 이번 달에 지불해야 할 급여의 총합
    handler.ShowTotalSaraly();

    return 0;
}