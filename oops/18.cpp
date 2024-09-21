2. Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;
public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 6);
    cout << "Area of Rectangle: " << rect.getArea() << endl;
    return 0;
}
