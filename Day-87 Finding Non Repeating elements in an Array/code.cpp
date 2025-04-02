#include <iostream>
#include <algorithm>
using namespace std;

void Sort(int arr[], int size)
{
    sort(arr, arr + size);

    cout << "Non Repeating Elements in the given array : ";

    for (int i = 0; i < size; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i]<<" ";
        }
    }
}

int main()
{
    int arr[] = {4, 5, 4, 5, 6, 5, 6, 7, 8, 7, 8, 7, 8, 4, 3, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    Sort(arr, size);
}