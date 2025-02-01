#include <iostream>
using namespace std;
int main()
{
    int n1, n2;

    cout << "Please enter the value of n1: ";
    cin >> n1;
    cout << "Please enter the value of n2: ";
    cin >> n2;

    cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";

    for (int i = n1; i <= n2; i++)
    {
        if (i < 2)
            continue;

        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
//input  :Please enter the value of n1: 1, Please enter the value of n2: 20
//output :Prime numbers between 1 and 20 are: 2 3 5 7 11 13 17 19
