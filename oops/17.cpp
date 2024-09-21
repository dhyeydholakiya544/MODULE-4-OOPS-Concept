1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) 

#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int matches;

    void inputCricketerData() {
        cout << "Enter cricketer name: ";
        cin >> name;
        cout << "Enter number of matches: ";
        cin >> matches;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        inputCricketerData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

    void calculateAverageRuns() {
        averageRuns = static_cast<float>(totalRuns) / matches;
    }

    void displayData() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Matches Played: " << matches << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman b;
    b.inputBatsmanData();
    b.displayData();
    return 0;
}
