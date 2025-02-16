#include<iostream>
using namespace std;

int reverse(int num){
    int rem,rev=0;

    while(num !=0){
        rem =num % 10;
        if(rem == 0){
            rem =1;
        }
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

int main(){
    int n, againreverse,result;

    cout<<"Enter any Number that contain 0 in it : ";
    cin>>n;

    againreverse = reverse(n);

    result= reverse(againreverse);

    cout<<"The new number is "<<result;

}