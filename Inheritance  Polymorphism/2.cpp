// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Rectangle
{
protected:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea()
    {
        return length * width;
    }
};

class Square : public Rectangle
{
public:
    Square(double s) : Rectangle(s, s) {}
};

int main()
{
    double side;

    cout << "Enter side of the square: ";
    cin >> side;

    Square square(side);

    cout << "Area of the square: " << square.calculateArea() << endl;

    return 0;
}
