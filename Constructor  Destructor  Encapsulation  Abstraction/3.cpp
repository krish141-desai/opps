/*
Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    void setCompany(string c) {
        company = c;
    }

    string getCompany() {
        return company;
    }

    void setModel(string m) {
        model = m;
    }

    string getModel() {
        return model;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car car;

    car.setCompany("kia");
    car.setModel("seltos");
    car.setYear(2023);

    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    return 0;
}
