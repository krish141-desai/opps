/*
Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading
*/

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Division by zero" << endl;
        return 0.0;
    }
    return a / b;
}

int main() {
    cout << "Integer Arithmetic:" << endl;
    cout << "Addition: " << add(10, 5) << endl;
    cout << "Subtraction: " << subtract(10, 5) << endl;
    cout << "Multiplication: " << multiply(10, 5) << endl;
    cout << "Division: " << divide(10, 5) << endl;

    cout << "\nFloating-point Arithmetic:" << endl;
    cout << "Addition: " << add(12.5, 3.5) << endl;
    cout << "Subtraction: " << subtract(12.5, 3.5) << endl;
    cout << "Multiplication: " << multiply(12.5, 3.5) << endl;
    cout << "Division: " << divide(12.5, 3.5) << endl;

    return 0;
}


