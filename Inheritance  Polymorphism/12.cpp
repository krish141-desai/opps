/*
Write a program to swap the two numbers using friend function 
without using third variable
*/

#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend void swapNumbers(Number &num1, Number &num2);
    void display() {
        cout << "Number: " << num << endl;
    }
};

void swapNumbers(Number &num1, Number &num2) {
    num1.num = num1.num + num2.num;
    num2.num = num1.num - num2.num;
    num1.num = num1.num - num2.num;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Number n1(num1);
    Number n2(num2);

    cout << "Before swapping:" << endl;
    n1.display();
    n2.display();

    swapNumbers(n1, n2);

    cout << "After swapping:" << endl;
    n1.display();
    n2.display();

    return 0;
}



