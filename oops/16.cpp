Class Student with Aggregation:

#include <iostream>
using namespace std;

class Address {
public:
    string city, state, country;

    void setAddress(string c, string s, string ct) {
        city = c;
        state = s;
        country = ct;
    }

    void displayAddress() {
        cout << "City: " << city << ", State: " << state << ", Country: " << country << endl;
    }
};

class Student {
private:
    string name;
    int rollNumber;
    int marks;
    Address address;

public:
    Student(string nm, int roll, int mk, Address addr) : name(nm), rollNumber(roll), marks(mk), address(addr) {}

    char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 50) return 'C';
        else return 'F';
    }

    void displayStudentInfo() {
        cout << "Name: " << name << "\nRoll Number: " << rollNumber << "\nMarks: " << marks 
             << "\nGrade: " << calculateGrade() << endl;
        address.displayAddress();
    }
};

int main() {
    Address addr;
    addr.setAddress("New York", "NY", "USA");

    Student student("Alice", 101, 85, addr);
    student.displayStudentInfo();

    return 0;
}
