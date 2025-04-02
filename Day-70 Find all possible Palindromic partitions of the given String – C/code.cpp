#include <bits/stdc++.h>
using namespace std;

bool isPalin(string s)
{
    string s2 = s;
    reverse(s2.begin(), s2.end());

    return s == s2;
}

void getAllparts(string s, vector<string> &partitions, vector<vector<string>> &ans)
{
    if (s.size() == 0)
    {
        ans.push_back(partitions);
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        string part = s.substr(0, i + 1);
        if (isPalin(part))
        {
            partitions.push_back(part);
            getAllparts(s.substr(i + 1), partitions, ans);
            partitions.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) // Removed extra semicolon
{
    vector<vector<string>> ans;
    vector<string> partitions;

    getAllparts(s, partitions, ans);

    return ans;
}

int main()
{
    string s = "aabb";

    vector<vector<string>> ans = partition(s);

    // Printing the result
    for (const auto &vec : ans)
    {
        cout << "[ ";
        for (const auto &str : vec)
        {
            cout << str << " ";
        }
        cout << "]\n";
    }

    return 0;
}


//output : [ a a b b ] , [ a a bb ] ,[ aa b b ] ,[ aa bb ]