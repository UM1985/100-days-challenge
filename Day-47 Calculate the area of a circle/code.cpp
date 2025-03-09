#include <iostream>
using namespace std;

float areaofcircle(float r)
{
    float pi = 3.14, a;
    a = pi * r * r;
    return a;
}

int main()
{
    float r, a;

    cout << "please Enter the Radius: ";
    cin >> r;
    a = areaofcircle(r);

    cout << "Area Of circle is " << a;
}

//input  : please Enter the Radius: 4
//output : Area Of circle is 50.24