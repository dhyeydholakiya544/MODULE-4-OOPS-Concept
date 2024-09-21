Class Triangle for Equilateral, Isosceles, and Scalene:

#include <iostream>
using namespace std;

class Triangle {
private:
    int side1, side2, side3;

public:
    Triangle(int a, int b, int c) : side1(a), side2(b), side3(c) {}

    void checkType() {
        if (side1 == side2 && side2 == side3) {
            cout << "Equilateral Triangle" << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "Isosceles Triangle" << endl;
        } else {
            cout << "Scalene Triangle" << endl;
        }
    }
};

int main() {
    Triangle tri(3, 4, 5);
    tri.checkType();

    return 0;
}

