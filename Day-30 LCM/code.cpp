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

int lcm =( num1*num2)/hcf;

cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;
}

    // input : Enter First Number : 15
    //         Enter Second Number : 45
    //output : LCM of 15 and 45 is 45