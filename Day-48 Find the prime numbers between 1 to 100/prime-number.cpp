    #include <iostream>
    using namespace std;

    int checkprime(int n)
    {
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int main()
    {
        int n1, n2, result;

        cout << "Please enter the value of n1: ";
        cin >> n1;
        cout << "Please enter the value of n2: ";
        cin >> n2;

        cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";

        for (int i = n1; i <= n2; i++)
        {
            if (checkprime(i))

                cout << i << " ";
        }
    }


    //input  : Please enter the value of n1: 1
    //         Please enter the value of n2: 50
    //output : Prime numbers between 1 and 50 are: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 