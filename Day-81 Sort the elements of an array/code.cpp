#include <iostream>
#include <algorithm>
using namespace std;

void Sort(int arr[], int size)
{
    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 3, 5, 8, 6, 0, 10, 1, 9, 7};

    int size = sizeof(arr) / sizeof(arr[0]);

    Sort(arr, size);
}