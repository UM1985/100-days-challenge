#include <iostream>
using namespace std;

void isPalindrome(int arr[], int size)
{

  

    for (int i = 0; i < size; i++)
    {   int rev = 0;
        int num = arr[i];
        while (num > 0)
        {
            rev = rev * 10 + (num % 10);
            num /= 10;
        }

        num = arr[i];
        if (rev == num)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{

    int arr[] = {434, 555, 6676, 65788, 6565, 887788, 453};

    int size = sizeof(arr) / sizeof(arr[0]);

    isPalindrome(arr, size);
}