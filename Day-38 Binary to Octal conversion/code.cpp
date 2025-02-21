#include <iostream>
#include <math.h>
using namespace std;

// Function to convert binary to octal
int binaryToOctal(long long binary) {
    int octal = 0, decimal = 0, i = 0;

    // Convert Binary to Decimal
    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }

    i = 1;
    // Convert Decimal to Octal
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    return octal;
}

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Octal equivalent: " << binaryToOctal(binary) << endl;
    return 0;
}
