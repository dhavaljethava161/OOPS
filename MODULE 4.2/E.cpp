#include <iostream>
using namespace std;
class calculator
{
public:
    int a = 10, b = 20, sum;
    calculator()
    {
        sum = a + b;
        cout << "Addition of " << a << " and " << b << "= " << sum << endl;
    }
    calculator(int q)
    {
        sum = q - b;
        cout << "Substraction of " << q << " and " << b << "= " << sum << endl;
    }
    calculator(int w, int e)
    {
        sum = w * e;
        cout << "Multiplication of " << w << " and " << e << "= " << sum << endl;
    }
    calculator(int r, int t, int y)
    {
        sum = r / t;
        cout << "Division of " << r << " and " << t << "= " << sum << endl;
    }
};
int main()
{
    calculator c1, c2(25), c3(30, 2), c4(20, 10, 30);
    return 0;
}