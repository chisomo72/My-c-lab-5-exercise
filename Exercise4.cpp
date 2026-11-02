#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer between 5 and 10 :" << endl;
    cin >> number;
    while (number < 5 && number > 10)
    {
        cout << "invalid input. Enter the number again !! ";
        cin >> number;
    }
    cout << "your input value has been accepted " << endl;
    return 0;
}