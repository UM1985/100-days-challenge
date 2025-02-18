#include <iostream>
using namespace std;
int main()
{
    int num, temp, sum = 0;

    cout << "Enter the Number : ";
    cin >> num;
    temp = num;

    for (int i = 1; i < temp; i++)
    {
        if (temp % i == 0)
        {
            sum += i;
        }
    }
    if (sum > num)
    {
        cout << num << " is an Abundant Number" << endl;
        cout << "The Abundance is: " << (sum - num);
    }
    else
    {
        cout << num << " is not an Abundant Number";
    }
}

//input  : Enter the Number : 24
//output : 24 is an Abundant Number
//         The Abundance is: 12