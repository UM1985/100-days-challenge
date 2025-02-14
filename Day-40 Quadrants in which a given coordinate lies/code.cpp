#include <iostream>
using namespace std;

int checkquadrant(int x, int y)
{
    if (x > 0 && y > 0)
    {
        cout << x << "," << y << " lies in first quadrant";
    }
    else if (x < 0 && y > 0)
    {
        cout << x << "," << y << " lies in second quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout << x << "," << y << " lies in third quadrant";
    }
    else if (x > 0 && y < 0)
    {
        cout << x << "," << y << " lies in forth quadrant";
    }
}

int main()
{
    int x, y;

    cout << "Enter the value for x coordinate : ";
    cin >> x;
    cout << "Enter the value for y coordinate : ";
    cin >> y;

    checkquadrant(x, y);
}