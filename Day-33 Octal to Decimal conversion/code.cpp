#include<bits/stdc++.h>
using namespace std;

int getdecimal(int number){

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

int octal;

cout<<"Enter the octal number : ";
cin>>octal;

 int decimal =getdecimal(octal);

 cout<<"Decimal of "<<octal<<" is "<<decimal;

}

//input  : Enter the octal number : 17
//output : Decimal of 17 is 15