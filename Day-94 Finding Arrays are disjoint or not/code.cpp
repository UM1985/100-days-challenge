#include <iostream>
using namespace std;

bool areDisjoint(int A[], int sizeA, int B[], int sizeB) {
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j])
                return false;  
        }
    }
    return true; 
}

int main() {
    int A[] = {1, 2, 3, 4};
    int B[] = {5, 6, 7, 8};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    if (areDisjoint(A, sizeA, B, sizeB))
        cout << "Arrays are Disjoint";
    else
        cout << "Arrays are Not Disjoint";

    return 0;
}
