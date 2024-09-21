11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area *
breadth Triangle: ½
*Area* breadthCircle:
Pi * Area *Area

#include <iostream>
#include <cmath>  // For M_PI
using namespace std;

class Area {
public:
    // Area of Rectangle
    int calculateArea(int length, int breadth) {
        return length * breadth;
    }

    // Area of Triangle
    float calculateArea(float base, float height) {
        return 0.5 * base * height;
    }

    // Area of Circle
    float calculateArea(float radius) {
        return M_PI * radius * radius;  // M_PI is Pi from the cmath library
    }
};

int main() {
    Area areaCalc;

    // Rectangle
    int length = 5, breadth = 10;
    cout << "Area of Rectangle: " << areaCalc.calculateArea(length, breadth) << endl;

    // Triangle
    float base = 6.0, height = 8.0;
    cout << "Area of Triangle: " << areaCalc.calculateArea(base, height) << endl;

    // Circle
    float radius = 7.0;
    cout << "Area of Circle: " << areaCalc.calculateArea(radius) << endl;

    return 0;
}
