#include <iostream>
using namespace std;

void generateBinaryNumbers(int n, string current, int ones, int zeros) {
    if (current.length() == n) {
        if (ones >= zeros) {
            cout << current << endl;
        }
        return;
    }
    
    // Add '1' and recurse
    generateBinaryNumbers(n, current + "1", ones + 1, zeros);
    
    // Add '0' only if it does not exceed ones count
    if (ones > zeros) {
        generateBinaryNumbers(n, current + "0", ones, zeros + 1);
    }
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    
    generateBinaryNumbers(n, "", 0, 0);
    
    return 0;
}


//input  : Enter the value of N: 4

//output : 1111 1110 1101 1100 1011 1010