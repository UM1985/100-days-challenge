#include<iostream>
using namespace std;

// Recursive function 
int term(int calculated, int current, int N) 
{
    int i, cur = 1;

    // Base Condition
    if (current == N + 1) 
       return 0;

    // product of terms till current
    for (i = calculated; i < calculated + current; i++)
        cur *= i;

     return cur + term(i, current + 1, N); 
}

// Driver Code
int main()
{
    int N ;
    cout<<"Enter the value for n : ";
    cin>>N;

    cout<<term(1, 1, N);

    return 0;
}

//input  : Enter the value for n : 4
//output : 5167 