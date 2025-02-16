#include <iostream>
using namespace std;
int main()
{
    int num, temp, sum = 0;

    cout << "Enter any number: ";
    cin >> num;
    temp = num;
    for (; temp > 0;)
    {
        sum += (temp % 10);
        temp /= 10;
    }
    if (num % sum == 0)
    {
        cout << num << "is divisible by" << sum << "so" << num << "is a Harshad Number.";
    }
    else
    {
        cout << num << " is not divisible by " << sum << " so " << num << " is not a Harshad Number.";
    }
}
//input  : Enter any number: 23
//output : 23 is not divisible by 5 so 23 is not a Harshad Number.