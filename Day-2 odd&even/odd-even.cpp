#include <iostream>
using namespace std;
int main()
{
  int num;

  cout << "Please enter a Number: " << endl;
  cin >> num;

  (num % 2 == 0) ? cout << " Entered value is Even" : cout << "Entered value is odd";

  
}

// input:99
// output:Entered value is odd
// input:88
// output:Entered value is even