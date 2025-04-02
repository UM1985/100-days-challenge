#include <iostream>
using namespace std;

bool numbersEqual(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        while (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
        }
        while (arr[i] % 3 == 0)
        {
            arr[i] /= 3;
        }

        if (arr[i] != arr[0])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int arr[] = {50, 75, 100};

    int size = sizeof(arr) / sizeof(arr[0]);

    if (numbersEqual(arr, size))
    {
        cout << "yes!";
    }
    else
    {
        cout << "No!";
    }
}