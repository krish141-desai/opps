/*
Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string n, int id, double sal) {
        name = n;
        employeeID = id;
        salary = sal;
    }

    void setSalary(double performance) {
        if (performance > 0.8) {
            salary *= 1.1; 
        } else if (performance > 0.6) {
            salary *= 1.05; 
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp("krish desai", 987654, 50000);

    cout << "Initial Employee Details:" << endl;
    emp.display();

    emp.setSalary(0.9); 

    cout << "\nUpdated Employee Details:" << endl;
    emp.display();

    return 0;
}
