#include<iostream>
#include<string>
using namespace std;

int Len(char* str) 
{
   if (*str == '\0')  
      return 0;
   else
      return 1 + Len(str + 1);   
}

/* Driver code */
int main()
{
   char str[] = "utkarsh"; 
   cout <<"length of given str is "<< Len(str);  
}

//output : length of given str is 7