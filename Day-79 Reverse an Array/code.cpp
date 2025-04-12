#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int arr[], int size)
{

    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[] = {43, 53, 55,76, 87, 48, 78};

    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr , size);
}

//output : 78 48 87 76 55 53 43 