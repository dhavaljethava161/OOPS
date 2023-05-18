// Assume a class cricketer is declared. Declare a derived class batsman from 
// cricketer. Data member of batsman. Total runs, Average runs and best 
// performance. Member functions input data, calculate average runs, Display 
// data. (Single Inheritance) 

#include <iostream>
using namespace std;

class cricketer
{
public:
    double run = 0, total_run = 0;
    double array_run[10];
    void inputdata()
    {
        cout << "Number of cricketers is 11";
    }

    void runs()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "Enter run of batsmen no " << i + 1 << " : ";
            cin >> array_run[i];
        }
    }
    void totalrun()
    {
        for (int i = 0; i < 10; i++)
        {
            total_run = total_run + array_run[i];
        }
        cout << "total is " << total_run << endl;
    }
};
class batsmen : public cricketer
{
public:
    double avg_run, performance = 0, best_run = 0;

    void bestperformance()
    {
        for (int i = 0; i < 10; i++)
        {
            if (array_run[i] > array_run[i + 1])
            {
                performance = array_run[i];
                if (performance > best_run)
                {
                    best_run = performance;
                }
            }
        }
        cout << "Best performance is " << best_run << endl;
    }

    void averageruns()
    {
        avg_run = total_run / 10;
        cout << "Average run is " << avg_run << endl;
    }
};
int main()
{
    batsmen b1;
    b1.runs();
    b1.totalrun();
    b1.bestperformance();
    b1.averageruns();

    return 0;
}