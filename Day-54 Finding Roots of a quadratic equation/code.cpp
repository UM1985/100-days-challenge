#include <iostream>
#include <math.h> 

using namespace std;

void findRoots(double a, double b, double c) {
    if (a == 0) {
        cout << "Not a quadratic equation!" << endl;
        return;
    }

    double D = b * b - 4 * a * c;  // Calculate discriminant

    if (D > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(D)) / (2 * a);
        double root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    } 
    else if (D == 0) {
        // One real repeated root
        double root = -b / (2 * a);
        cout << "Roots are real and equal: " << root << endl;
    } 
    else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Roots are complex: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    findRoots(a, b, c);
   
}
