#include <iostream>
using namespace std;
int main()
{

    int num1, num2;

    cout << "Enter the first Number : ";
    cin >> num1;
    cout << "Enter the second Number : ";
    cin >> num2;
    cout << "The Greatest Common Divisor of " << num1 << " and " << num2 << " is ";
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else
        {
            num2 -= num1;
        }
    }

    cout << num1;
}