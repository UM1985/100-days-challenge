#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
   for(int i=2; i<=sqrt(n); i++){
       if(n%i==0)
         return false;
   }

   return true;
}

// Driver Program
int main()
{
   int n;

   cout<<"Enter Any number: ";
   cin>>n;
   if (isPrime(n))
      cout << "Prime Number";
   else
      cout << "Not Prime";

   return 0;
}

//input  : Enter Any number: 5
//output : Prime Number
