//Class for Bank Account

//Create a class BankAccount with data members like balance and member functions like deposit and withdraw. Implement encapsulation by keeping the data members private.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // private data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance = 0) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            cout << "Invalid initial balance! Setting to 0." << endl;
            balance = 0;
        }
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    // Function to check balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account1(1000);  // object with initial balance 1000

    cout << "Initial Balance: " << account1.getBalance() << endl;

    account1.deposit(500);    // deposit money
    account1.withdraw(300);  // withdraw money
    account1.withdraw(1500); // try withdrawing more than balance

    cout << "Final Balance: " << account1.getBalance() << endl;

    return 0;
}
