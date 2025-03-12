#include <iostream>
#include <string>

using namespace std;

// Function to convert single digits to words
string convertSingleDigit(int n) {
    switch (n) {
        case 0: return "Zero";
        case 1: return "One";
        case 2: return "Two";
        case 3: return "Three";
        case 4: return "Four";
        case 5: return "Five";
        case 6: return "Six";
        case 7: return "Seven";
        case 8: return "Eight";
        case 9: return "Nine";
        default: return "";
    }
}

// Function to convert two digits to words (10 to 99)
string convertTwoDigits(int n) {
    string words[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    if (n < 10) {
        return convertSingleDigit(n);
    } else if (n < 20) {
        return teens[n - 10];
    } else {
        int tens = n / 10;
        int ones = n % 10;
        if (ones == 0) {
            return words[tens];
        } else {
            return words[tens] + " " + convertSingleDigit(ones);
        }
    }
}

// Function to convert three digits to words (100 to 999)
string convertThreeDigits(int n) {
    int hundreds = n / 100;
    int remainder = n % 100;

    string result = convertSingleDigit(hundreds) + " Hundred";

    if (remainder != 0) {
        result += " and " + convertTwoDigits(remainder);
    }

    return result;
}

// Main function to convert any number to words
string convertNumberToWords(int n) {
    if (n == 0) {
        return "Zero";
    } else if (n < 10) {
        return convertSingleDigit(n);
    } else if (n < 100) {
        return convertTwoDigits(n);
    } else if (n < 1000) {
        return convertThreeDigits(n);
    } else {
        return "Number too large to convert";
    }
}

int main() {
    int number;
    cout << "Enter a number (0 to 999): ";
    cin >> number;

    cout << "The number in words is: " << convertNumberToWords(number) << endl;

    return 0;
}

//input  : Enter a number (0 to 999): 453
//output : The number in words is: Four Hundred and Fifty Three
 