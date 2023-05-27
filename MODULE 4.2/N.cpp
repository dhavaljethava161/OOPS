// Write a program to find the max number from given two numbers using friend function 
#include <iostream>
using namespace std;
class demo2;
class demo
{
private:
    int a;

public:
    void frd()
    {
        cout << "A= " << endl;
        cin >> a;
    }
    friend void max(demo d1, demo2 d2);
};
class demo2
{
private:
    int b;

public:
    void frd2()
    {
        cout << "b=";
        cin >> b;
    }
    friend void max(demo d1, demo2 d2);
};
void max(demo d1, demo2 d2)
{
    int rem, max, rem2, max2;
    while (d1.a > 0)
    {
        rem = d1.a % 10;
        if (rem > max)
        {
            max = rem;
        }
        d1.a = d1.a / 10;
    }
    while (d2.b > 0)
    {
        rem2 = d2.b % 10;
        if (rem2 > max2)
        {
            max2 = rem2;
        }
        d2.b = d2.b / 10;
    }
    if (d1.a > d2.b)
    {
        cout << "a is greater";
    }
    else
    {
        cout << "b is greater";
    }
}
int main()
{
    demo d1;
    demo2 d2;
    d1.frd();
    d2.frd2();
    max(d1, d2);
    return 0;
}