Addition, Subtraction, Division, Multiplication using Constructor:

#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b;
public:
    Calculator(int x, int y) : a(x), b(y) {}

    void add() {
        cout << "Addition: " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiply() {
        cout << "Multiplication: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Cannot divide by zero!" << endl;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Calculator calc(x, y);
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    return 0;
}
