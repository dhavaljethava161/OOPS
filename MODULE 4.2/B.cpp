#include <iostream>
using namespace std;
class datamember
{
public:
    int account_no, balance_available = 0, bal_depo, depo, withdraw_amt, bal_withdraw;
    string namedepositor, type_of_ac;
    void getvalue()
    {
        cout << "Name of depositor: ";
        getline(cin, namedepositor);
        cout << "Type of account: ";
        getline(cin, type_of_ac);
        cout << "Account number: ";
        cin >> account_no;
        cout << "Balance amount in account: " << balance_available;
        cout << "\n";
    }
    void deposit()
    {
        cout << "Enter your amount to deposit: ";
        cin >> depo;
        balance_available = depo + balance_available;
    }
    void withdraw()
    {
        cout << "Balance available: " << balance_available;
        cout << "\n";
        cout << "Enter amount to withdraw: ";
        cin >> withdraw_amt;
        balance_available = balance_available - withdraw_amt;
    }
    void check()
    {
        cout << "Available balance is  " << balance_available;
    }
};
int main()
{
    cout << "Using Object from now\n";
    datamember d1;
    d1.getvalue();
    d1.deposit();
    d1.withdraw();
    d1.check();
    return 0;
}