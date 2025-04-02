#include <iostream>
using namespace std;
bool prime(int num, int i)
{

   if (i == num)
   {
      return true;
   }

   if (num % i == 0)
   {
      return false;
   }

   return prime(num, i + 1);
}

int main()
{
   int num;
   cout << "Enter Number : ";
   cin >> num;

   if (prime(num, 2))
   {
      cout << "The given number is prime number!";
   }
   else
   {
      cout << "The given number is not prime number!";
   }
}