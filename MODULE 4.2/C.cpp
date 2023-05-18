// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;

inline void cube(double s)
{
    double cube = s * s * s;
    cout << cube;
}
int main()
{
    double a;
    cout << "Enter value for cube: ";
    cin >> a;

    cout << "Cube of " << a << " is ";
    cube(a);

    return 0;
}