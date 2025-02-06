#include <iostream>
using namespace std;
int main()
{
    int num, factor;

    cout << "Enter the Number : ";
    cin >> num;
    cout << "Factors of " << num << " are ";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}
//input  : Enter the Number : 10
//output : Factors of 10 are 1 2 5 10