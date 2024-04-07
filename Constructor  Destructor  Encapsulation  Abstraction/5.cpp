/*
Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include <iostream>
using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    bool isIsosceles() {
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }

    bool isScalene() {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }
};

int main() {
    double side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    Triangle triangle(side1, side2, side3);

    if (triangle.isEquilateral()) {
        cout << "The triangle is equilateral." << endl;
    } else if (triangle.isIsosceles()) {
        cout << "The triangle is isosceles." << endl;
    } else if (triangle.isScalene()) {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}
