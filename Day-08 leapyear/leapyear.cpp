#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "Please Enter the year: ";
    cin >> y;

    if (y % 400 == 0)
    {
        cout << "It is a leap year";
    }
    else if (y % 4 == 0 && y % 100 != 0)
    {
        cout << "It is a leap year";
    }
    else
    {
        cout << " It is not a leap year";
    }
}

//input 
//Please Enter the year: 2004
//output
//It is a leap year