Class BankAccount with Deposit and Withdraw:

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double initialBalance) : accountNumber(accNo), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds!" << endl;
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount account(12345, 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayBalance();

    return 0;
}
