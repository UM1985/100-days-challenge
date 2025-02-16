#include <iostream>
using namespace std;
int main()
{
    int n1, n2, sum = 0;
    cout << "Enter the value of n1: ";
    cin >> n1;
    cout << "Enter the value of n2: ";
    cin >> n2;

    for (int i = n1; i <= n2; i++)
    {
        sum += i;
    }
    cout << "Sum = ";
    cout << sum;
}
//input
// Enter the value of n1: 200
// Enter the value of n2: 300
//output
// Sum = 25250