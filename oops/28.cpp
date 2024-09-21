12.Write a program to swap the two numbers using friend function
without using third variable

#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}

    // Friend function declaration
    friend void swapNumbers(Number &n1, Number &n2);

    void display() const {
        cout << "Value: " << value << endl;
    }
};

// Friend function to swap numbers without using a third variable
void swapNumbers(Number &n1, Number &n2) {
    n1.value = n1.value + n2.value;
    n2.value = n1.value - n2.value;
    n1.value = n1.value - n2.value;
}

int main() {
    Number num1(10), num2(20);

    cout << "Before Swap:" << endl;
    num1.display();
    num2.display();

    swapNumbers(num1, num2);

    cout << "After Swap:" << endl;
    num1.display();
    num2.display();

    return 0;
}
