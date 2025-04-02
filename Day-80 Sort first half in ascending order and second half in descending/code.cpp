#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

void Sort(int arr[], int size)
{
    int mid = size / 2;
    sort(arr, arr + size);

    sort(arr + mid, arr + size, greater<int>());

    //    for(int element : arr){
    // cout<<element <<" ";
    //  }

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