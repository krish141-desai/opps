/*
Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account.
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successfully made." << endl;
        cout << "Updated balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successfully made." << endl;
            cout << "Updated balance: " << balance << endl;
        }
    }

    ~BankAccount() {
        cout << "Account " << accountNumber << " destroyed." << endl;
    }
};

int main() {
    BankAccount account(056395, 1000.0);

    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0);

    return 0;
}




