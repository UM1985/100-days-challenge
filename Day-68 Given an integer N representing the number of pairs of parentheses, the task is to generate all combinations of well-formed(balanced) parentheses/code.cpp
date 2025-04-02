#include <iostream>
#include <vector>
using namespace std;

void generateParentheses(int open, int close, string current, vector<string> &result)
{
    if (open == 0 && close == 0)
    {
        result.push_back(current);
        return;
    }

    if (open > 0)
    {
        generateParentheses(open - 1, close, current + "(", result);
    }

    if (close > open)
    {
        generateParentheses(open, close - 1, current + ")", result);
    }
}

vector<string> generateAllParentheses(int n)
{
    vector<string> result;
    generateParentheses(n, n, "", result);
    return result;
}

int main()
{
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;

    vector<string> parenthesesCombinations = generateAllParentheses(n);

    cout << "All combinations of well-formed parentheses:\n";
    for (const string &combination : parenthesesCombinations)
    {
        cout << combination << "\n";
    }

    return 0;
}


//input  : Enter the number of pairs of parentheses: 3

//output : All combinations of well-formed parentheses:
//         ((()))
//         (()())
//         (())()
//         ()(())
//         ()()()
