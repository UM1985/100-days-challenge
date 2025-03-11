#include <iostream>
using namespace std;
int main()
{
    int num, temp, digit = 0;
    cout << "Enter any number :";
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        digit++;
        temp /= 10;
    }
    cout << "Number of digit in " << num << " is " << digit;
}

// input  : Enter any number :3433
// output : Number of digit in 3433 is 4
