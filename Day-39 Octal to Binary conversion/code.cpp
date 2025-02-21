#include <iostream>
#include <math.h>

using namespace std;

// Function to convert octal to  binary
int OctalTobinary(int octal) {
    int binary = 0, decimal = 0, i = 0;

    // Convert Binary to Decimal
    while (octal != 0) {
        int digit = octal % 10;
        decimal += digit * pow(8, i);
        octal /= 10;
        i++;
    }

    i = 1;
    // Convert Decimal to Octal
    while (decimal != 0) {
        octal += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }

    return octal;
}

int main() {
    int octal;
    cout << "Enter a Octal number: ";
    cin >> octal;

    cout << "Octal equivalent: " << OctalTobinary(octal) << endl;
    return 0;
}
