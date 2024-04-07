/*Write a program to find the max number from given two numbers 
using friend function*/

#include <iostream>
using namespace std;

class MaxNum;

int findMax(const MaxNum &obj);

class MaxNum {
private:
    int num1, num2;

public:
    MaxNum(int n1, int n2) : num1(n1), num2(n2) {}

    friend int findMax(const MaxNum &obj);
};

int findMax(const MaxNum &obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    MaxNum maxObj(num1, num2);
    int maxNum = findMax(maxObj);

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
