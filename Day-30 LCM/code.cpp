    #include <iostream>
    using namespace std;
    int main()
    {

        int num1, num2, lcm;

        cout << "Enter First Number : ";
        cin >> num1;
        cout << "Enter Second Number : ";
        cin >> num2;

        for (int i = 2; i <= num1; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                lcm = i;
                break;
            }
        }
        cout << "LCM of " << num1 << " and " << num2 << " is " << lcm;
    }

    // input : Enter First Number : 15
    //         Enter Second Number : 45
    //output : LCM of 24 and 36 is 3