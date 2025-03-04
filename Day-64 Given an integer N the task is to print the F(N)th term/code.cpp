#include<iostream>
using namespace std;

int main(){

int n,sum=0 , n2 =1;

    cout<<"Enter value for N: ";
    cin>>n;

for(int i =1 ; i<=n;i++){
    int n1 =1;
    for(int j =1 ;j<=i; j++){
        n1 *= n2;
        n2++;
    }
    sum += n1;
}

cout<<sum;

}