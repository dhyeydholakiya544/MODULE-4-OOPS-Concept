13.Write a program to find the max number from given two numbers
using friend function


#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}

    // Friend function declaration
    friend int findMax(Number &n1, Number &n2);

    void display() const {
        cout << "Value: " << value << endl;
    }
};

// Friend function to find the maximum of two numbers
int findMax(Number &n1, Number &n2) {
    return (n1.value > n2.value) ? n1.value : n2.value;
}

int main() {
    Number num1(35), num2(45);

    cout << "The maximum number is: " << findMax(num1, num2) << endl;

    return 0;
}
