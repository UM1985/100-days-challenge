#include <iostream>
using namespace std;
int main()
{
    int base, exponent, power = 1;

    cout << "Enter the value for Base: ";
    cin >> base;
    cout << "Enter the value for Exponent: ";
    cin >> exponent;

    for (int i = 1; i <= exponent; i++)
    {
        power *= base;
    }
    cout << "power = " << power;
}

// input  : Enter the value for Base: 3 , Enter the value for Exponent: 2
// output : power = 9