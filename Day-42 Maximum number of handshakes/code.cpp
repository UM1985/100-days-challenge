#include<iostream>
using namespace std;

int main(){

int n,result;

cout<<"Enter the number of people : ";
cin>>n;

result = n*(n-1)/2;

cout<<"for "<<n<<" people there will be "<<result<<" handshakes";
}

//input  : Enter the number of people : 12
//output : for 12 people there will be 66 handshakes