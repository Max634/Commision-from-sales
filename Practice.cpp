// Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("color 1f");
    cout << fixed << setprecision(2);
    int sales = 0;
    int loopcv = 1;
    const double rate = 0.2;
    double commission = 0.0;
   
    cout << "First salesperson's sales :";
    cin >> sales;
    while (loopcv > 0 && loopcv < 100)
    {
        commission = sales * rate;
        cout << "Commission : $" << commission << endl;
        cout << "Fist salesperson's sales: ";
        cin >> sales;
    }
    
    cout << "Thank you\n";
    system("pause");
    return 0;
}


