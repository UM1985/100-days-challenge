#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value of n ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum = "<< sum;;
}

//input = 100
//output = 5050