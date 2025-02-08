#include <iostream>
using namespace std;

int getbinary(int num)
{
    int rem=0, pow = 1, binary = 0;

    while (num != 0)
    {
        rem = num % 2;
        num /= 2;
        binary = binary + (rem *pow );
        pow *= 10;
    }

    return binary;
}

int main()
{
    int decimal;

    cout << "Enter the Decimal number : ";
    cin >> decimal;

    int binary = getbinary(decimal);

    cout << "Binary of " << decimal << " is " << binary;
}