#include <iostream>
using namespace std;
class person // this all class were initialization and write data
{
public:
    string name, age;
    void getdata()
    {
        cout << "Enter name of student: ";
        getline(cin, name);
        cout << "Enter age of student: ";
        getline(cin, age);
    }
};
class student 
{
public:
    double percent;
    void percentage()
    {
        cout << "Enter percentage of student: ";
        cin >> percent;
    }
};
class teacher : public person, public student
{
public:
    double salary;
    void getsalary()
    {
        cout << "Enter salary of teacher: ";
        cin >> salary;
    }
    void read()
    {
        cout << ""<< endl;
        cout << "Name of student is " << name << endl;
        cout << "Age of student is " << age << endl;
        cout << "Percentage of student is " << percent << endl;
        cout << "Salary of teacher is " << salary << endl;

    }
};
int main()
{
    teacher t1;
    t1.getdata();
    t1.percentage();
    t1.getsalary(); 
    t1.read();

    return 0;
}