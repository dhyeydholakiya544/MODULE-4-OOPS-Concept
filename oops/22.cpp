6. Write a C++ Program to show access to Private Public and Protected using
Inheritance

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 1;
protected:
    int protectedVar = 2;
public:
    int publicVar = 3;

    void showPrivate() {
        cout << "Private Variable: " << privateVar << endl;
    }
};

class Derived : public Base {
public:
    void showAccess() {
        showPrivate();  // Private access through public member function
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    Derived obj;
    obj.showAccess();
    obj.publicVar = 10;  // Direct access to public member
    cout << "Updated Public Variable: " << obj.publicVar << endl;
    return 0;
}
