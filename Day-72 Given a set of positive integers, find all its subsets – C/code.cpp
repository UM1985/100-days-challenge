#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& set, vector<int>& current, int index) {
    if (index == set.size()) {
        cout << "{ ";
        for (int num : current) {
            cout << num << " ";
        }
        cout << "}" << endl;
        return;
    }

    generateSubsets(set, current, index + 1);

    current.push_back(set[index]);
    generateSubsets(set, current, index + 1);
    current.pop_back(); 
}

int main() {
    vector<int> Set = {1, 2, 3};
    vector<int> currentSubset;
    cout << "All subsets:\n";
    generateSubsets(Set, currentSubset, 0);
    return 0;
}

// output : { }
        // { 3 }
        // { 2 }
        // { 2 3 }
        // { 1 }
        // { 1 3 }
        // { 1 2 }
        // { 1 2 3 }
