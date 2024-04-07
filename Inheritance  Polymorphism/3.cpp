/*
Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void readData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void writeData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    double percentage;

public:
    Student(string n, int a, double p) : Person(n, a), percentage(p) {}

    void readData()
    {
        Person::readData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void writeData()
    {
        Person::writeData();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person
{
private:
    double salary;

public:
    Teacher(string n, int a, double s) : Person(n, a), salary(s) {}

    void readData()
    {
        Person::readData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void writeData()
    {
        Person::writeData();
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student student("xyz", 20, 85.5);
    cout << "Enter student details:" << endl;
    student.readData();
    cout << "\nStudent details:" << endl;
    student.writeData();

    Teacher teacher("abc", 30, 50000);
    cout << "\nEnter teacher details:" << endl;
    teacher.readData();
    cout << "\nTeacher details:" << endl;
    teacher.writeData();

    return 0;
}
