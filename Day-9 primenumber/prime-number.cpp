#include <iostream>
using namespace std;
int main()
{

    int n, count = 0;

    cout << "Please enter the value of n:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Entered value is prime";
    }
    else
    {
        cout << "Entered value is composite";
    }
}

//input  : Please enter the value of n: 5
//output : Entered value is prime