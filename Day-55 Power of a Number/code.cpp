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