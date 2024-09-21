2. Define a class to represent a bank account. Include the following members:

class BankAccount:
    def __init__(self, name, account_number, account_type, balance=0.0):
        self.name = name
        self.account_number = account_number
        self.account_type = account_type
        self.balance = balance

    def assign_values(self, name, account_number, account_type, balance):
        self.name = name
        self.account_number = account_number
        self.account_type = account_type
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited ${amount:.2f} into account {self.account_number}. New balance: ${self.balance:.2f}")

    def withdraw(self, amount):
        if amount > self.balance:
            print("Error: Insufficient balance")
        else:
            self.balance -= amount
            print(f"Withdrew ${amount:.2f} from account {self.account_number}. New balance: ${self.balance:.2f}")

    def display_info(self):
        print(f"Account Holder: {self.name}")
        print(f"Account Number: {self.account_number}")
        print(f"Account Type: {self.account_type}")
        print(f"Balance: ${self.balance:.2f}")

# Create an instance of the BankAccount class
account = BankAccount("John Doe", "1234567890", "Savings", 1000.0)

account.display_info()

account.deposit(500.0)
account.withdraw(200.0)

account.display_info()