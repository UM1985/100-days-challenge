#include<iostream>
using namespace std;

int getFactorial(int num)
{
    if(num == 0)
        return 1;
        
    return num * getFactorial(num-1);
}
int main ()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    
    int fact = getFactorial(num);
    
    cout << "Factorial of " << num << " : " << fact;

    return 0;
}
//input  : Enter the number : 5
//output : Factorial of 5 : 120