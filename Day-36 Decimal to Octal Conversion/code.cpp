#include <iostream>
using namespace std;

int getoctal(int num)
{
    int rem=0, pow = 1, octal = 0;

    while (num != 0)
    {
        rem = num % 8;
        num /= 8;
        octal = octal + (rem *pow );
        pow *= 10;
    }

    return octal;
}

int main()
{
    int decimal;

    cout << "Enter the Decimal number : ";
    cin >> decimal;

    int octal = getoctal(decimal);

    cout << "Binary of " << decimal << " is " << octal;
}