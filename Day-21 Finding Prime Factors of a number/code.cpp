#include <iostream>
using namespace std;
int main()
{

    int num, factor;

    cout << "Enter the Number : ";
    cin >> num;

    cout << "prime factors are ";

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            // cout << i << " ";

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
    }
}