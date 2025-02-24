#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
    char hexa[100];
    int sum = 0, j = 0, length;
    cout << "Enter the Hexadecimal value : ";
    cin >> hexa;

    length = strlen(hexa);

    for (int i = length - 1; i >= 0; i--)
    {
        if (hexa[i] >= '0' && hexa[i] <= '9')
        {
            sum += (hexa[i] - 48) * pow(16, j);
            j++;
        }
        else if (hexa[i] >= 'A' && hexa[i] <= 'F')
        {
            sum += (hexa[i] - 55) * pow(16, j);
            j++;
        }
    }
    cout <<"Decimal value of given hexa is " << sum;
}

//input  : Enter the Hexadecimal value : 23E
//output : Decimal value of given hexa is 574