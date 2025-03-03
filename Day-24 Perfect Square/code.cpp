#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if (num < 0) {
        cout << "Negative numbers cannot be perfect squares.";
        return 0;
    }
    int squareroot = sqrt(num);
    
    if (squareroot * squareroot == num) {
        cout << "Given number is a perfect square!!";
    } else {
        cout << "Given number is not a perfect square!!";
    }
}

// input  : Enter the Number: 25
// output : Given number is a perfect square!!