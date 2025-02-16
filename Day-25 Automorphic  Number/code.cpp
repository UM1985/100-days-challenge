#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, temp, count = 0, reverse = 0, automorphic = 0;
    cout << "Enter the Number: ";
    cin >> num;
    temp = num;

    int square = num * num;

    while (temp > 0)
    {
        int last = temp % 10;
        temp /= 10;
        count++;
    }
    for (int i = 1; i <= count; i++)
    {
        reverse = reverse * 10 + (square % 10);
        square /= 10;
    }

    while (reverse > 0)
    {
        automorphic = automorphic * 10 + (reverse % 10);
        reverse /= 10;
    }
    if (automorphic == num)
    {
        cout << "Entered number is Automorphic!";
    }
    else
    {
        cout << "Entered number is not Automorphic!";
    }
}

// input  : Enter the Number: 76
// output : Entered number is Automorphic!