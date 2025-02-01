#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int num1, num2;

    cout << "Enter the starting Number:";
    cin >> num1;
    cout << "Enter the ending Number:";
    cin >> num2;

    for (int i = num1; i <= num2; i++)
    {
        int digit = 0, armstrong = 0, original = i, temp = i, lastdigit;
        while (temp > 0)
        {
            temp = temp / 10;
            digit++;
        }
        temp = i;
        while (temp > 0)
        {
            lastdigit = temp % 10;
            armstrong = armstrong + pow(lastdigit, digit);
            temp = temp / 10;
        }
        if (armstrong == i)
        {
            cout << i << " ";
        }
    }
}

// input  : Enter the starting Number:100 , Enter the ending Number:400
// output : 153, 370 , 371