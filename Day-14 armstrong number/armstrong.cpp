#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, count = 0, armstrong = 0, lastdigit, original, temp;
    cout << "Enter the number: ";
    cin >> num;
    original = num;
    temp = num;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    while (num > 0)
    {
        lastdigit = num % 10;
        armstrong = armstrong + pow(lastdigit, count);
        num = num / 10;
    }
    if (armstrong == original)
    {
        cout << "Entered number is armstrong!";
    }
    else
    {
        cout << "Entered number is not armstrong!";
    }
}
// input  : Enter the number: 1634
// output : Entered number is armstrong!