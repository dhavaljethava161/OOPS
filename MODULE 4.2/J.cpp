// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;
class demo
{
public:
    int matrix_1d[5], i;

    void getdata()
    {
        cout << "Enter value of 1d matrix :" << endl;
        for (i = 0; i < 5; i++)
        {
            cin >> matrix_1d[i];
        }
    }
    void showdata()
    {
        cout << "Matrix: ";
        for (i = 0; i < 5; i++)
        {
            cout << matrix_1d[i] << "  ";
        }
        cout << endl;
    }
    void operator+(demo d)
    {
        int ans[5];
        for (i = 0; i < 5; i++)
        {
            ans[i] = matrix_1d[i] + d.matrix_1d[i];
            cout << ans[i] << "  ";
        }
    }
};
int main()
{
    demo d1, d2;
    d1.getdata();
    d2.getdata();
    d1.showdata();
    d2.showdata();
    d1 + d2;

    return 0;
}