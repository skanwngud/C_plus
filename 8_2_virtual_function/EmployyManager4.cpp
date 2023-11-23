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

        // virtual int getPay() const
        // {
        //     return 0;
        // }

        // virtual void ShowSalaryInfo() const
        // {
        //     // empty
        // }
        virtual int getPay() const = 0;  // 순수 가상함수
        virtual void ShowSalaryInfo() const = 0;  // 몸체를 선언하지 않았다는 것을 컴파일러에게 알려줌으로써 객체 생성 방지
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

        int getPay() const
        {
            return salary;
        }

        void ShowSalaryInfo() const
        {
            ShowYourName();
            std::cout << "salary: " << getPay() << std::endl;
        }
};

class TemporaryWorker : public Employee
{
    private:
        int workTime;
        int payPerHour;

    public:
        TemporaryWorker(char * name, int pay)
            : Employee(name), workTime(0), payPerHour(pay)
        {
            // empty
        }

        void AddWorkTime(int time)  // 일한 시간 추가
        {
            workTime += time;
        }

        int getPay() const  // 이 달의 급여
        {
            return workTime * payPerHour;
        }

        void ShowSalaryInfo() const
        {
            ShowYourName();
            std::cout << "Salary: " << getPay() << std::endl;
        }
};

class SalseWorker : public PermanentWorker
{
    private:
        int salseResult;
        double bonusRatio;

    public:
        SalseWorker(char * name, int money, double ratio)
            : PermanentWorker(name, money), salseResult(0), bonusRatio(ratio)
        {
            // empty
        }

        void AddSalsesResult(int value)
        {
            salseResult += value;
        }

        int getPay() const
        {
            return PermanentWorker::getPay() + (int)(salseResult * bonusRatio);
        }

        void ShowSalaryInfo() const
        {
            ShowYourName();
            std::cout << "Salary: " << getPay() << std::endl << std::endl;
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
            for (int i = 0; i < empNum; i++)
            {
                empList[i]->ShowSalaryInfo();
            }
        }

        void ShowTotalSaraly() const
        {
            int sum = 0;

            for (int i = 0; i < empNum; i++)
            {
                sum += empList[i]->getPay();
            }
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

    // 정규직 직원 등록
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));

    // 임시직 직원 등록
    TemporaryWorker *alba = new TemporaryWorker("Jung", 700);
    alba->AddWorkTime(5);
    handler.AddEmployee(alba);

    // 영업직 등록
    SalseWorker *seller = new SalseWorker("Hong", 1000, 0.1);
    seller->AddSalsesResult(7000);
    handler.AddEmployee(seller);

    // 이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();

    // 이번 달에 지불해야 할 급여의 총합
    handler.ShowTotalSaraly();

    return 0;
}