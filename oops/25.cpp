9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix {
private:
    int arr[5];

public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    Matrix operator + (Matrix const &obj) {
        Matrix res;
        for (int i = 0; i < 5; i++)
            res.arr[i] = arr[i] + obj.arr[i];
        return res;
    }

    void display() {
        cout << "Matrix elements: ";
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;
    m1.input();
    m2.input();

    m3 = m1 + m2;
    m3.display();
    return 0;
}
