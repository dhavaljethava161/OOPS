#include <iostream>
using namespace std;
template <class T>
class demo
{

public:
    void sort()
    {
        // T a[5] = {1.5, 6.8, 5.74, 5.73, 8.19};
        int i, j, n;
        // a[i], a[j]
        T temp = 0;
        cout << "Enter size of array: ";
        cin >> n;
        T a[n];
        for (i = 0; i < n; i++)
        {
            // cout << i << " ";
            cin >> a[i];
            // cout << endl;
        }
        for (i = 0; i < n; i++)
        {
            // cout << a[i] << "\n";
            for (j = i + 1; j < n; j++)
            {
                // cout << a[j] << "\n";
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << " " << a[i];
        }
    }
};
int main()
{
    demo<double> d1;
    d1.sort();
    return 0;
}
