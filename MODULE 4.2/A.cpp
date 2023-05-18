
// WAP to create simple calculator using class
#include <iostream>
    using namespace std;

class calc
{
public:
    double a;
    double b;
    double sum;
    void calculator()
    {
        cout << "Enter two value : ";
        cin >> a >> b;
        sum = a + b;
        cout << "Addition of two value is " << sum << endl;
        sum = a - b;
        cout << "Substraction of two value is " << sum << endl;
        sum = a * b;
        cout << "Multiplication of two value is " << sum << endl;
        sum = a / b;
        cout << "Division of two value is " << sum << endl;
    }
};
int main()
{
    calc c1;
    c1.calculator();

    return 0;
}