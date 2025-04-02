#include<iostream>
using namespace std;
void odd_even_counter(int arr[],int size,int &even_count,int &odd_count){
    for(int i=0; i<size; i++){
        if(arr[i]%2==0)
          even_count++;
   
        else 
          odd_count++;
      }
}
int main(){

   int arr[] = {1, 7, 8, 4, 5, 16, 8};
   int size = sizeof(arr)/sizeof(arr[0]);

   int even_count=0, odd_count=0;
   odd_even_counter(arr,size,even_count,odd_count);
  
   cout<<"Even Elements count : " <<even_count<< "\nOdd Elements count : " << odd_count;
}