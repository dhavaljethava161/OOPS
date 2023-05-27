// Write a program to Mathematic operation like Addition, Subtraction, 
// Multiplication, Division Of two number using different parameters and 
// Function Overloading


#include <iostream>
using namespace std;
class one
{
public:
    int a = 10, b = 20;

    void calculation()
    {
        double addition = a + b;
        cout << "Addition of " << a << " and " << b << " is " << addition << endl;
    }
    void calculation(double c, double d)
    {

        double substraction = c - d;
        cout << "Substraction of " << c << " and " << d << " is " << substraction << endl;
    }
    void calculation(double e, double f, double g)
    {
        double multi = e * f;
        cout << "Multiplication of " << e << " and " << f << " is " << multi << endl;
    }
    void calculation(double h, double i, double j, double k)
    {
        double div = h / i;
        cout << "Division of " << h << " and " << i << " is " << div << endl;
    }
};
int main()
{
    class one o1;

    o1.calculation();
    o1.calculation(25, 36);
    o1.calculation(10, 9, 54);
    o1.calculation(50, 10, 56, 78);

    return 0;
}
