#include<iostream>
#include<limits.h>
using namespace std;
int main(){

int arr[] = {10, -20, -30, 0, 70, -80, -20};

int size = sizeof(arr)/sizeof(arr[0]);

int cpre =1, csuff=1 ,mp = INT_MIN;

for(int i =0 ; i<size; i++){
    if(cpre ==0){
        cpre =1;
    }
    if(csuff == 0){
        csuff = 1;
    }
   cpre *= arr[i];
   csuff *=arr[size-i-1] ;
   mp = max(mp , max(cpre,csuff));
//    mp = max(mp , cpre);
//    mp = max(mp , csuff);
  

}
cout<<mp;
}