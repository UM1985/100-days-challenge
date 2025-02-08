#include<bits/stdc++.h>
using namespace std;

int getdecimal( long long number){

    int i =0 , digit,decimal=0;

    while(number != 0){
        digit = number%10;
        decimal += digit * pow(8,i) ;
        number /=10;
        i++;
    }
    return decimal;
}

int main(){

long long  octal;

cout<<"Enter the binary number : ";
cin>>octal;

 int decimal =getdecimal(octal);

 cout<<"Decimal of "<<octal<<" is "<<decimal;

}