#include<bits/stdc++.h>
using namespace std;

int largest_element(int n, int arr[]) {
    if (n == 1) return arr[0];  
    return max(arr[n - 1], largest_element(n - 1, arr));
}

// Driver code
int main() {
    int arr[] = {243, 443, 328, 374, 167};
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Largest Element in the given array is : " << largest_element(n, arr);
}
