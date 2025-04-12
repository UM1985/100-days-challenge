#include<iostream>
using namespace std;

int Sum( int arr[], int size){

int sum=0;

for(int i =0; i<size;i++){
    sum += arr[i];
}

return sum;

}

int main(){

int arr[] = {1,2,3,4,5};

int size = sizeof(arr)/sizeof(arr[1]);

int sum =Sum(arr,size);

cout <<"Addition of all elements in given array is "<<sum;

}

//output : Addition of all elements in given array is 15