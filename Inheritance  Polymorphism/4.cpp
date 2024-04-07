//Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
#include <string>
using namespace std;

class PersonalDetails {
protected:
    string name;
    int rollNumber;

public:
    PersonalDetails(string a, int b) : name(a), rollNumber(b) {}

    void displayPersonalDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class AcademicDetails {
protected:
    int marks[5];

public:
    AcademicDetails(int m1, int m2, int m3, int m4, int m5) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    void displayAcademicDetails() {
        cout << "Subject Marks:" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class StudentMarkSheet : public PersonalDetails, public AcademicDetails {
public:
    StudentMarkSheet(string a, int b, int m1, int m2, int m3, int m4, int m5)
        : PersonalDetails(a, b), AcademicDetails(m1, m2, m3, m4, m5) {}

    void displayMarkSheet() {
        cout << "Student Mark Sheet:" << endl;
        displayPersonalDetails();
        displayAcademicDetails();
    }
};

int main() {
    StudentMarkSheet student("krish", 20, 90, 85, 78, 92, 88);

    student.displayMarkSheet();

    return 0;
}