#include<iostream>
#include<limits.h>
using namespace std;

int Greatest(int arr[] , int size){
int n = INT_MIN;

for(int i =0 ; i <size ; i++){
     if(arr[i]>n){
        n = arr[i];
     }
}
 return n;
}

int main(){

    int arr[] = {3,44,665,554,6432,544,3634,66,443,345};

    int size = sizeof(arr)/sizeof(arr[1]);

    int greatest = Greatest(arr , size);

    cout<<"Greatest number in the given array is "<<greatest;
      
}

//output : Greatest number in the given array is 6432