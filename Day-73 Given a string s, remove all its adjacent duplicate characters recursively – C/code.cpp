#include <iostream>
#include <string>
using namespace std;

string removeAdjDuplicatesRecursively(string s) {
    if (s.length() <= 1) return s;

    string result = "";
    int i = 0;

    while (i < s.length()) {
        if (i < s.length() - 1 && s[i] == s[i + 1]) {
            while (i < s.length() - 1 && s[i] == s[i + 1]) {
                i++;
            }
            i++; 
        } else {
            result += s[i];
            i++;
        }
    }

    if (result.length() != s.length()) {
        return removeAdjDuplicatesRecursively(result);
    } else {
        return result;
    }
}

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    string result = removeAdjDuplicatesRecursively(str);
    cout << "Result after removing all adjacent duplicates: " << result << endl;

    return 0;
}

// input  : Enter string: abbdaadff
// output :Result after removing all adjacent duplicates: a
