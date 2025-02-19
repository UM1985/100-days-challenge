#include<iostream>
using namespace std;
int getcount(int num,int digit){
    int count=0,rem;

    while(num>0){   
        rem= num%10;
        if(rem == digit){
            count++;
        }
        num/=10;
    }
    return count;
}

int main(){
    int n,result,digit;

    cout<<"Enter any repeated digit Number : ";
    cin>>n;

    cout<<"Enter the Digit That you have to find: ";
cin>>digit;

    result = getcount(n,digit);
    cout<<result;
    
}