#include <iostream>
#include <unordered_map>
using namespace std;

bool isSubset(int arr1[], int size1, int arr2[], int size2)
{
    unordered_map<int, int> freq1, freq2;

    // Count occurrences of each element in arr1
    for (int i = 0; i < size1; i++)
        freq1[arr1[i]]++;

    // Count occurrences of each element in arr2
    for (int i = 0; i < size2; i++)
        freq2[arr2[i]]++;

    // Check if arr2's frequency requirements are met by arr1
    for (auto it : freq2)
    {
        if (freq1[it.first] < it.second)  // If arr1 has fewer occurrences
            return false;
    }
    
    return true;
}

int main()
{
    int arr1[] = {4, 3, 2, 1, 5, 6, 7, 8}; // Only one '3'
    int arr2[] = {3, 1, 3, 6, 7, 8}; // Needs two '3's

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, size1, arr2, size2))
        cout << "arr2[] is a subset of arr1[]";
    else
        cout << "arr2[] is not a subset of arr1[]";

    return 0;
}
