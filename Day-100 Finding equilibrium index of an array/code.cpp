#include <iostream>
#include <vector>
using namespace std;

int findEquilibriumIndex(const vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr)
        totalSum += num;

    int leftSum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        totalSum -= arr[i];  

        if (leftSum == totalSum)
            return i; 

        leftSum += arr[i];
    }

    return -1; 
}

int main() {
    vector<int> arr = { -7, 1, 5, 2, -4, 3, 0 };

    int index = findEquilibriumIndex(arr);

    if (index != -1)
        cout << "Equilibrium index is: " << index << endl;
    else
        cout << "No equilibrium index found." << endl;

    return 0;
}

// output : Equilibrium index is: 3