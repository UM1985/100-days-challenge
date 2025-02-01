#include <iostream>
using namespace std;
int main()
{
    int num, reverse = 0, original;
    cout << "Enter any number: ";
    cin >> num;
    original = num;
    for (; num > 0;)
    {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }
if(reverse==original){
    cout<<"Entered number is palindrome number";
}else{
        cout<<"Entered number is not a palindrome number";
}
}

//input  : Enter any number: 343
//output : Entered number is palindrome number