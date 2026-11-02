#include <iostream>
using namespace std;
double triangleArea(double base, double height)
{
    return 0.5 * base * height;
}
double rectangleArea(double length, double width)
{
    return width * length;
}
double squareArea(double side)
{
    return side * side;
}
int main()

{
    double length;
    double width;
    double base;
    double height;
    double side;
    int choice;
    do
    {
        cout << "AREA CALCULATION" << endl;
        cout << "1.Triangle" << endl;
        cout << "2.rectangle" << endl;
        cout << "3.square " << endl;
        cout << "4.quit" << endl;
        cout << "=======================================" << endl;
        cout << "Enter your choice  " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter base  : ";
            cin >> base;
            cout << "Enter height : ";
            cin >> height;
            cout << "AREA OF TRIANGLE IS " << triangleArea(base, height) << endl;
            break;
        case 2:
            cout << "Enter length : ";
            cin >> length;
            cout << "Enter width : ";
            cin >> width;
            cout << "THE AREA OF RECATANGLE IS " << rectangleArea(length, width) << endl;
            break;
        case 3:
            cout << "Enter sise";
            cin >> side;
            cout << "THE AREA OF SQUARE IS " << squareArea(side) << endl;
            break;
        case 4:
            cout << "program terminated !" << endl;
            break;
        default:
            cout << "invalid input .try again please " << endl;
        }
    } while (choice != 4);
    return 0;
}