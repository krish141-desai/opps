/*
Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.
*/

#include <iostream>
using namespace std;

class Calculator {
private:
    double a;
    double b;

public:
    Calculator(double op1, double op2) : a(op1), b(op2) {}

    double add() {
        return a + b;
    }

    double subtract() {
        return a - b;
    }

    double multiply() {
        return a * b;
    }

    double divide() {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Calculator calc(num1, num2);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}
