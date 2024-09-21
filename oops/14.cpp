Class Employee with Constructor:

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int id, double initialSalary) : name(empName), employeeID(id), salary(initialSalary) {}

    void setSalary(double performanceFactor) {
        salary += performanceFactor * 1000;  // Example performance-based increase
    }

    void displayEmployeeInfo() {
        cout << "Name: " << name << "\nEmployee ID: " << employeeID << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee emp("John Doe", 123, 50000);
    emp.setSalary(1.5);
    emp.displayEmployeeInfo();

    return 0;
}
