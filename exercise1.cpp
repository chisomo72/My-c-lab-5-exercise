#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int dayUntilExpiration = rand() % 12;
    cout << "DAYS UNTIL EXPIRATION : " << dayUntilExpiration << endl;
    if (dayUntilExpiration == 0)
    {
        cout << "your subcription has expired ! " << endl;
    }
    else
    {
        if (dayUntilExpiration == 1)
        {
            cout << "your subscription expires within a day!!" << endl;
            cout << "Renew now and save 20% !" << endl;
        }
        else if (dayUntilExpiration <= 5)
        {
            cout << "your subscription expires " << dayUntilExpiration << " days" << endl;
            cout << "Renew now and save 10%! " << endl;
        }
        else if (dayUntilExpiration <= 10)
        {
            cout << " your subscription will expire soon . Renew now !" << endl;
        }
        else
        {
            cout << "you have an active subscription." << endl;
        }
    }
    return 0;
}