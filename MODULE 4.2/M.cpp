#include <iostream>
using namespace std;
class parent
{
public:
    int a = 10, b = 15;

    void input()
    {
        cout << "value of a= " << a << " b= " << b << endl;
        // cin >> a >> b;
    }

    friend void dhaval(parent);
};
class child : public parent
{
public:
    int hello = 79, world = 69;
    void getdata()
    {
        cout << "value of hello= " << hello << " world= " << world << endl;
    }
};
void dhaval(parent p)
{
    p.a = p.b - p.a + p.a;
    p.b = p.a - p.b + p.b;
    cout << "new a= " << p.a << " new b= " << p.b;
}
int main()
{
    parent p1, p2;
    p1.input();
    dhaval(p1);

    return 0;
}