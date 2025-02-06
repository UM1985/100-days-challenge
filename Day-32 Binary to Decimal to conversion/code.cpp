#include<bits/stdc++.h>
using namespace std;

int getdecimal( long long number){

    int i =0 , digit,decimal=0;

    while(number != 0){
        digit = number%10;
        decimal += digit * pow(2,i) ;
        number /=10;
        i++;
    }
    return decimal;
}

int main(){

long long  binary;

cout<<"Enter the binary number : ";
cin>>binary;

 int decimal =getdecimal(binary);

 cout<<"Decimal of "<<binary<<" is "<<decimal;

}