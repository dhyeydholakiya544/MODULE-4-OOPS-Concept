Class Car with Company, Model, Year:

#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    void setDetails(string comp, string mod, int yr) {
        company = comp;
        model = mod;
        year = yr;
    }

    void getDetails() {
        cout << "Company: " << company << "\nModel: " << model << "\nYear: " << year << endl;
    }
};

int main() {
    Car myCar;
    myCar.setDetails("Toyota", "Corolla", 2020);
    myCar.getDetails();
    return 0;
}

