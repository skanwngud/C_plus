#include <iostream>
#include <cstring>
using namespace std;

class NameCard
{
    private:
        char * name;
        char * company;
        char * phoneNumber;
        int grade;

    public:
        NameCard(char * myname, char * mycompany, char * myphoneNumber, int mygrade): grade(mygrade)
        {
            name = new char[strlen(myname) + 1];
            company = new char[strlen(mycompany) + 1];
            phoneNumber = new char[strlen(myphoneNumber) + 1];

            strcpy(name, myname);
            strcpy(company, mycompany);
            strcpy(phoneNumber, myphoneNumber);
        }

        NameCard(const NameCard& copy): grade(copy.grade)
        {
            name = new char[strlen(copy.name) + 1];
            company = new char[strlen(copy.company) + 1];
            phoneNumber = new char[strlen(copy.phoneNumber) + 1];

            strcpy(name, copy.name);
            strcpy(company, copy.company);
            strcpy(phoneNumber, copy.phoneNumber);
        }

        ~NameCard()
        {
            delete []name;
            delete []company;
            delete []phoneNumber;
            cout << "Bye!" << endl;
        }

        void ShowNameCardInfo() const
        {
            switch (grade)
            {
            case 0:
                cout << "Grade: 사원" << endl;
                break;
            
            case 1:
                cout << "Grade: 주임" << endl;
                break;

            case 2:
                cout << "Grade: 대리" << endl;
                break;

            case 3:
                cout << "Grade: 과장" << endl;
                break;

            default:
                break;
            }
            
            cout << "Name: " << name << endl;
            cout << "Company: " << company << endl;
            cout << "Phone Number: " << phoneNumber << endl;
        }
};

int main(void)
{
    enum COMP_POS {CLEARK, SENIOR, ASSIST, MANAGER};

    NameCard manCleark("Lee", "ABCEng", "010-1234-5768", COMP_POS::CLEARK);
    NameCard manManager = manCleark;

    manCleark.ShowNameCardInfo();
    manManager.ShowNameCardInfo();

    return 0;
}