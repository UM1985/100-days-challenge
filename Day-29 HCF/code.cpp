#include<iostream>
using namespace std;
int main(){

int num1,num2,hcf;

cout<<"Enter First Number ";
cin>>num1;
cout<<"Enter Second Number ";
cin>>num2;

for(int i =1; i<=num1*num2;i++){
    if(num1%i==0 && num2%i==0){
        hcf=i;
    }
}

cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<hcf;
}

//input  : Enter First Number 44 Enter Second Number 32
//output : HCF of 44 and 32 is 4