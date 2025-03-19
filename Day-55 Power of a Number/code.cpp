#include <bits/stdc++.h>
using namespace std;

// Recursive Function
int power(int base, int x)
{

    if (x == 0)
        return 1;

    return (base * power(base, x - 1));
}

int main()
{
    int base, pow;

    cout << "Enter the Base Value : ";
    cin >> base;
    cout << "Enter the power Value : ";
    cin >> pow;
    cout << "Base " << base << " power " << pow << " is "<<power(base, pow);
}

//input  : Enter the Base Value : 2
//         Enter the power Value : 3
//output : Base 2 power 3 is 8
