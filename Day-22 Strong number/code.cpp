#include <iostream>
using namespace std;
int main()
{

    int num, sum = 0, lastdigit, temp;

    cout << "Enter the Number: ";
    cin >> num;
    temp = num;

    while (temp > 0)
    {
        lastdigit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= lastdigit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        temp = temp / 10;
    }

    if (sum == num)
    {
        cout << num << " is strong Number!";
    }
    else
    {
        cout << num << " is not strong Number!";
    }
}

// input  : Enter the Number: 145
// output : 145 is strong Number!