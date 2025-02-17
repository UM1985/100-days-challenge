#include <iostream>
using namespace std;
int checkprime(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return n;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int num;

    cout << "Enter any positive Number : ";
    cin >> num;

    for (int i = 1; i <= num/2; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i + j == num)
            {
                int num1 = checkprime(i);
                int num2 = checkprime(j);

                if (num1 != -1 && num2 != -1)
                {
                    cout << i << " + " << j << " = " << num << endl;
                }
            }
        }
    }
}