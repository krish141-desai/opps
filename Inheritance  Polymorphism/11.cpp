/*
Write a program to calculate the area of circle, rectangle and triangle 
using Function Overloading
Rectangle: Area * breadth 
Triangle: ½ *Area* breadth 
Circle: Pi * Area *Area
*/

#include<iostream>
using namespace std;

int area(int, int);
float area(float);
float area(float, float);

int main() {
    int l, b;
    float r, bs, ht;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter base and height of triangle: ";
    cin >> bs >> ht;

    cout << "Area of rectangle is " << area(l, b) << endl;
    cout << "Area of circle is " << area(r) << endl;
    cout << "Area of triangle is " << area(bs, ht) << endl;

    return 0;
}

int area(int l, int b) {
    return (l * b);
}

float area(float r) {
    return (3.14 * r * r);
}

float area(float bs, float ht) {
    return ((bs * ht) / 2);
}



