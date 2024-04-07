/*
Write a C++ Program to show access to Private Public and Protected using 
Inheritance
*/

#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateMember;
protected:
    int protectedMember;
public:
    int publicMember;

    Base() : privateMember(1), protectedMember(2), publicMember(3) {}
};

// Derived class
class Derived : public Base {
public:
    void accessBaseMembers() {
        cout << "Public member of Base class: " << publicMember << endl;
        cout << "Protected member of Base class: " << protectedMember << endl;
        // Private member access is not allowed in derived class
    }
};

int main() {
    Derived derivedObject;
    derivedObject.accessBaseMembers();

    // Public member accessed from outside
    cout << "Public member of Base class accessed from outside: " << derivedObject.publicMember << endl;

    return 0;
}
