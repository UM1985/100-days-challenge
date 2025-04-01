#include <iostream>
using namespace std;

int lastnonzerodigit(int factorial)
{
    while (factorial % 10 == 0)
    {
        factorial /= 10;
    }

    return factorial % 10;
}

// Recursive function to calculate the factorial
int fact(int num)
{

    if (num <= 1) // Base Condition
        return 1;

    return num * fact(num - 1);
}

// Driver Code
int main()
{

    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int factorial = fact(num);

    int lastd = lastnonzerodigit(factorial);

    cout<<"Last non-zero digit in factorial is "<<lastd;
}

//input  : Enter the number : 5
//output : Last non-zero digit in factorial is 2
