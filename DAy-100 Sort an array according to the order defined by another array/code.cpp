#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to sort arr1[] according to arr2[]
vector<int> sortByOrder(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> freq; // Store frequency of elements in arr1
    for (int num : arr1) {
        freq[num]++;
    }

    vector<int> result;
    
    // Place elements in arr1 according to the order in arr2
    for (int num : arr2) {
        if (freq.find(num) != freq.end()) {
            while (freq[num]--) {
                result.push_back(num);
            }
            freq.erase(num);
        }
    }

    // Store remaining elements and sort them
    vector<int> remaining;
    for (auto it : freq) {
        while (it.second--) {
            remaining.push_back(it.first);
        }
    }

    sort(remaining.begin(), remaining.end()); // Sort the remaining elements

    // Add sorted remaining elements to result
    result.insert(result.end(), remaining.begin(), remaining.end());

    return result;
}

int main() {
    vector<int> arr1 = {5, 3, 1, 4, 2, 2, 8, 6, 7, 5, 5, 9};
    vector<int> arr2 = {2, 1, 4, 3, 6};

    vector<int> sortedArr = sortByOrder(arr1, arr2);

    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
