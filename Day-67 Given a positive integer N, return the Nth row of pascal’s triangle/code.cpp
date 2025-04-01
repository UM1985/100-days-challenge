#include <iostream>
using namespace std;

void getrow(int N)
{
    int prev = 1;
    cout << prev;

    for (int i = 1; i <= N; i++)
    {
        int curr = (prev * (N - i + 1)) / i;
        cout << " " << curr;
        prev = curr;
    }
}

int main()
{

    int num;

    cout << "Enter the number of row : ";
    cin >> num;
    getrow(num);
    return 0;
}

//input  : Enter the number of row : 4
//output : 1 4 6 4 1
