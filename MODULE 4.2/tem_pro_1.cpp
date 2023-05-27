#include <iostream>
using namespace std;
template <class temp>
class demo
{
public:
    void swap(temp x, temp y)
    {
        temp t;
        t = x;
        x = y;
        y = t;
        cout << "a= " << x << "   b= " << y << endl;
    }
};
int main()
{
    double a = 47, b = 56.45;
    int c = 'D', d = 'J';

    demo<double> d1;
    demo<char> d2;
    d1.swap(a, b);
    d2.swap(c, d);
    return 0;
}