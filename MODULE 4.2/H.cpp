#include <iostream>
using namespace std;
int n = 2, i, subjects = 2, totalmarks;
class student
{
public:
    void getstudent()
    {
        int rollno[n];
        for (i = 0; i < n; i++)
        {
            cout << "Enter roll number of student " << i + 1 << ": ";
            cin >> rollno[i];
        }
        for (i = 0; i < n; i++)
        {
            cout << "Roll number of student " << i + 1 << " is " << rollno[i] << endl;
        }
    }
};
class test : public student
{
public:
    void testmarks()
    {
        int marks[n];
        for (i = 0; i < n; i++)
        {
            cout << "Enter marks of subject no " << i + 1 << ": ";
            cin >> marks[i];
        }
        for (i = 0; i < n; i++)
        {
            cout << "Marks of student " << i + 1 << " is " << marks[i] << endl;
        }
        for (i = 0; i < n; i++)
        {
            totalmarks = totalmarks + marks[i];
        }
    }
};
class result : public test
{
public:
    void print()
    {
        cout << "Total marks = " << totalmarks;
    }
};
int main()
{
    result r1;
    r1.getstudent();
    r1.testmarks();
    r1.print();

    return 0;
}