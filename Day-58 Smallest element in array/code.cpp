#include<bits/stdc++.h>
using namespace std;

int smallest_element(int n, int arr[]) {
    if (n == 1) return arr[0];  
    return min(arr[n - 1], smallest_element(n - 1, arr));
}

// Driver code
int main() {
    int arr[] = {243, 443, 328, 374, 167};
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Smallest Element in the given array is : " << smallest_element(n, arr);
}

//output : Smallest Element in the given array is : 167