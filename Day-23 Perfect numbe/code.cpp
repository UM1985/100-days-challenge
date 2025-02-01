#include <iostream>
using namespace std;
int main()
{

    int num, sum = 0, temp;

    cout << "Enter the number: ";
    cin >> num;
    temp = num;
    for (int i = 1; i < temp; i++)
    {
        if (temp % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        cout << num << " is perfect Number!";
    }
    else
    {
        cout << num << " is not perfect Number!";
    }
}