Multiplication and Cubic Values using Inline Function:

#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int a) {
    return a * a * a;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Multiplication: " << multiply(x, y) << endl;
    cout << "Cube of first number: " << cube(x) << endl;
    cout << "Cube of second number: " << cube(y) << endl;

    return 0;
}
