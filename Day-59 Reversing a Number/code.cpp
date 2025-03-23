#include <iostream>
using namespace std;
void reverse(int num)
{

    if (num < 10)
    {
        cout << num;
        return;
    }else
    {
        cout << num % 10;
        reverse(num / 10);
    }
}

int main()
{

    int num;

    cout << "Enter any number : ";
    cin >> num;

    reverse(num);
}


//intput : Enter any number : 382405
//output : 504283
