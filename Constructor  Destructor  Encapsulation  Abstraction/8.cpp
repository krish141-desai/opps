/*
Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation
*/

#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    int zipCode;

public:
    Address(string street, string city, string state, int zipCode)
        : street(street), city(city), state(state), zipCode(zipCode) {}

    void displayAddress() {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << endl;
    }
};

class Student {
private:
    string name;
    string className;
    int rollNumber;
    int marks;

public:
    Student(string n, string cn, int rn, int m)
        : name(n), className(cn), rollNumber(rn), marks(m) {}

    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Address address1("123", "abc", "navsari", 12345);

    Student student1("krish", "Bcom", 20, 95);
    
    student1.displayInfo();
    address1.displayAddress();

    return 0;
}
