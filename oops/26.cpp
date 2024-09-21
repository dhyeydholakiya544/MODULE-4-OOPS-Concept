10.Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string>
using namespace std;

class StringConcat {
private:
    string str;

public:
    StringConcat(string s = "") : str(s) {}

    StringConcat operator + (const StringConcat &obj) {
        return StringConcat(str + obj.str);
    }

    void display() {
        cout << "Concatenated String: " << str << endl;
    }
};

int main() {
    StringConcat s1("Hello, "), s2("World!");
    StringConcat s3 = s1 + s2;
    s3.display();
    return 0;
}
