#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, temp, temp2, temp3, count = 0, reverse = 0, automorphic = 0;
    cout << "Enter the Number: ";
    cin >> num;
    temp = num;
    if (num < 0)
    {
        cout << "Negative numbers cannot be perfect squares.";
        return 0;
    }
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
        cout << "Entered number is Automorphic!";
    }
}
