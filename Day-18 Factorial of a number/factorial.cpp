#include <iostream>
using namespace std;
int main()
{

    int n, factorial = 1;
    cout << "Enter the Number : ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    cout <<"factorial of " <<n<<" is "<< factorial;
}

//input  : Enter the Number : 5
//output : factorial of 5 is 120


// 5 = 5*4*3*2*1;
// 4=  4*3*2*1;
// 4=  1*2*3*4;