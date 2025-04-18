#include <iostream>
#include <algorithm>
using namespace std;

void distinctElement(int arr[], int size)
{
    sort(arr, arr + size);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    cout<<"Total distinct elements in given array is "<<count;
}

int main()
{
    int arr[] = {4,5,6,5,4,6,7,8,7,7,7,6,7,8,2};

    int size = sizeof(arr) / sizeof(arr[0]);

    distinctElement(arr, size);
}

// output : Total distinct elements in given array is 6