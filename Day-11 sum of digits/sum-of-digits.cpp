#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;

    cout << "Enter any number: ";
    cin >> num;

    for (; num > 0;)
    {
        sum += (num % 10);
        num /= 10;
    }
    cout << "Sum of digits is " << sum;
}

//Input  : Enter any number: 145
//Output : Sum of digits is 10