#include <iostream>
using namespace std;

int getHCF(int num1, int num2)
{

    if (num1 == 0)
    {
        return num2;
    }
    else if (num2 == 0)
    {
        return num1;
    }

    if (num1 == num2)
    {
        return num1;
    }

    if (num1 > num2)
    {
        return getHCF(num1 - num2, num2);
    }
    else
    {
        return getHCF(num1, num2 - num1);
    }
}

int main()
{

    int num1, num2;

    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;

    int hcf = getHCF(num1, num2);

    cout << "HCF of " << num1 << " & " << num2 << " is " << hcf;
}

//input  : Enter the first number : 96
//         Enter the second number : 56
//output : HCF of 96 & 56 is 8