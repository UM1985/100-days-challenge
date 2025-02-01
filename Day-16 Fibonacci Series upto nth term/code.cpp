#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the value for num: ";
    cin >> num;
    int n1 = 0, n2 = 1, fibonacci = 0;

    cout << n1 << "," << n2;

    for (int i = 2; i < num; i++)
    {
        fibonacci = n1 + n2;
        n1 = n2;
        n2 = fibonacci;

        cout << "," << fibonacci;
    }
}

// input
// Enter the value for num: 15
// output
// 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377