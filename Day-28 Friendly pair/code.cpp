#include <iostream>
using namespace std;
int factor(int num)
{

    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
        return sum;
    }
}

int main()
{

    int num1, num2;

    cout << "Enter the first Number : ";
    cin >> num1;
    cout << "Enter the second Number : ";
    cin >> num2;

    int sum1 = factor(num1);
    int sum2 = factor(num2);

    if ((sum1 / num1) == (sum2 / num2))
    {
        cout << num1 << " & " << num2 << " are friendly pair!";
    }
    else
    {
        cout << num1 << " & " << num2 << " are not friendly pair!";
    }
}
//input  : Enter the first Number : 30
//         Enter the second Number : 140
//output : 30 & 140 are friendly pair!
