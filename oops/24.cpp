8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading

#include <iostream>
using namespace std;

class MathOperation {
public:
    // Addition of two integers
    int operate(int a, int b) {
        return a + b;
    }

    // Subtraction of two integers
    int operate(int a, int b, char op) {
        if (op == '-')
            return a - b;
        else
            return 0;
    }

    // Multiplication of two floats
    float operate(float a, float b) {
        return a * b;
    }

    // Division of two floats
    float operate(float a, float b, char op) {
        if (op == '/')
            return a / b;
        else
            return 0;
    }
};

int main() {
    MathOperation math;
    cout << "Addition: " << math.operate(5, 3) << endl;
    cout << "Subtraction: " << math.operate(10, 4, '-') << endl;
    cout << "Multiplication: " << math.operate(5.5f, 2.0f) << endl;
    cout << "Division: " << math.operate(10.0f, 2.0f, '/') << endl;
    return 0;
}
