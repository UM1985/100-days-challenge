#include<bits/stdc++.h>
using namespace std;

int largest_element(int size, int arr[]) {
    if (size == 1) return arr[0];  
    return max(arr[size - 1], largest_element(size - 1, arr));
}

// Driver code
int main() {
    int arr[] = {243, 443, 328, 374, 167};
    int size = sizeof(arr) / sizeof(arr[0]); 
    cout << "Largest Element in the given array is : " << largest_element(size, arr);
}


//output : Largest Element in the given array is : 443