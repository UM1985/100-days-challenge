#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long long minScalarProduct(vector<int> v1, vector<int> v2) {
    sort(v1.begin(), v1.end());

    sort(v2.begin(), v2.end(), greater<int>());

    long long scalarProduct = 0;
    for (size_t i = 0; i < v1.size(); i++) {
        scalarProduct += (long long)v1[i] * v2[i];
    }

    return scalarProduct;
}

int main() {

    vector<int> v1 ={2,4,3} ;
    vector<int> v2 ={4,3,2} ;

    
    long long result = minScalarProduct(v1, v2);
    cout << "Minimum Scalar Product: " << result << endl;

    return 0;
}
