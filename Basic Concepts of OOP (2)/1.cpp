// WAP to create simple calculator using class

#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double num1, double num2) {
        return num1 + num2;
    }


    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    double divide(double num1, double num2) {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc; 

    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;


    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;
}
