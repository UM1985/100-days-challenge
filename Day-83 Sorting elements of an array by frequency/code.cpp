#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

void Sort(int arr[], int size)
{
    map<int, int> freq;

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    vector<pair<int, int>> v;
    for (auto it : freq)
    {
        v.push_back({it.first, it.second});
    }

    sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b)
         {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second; });

    for (auto it : v)
    {
        cout << it.first << " occurs " << it.second << " times" << endl;
    }
}

int main()
{
    int arr[] = {4, 5, 4, 5, 6, 5, 6, 7, 8, 7, 8, 7, 8, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    Sort(arr, size);
}

// output : 3 occurs 1 times
//          6 occurs 2 times
//          4 occurs 3 times
//          5 occurs 3 times
//          7 occurs 3 times
//          8 occurs 3 times