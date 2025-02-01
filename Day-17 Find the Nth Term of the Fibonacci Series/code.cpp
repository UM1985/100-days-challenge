#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Nth term : ";
    cin >> n;
    int n1 = 0, n2 = 1, fibonacci = 0;

  

    for (int i = 2; i < n; i++)
    {
        fibonacci = n1 + n2;
        n1 = n2;
        n2 = fibonacci;

        
    }
    cout << fibonacci;
}
    