#include<iostream>
using namespace std;
int main(){
    int num, digit=0;
cout<<"Enter any number :";
cin>>num;
    while(num >0){
        digit++;
        num/=10;
    }
    cout<<digit;
}