#include <iostream>
#include <cmath>

using namespace std;

// Function to count divisors of a number
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; // Count the divisor 'i'
            if (i != n / i)
                count++; // Count the corresponding pair divisor
        }
    }
    return count;
}

// Function to find numbers with exactly x divisors up to a given limit
int findNumbersWithXDivisors(int limit, int x) {
    int count = 0;
    for (int num = 1; num <= limit; num++) {
        if (countDivisors(num) == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int x = 4; // Example: Find numbers with exactly 4 divisors
    int limit = 100; // Range to check
    cout << "Count of numbers with exactly " << x << " divisors up to " << limit << " is: " 
         << findNumbersWithXDivisors(limit, x) << endl;
    
}