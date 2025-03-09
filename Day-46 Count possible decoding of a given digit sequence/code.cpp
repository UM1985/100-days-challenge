#include <iostream>
using namespace std;

int countDecodings(string digits) {
    int n = digits.length();
    if (n == 0 || digits[0] == '0') return 0; 

    int prev1 = 1, prev2 = 1; 
    int current = 0;
    
    for (int i = 1; i < n; i++) {
        current = 0;
        if (digits[i] != '0') {
            current += prev1; 
        }
        
        int twoDigit = (digits[i - 1] - '0') * 10 + (digits[i] - '0');
        if (twoDigit >= 10 && twoDigit <= 26) {
            current += prev2; 
        }
        
        prev2 = prev1; 
        prev1 = current; 
    }
    
    return prev1;
}

int main() {
    string digits;
    cout << "Enter the digit sequence: ";
    cin >> digits;
    
    int result = countDecodings(digits);
    cout << "Possible decodings: " << result << endl;
    
    return 0;
}


//input  : Enter the digit sequence: 248
//output : Possible decodings: 2
