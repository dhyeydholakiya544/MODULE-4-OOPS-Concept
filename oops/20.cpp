4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;
public:
    void inputRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test {
protected:
    int marks1, marks2;
public:
    void inputMarks() {
        cout << "Enter marks for two subjects: ";
        cin >> marks1 >> marks2;
    }
    void displayMarks() {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

class Result : public Student, public Test {
public:
    void displayResult() {
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << marks1 + marks2 << endl;
    }
};

int main() {
    Result r;
    r.inputRollNumber();
    r.inputMarks();
    r.displayResult();
    return 0;
}
