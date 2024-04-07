/*
Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance
*/

#include <iostream>
using namespace std;

class Base {
protected:
    int baseVar;

public:
    Base(int value) : baseVar(value) {
        cout << "Base Constructor called with value: " << value << endl;
    }

    Base() {
        cout << "Base Default Constructor called" << endl;
    }
};

class Derived1 : public Base {
protected:
    int derived1Var;

public:
    Derived1(int value) : derived1Var(value) {
        cout << "Derived1 Constructor called with value: " << value << endl;
    }
};

class Derived2 : public Derived1 {
public:
    Derived2(int value) : Derived1(value) {
        cout << "Derived2 Constructor called with value: " << value << endl;
    }
};

int main() {
    Derived2 d(10);

    return 0;
}
