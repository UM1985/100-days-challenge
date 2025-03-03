#include <iostream>
#include <math.h>

using namespace std;

int OctalTobinary(int octal)
{
    int binary = 0, decimal = 0, i = 0;

    while (octal != 0)
    {
        int digit = octal % 10;
        decimal += digit * pow(8, i);
        octal /= 10;
        i++;
    }

    i = 1;
    while (decimal != 0)
    {
        octal += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }

    return octal;
}

int main()
{
    int octal;
    cout << "Enter a Octal number: ";
    cin >> octal;

    cout << "Binary equivalent: " << OctalTobinary(octal) << endl;
    return 0;
}

// input  : Enter a Octal number: 1274
// output : Binary equivalent:  1010111100