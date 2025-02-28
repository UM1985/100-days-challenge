#include<iostream>
#include<string>
using namespace std;

int Len(char* str) 
{
   if (*str == '\0')  // Base case: If we reach the null character, return 0
      return 0;
   else
      return 1 + Len(str + 1);  // Move to the next character
}

/* Driver code */
int main()
{
   char str[] = "utkarsh"; 
   cout <<"length of given str is "<< Len(str);  
   return 0;
}
