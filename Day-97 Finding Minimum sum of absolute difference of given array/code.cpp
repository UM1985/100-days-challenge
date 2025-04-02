#include <iostream>
#include <limits.h>
using namespace std;

void minSum(int arr[], int size,int &result)
{

   

    for (int i = 0; i < size; i++)
    {
        int sum = 0; // variable to hold the sum
        for (int j = 0; j < size; j++)
        {
            int x = arr[i] - arr[j];
            if (x < 0)
                sum += -x;

            else
                sum += x;
        }

        result = min(result, sum);
    }
}

int main()
{
    int arr[] = {2, 4, 5, 3};
    int result = INT_MAX;
    int size = sizeof(arr) / sizeof(arr[0]);

    minSum(arr , size, result);

    cout << "Minimum Absolute Difference Sum is " << result;
    return 0;
}