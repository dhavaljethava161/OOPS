// Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
using namespace std;
class demo
{
public:
    string name = "dhaval ", surname = "jethava";
    void showdata()
    {
        cout << "name : " << name << endl
             << "surname : " << surname << endl;
    }
    void operator+(demo s)
    {
        name = name + s.surname;
        surname = surname + s.name;
        cout << "operator overloading " << name;
    }
};
int main()
{
    demo d1, d2;

    d1.showdata();
    // d2.showdata();
    d1 + d2;

    return 0;
}