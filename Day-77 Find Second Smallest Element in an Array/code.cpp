#include <iostream>
#include <limits.h>
using namespace std;

int Second_smallest(int arr[], int size)
{

    int min1, min2;

    if (arr[0] < arr[1])
    {
        min1 = arr[0];
        min2 = arr[1];
    }
    else
    {
        min1 = arr[1];
        min2 = arr[0];
    }

    for (int i = 2; i < size; i++)
    {

        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }
    return min2;
}

int main()
{

    int arr[] = {3, 44, 665, 554, 6432, 544, 3634, 66, 443, 345 , 5, 34,54};

    int size = sizeof(arr) / sizeof(arr[1]);

    int smallest = Second_smallest(arr, size);

    cout << "Second Smallest Element in the given array is " << smallest << endl;
}

// output : Second Smallest Element in the given array is 5