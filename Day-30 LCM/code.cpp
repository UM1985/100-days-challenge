#include<iostream>
using namespace std;
int main(){

int num1,num2,hcf;

cout<<"Enter First Number ";
cin>>num1;
cout<<"Enter any Number ";
cin>>num2;

for(int i =1; i<=num1*num2;i++){
    if(i%num1==0 && i%num2==0){
        hcf=i;
        break;
    }
}

cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<hcf;
}