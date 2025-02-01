#include <iostream>
using namespace std;
int main()
{
    int num, reverse = 0;
    cout << "Enter any number: ";
    cin >> num;
    for (; num > 0;)
    {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }
    cout << "reverse number is " << reverse;
}

//input  : Enter any number  :143
//output : reverse number is  341