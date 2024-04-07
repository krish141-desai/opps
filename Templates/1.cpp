//Write a program of to swap the two values using template

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    double d1, d2;
    cout << "Enter two doubles: ";
    cin >> d1 >> d2;

    cout << "Before swapping: d1 = " << d1 << ", d2 = " << d2 << endl;
    swapValues(d1, d2);
    cout << "After swapping: d1 = " << d1 << ", d2 = " << d2 << endl;

    return 0;
}
