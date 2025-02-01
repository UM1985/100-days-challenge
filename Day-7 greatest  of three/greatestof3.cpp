#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    if (a > b && a > c)
    {
        // largest = a;
        cout << "largest number is :";
        cout << a;
    }
    else if (b > a && b > c)
    {
        // largest = b;
        cout << "largest number is :";
        cout << b;
    }
    else
    {
        // largest = c;
        cout << "largest number is :";
        cout << c;
    }
}

// input = 10 34 2
// output = largest number is : 34