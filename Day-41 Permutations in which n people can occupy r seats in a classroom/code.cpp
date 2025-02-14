#include<iostream>
using namespace std;
int factorial(int num){
int fact =1;

for(int i=num; i>1; i--){                                                                           
    fact *= i;
}
return fact;

}

int main(){

    int n, r;

    cout<<"Enter the number of people : ";
    cin>>n;
    cout<<"Enter the number of seats : ";
    cin>>r;

    int result = factorial(n)/factorial(n-r);

    cout<<"possible arrangeents are "<<result;
}