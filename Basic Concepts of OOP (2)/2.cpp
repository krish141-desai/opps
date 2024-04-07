/*
Define a class to represent a bank account. Include the following members:

Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance

*/
#include<iostream>
using namespace std;

class BankAccount {
public:
    string depositorName;
    int accountNumber;
    string accountType;
    int balance;

    BankAccount(string name, int number, string type, int initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << ". New balance is " << balance << "." << endl;
        }
        else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << ". New balance is " << balance << "." << endl;
        }
        else {
            cout << "Insufficient funds or invalid amount for withdrawal." << endl;
        }
    }

    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("krish desai", 81407141113, "saving", 80350);

    account.display();

    account.deposit(500);
    account.withdraw(15);

    account.display();

    return 0;
}


