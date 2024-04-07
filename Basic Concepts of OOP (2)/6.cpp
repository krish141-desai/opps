/*
Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }

    void setCountry(string c) {
        country = c;
    }

    string getCountry() {
        return country;
    }
};

int main() {
    Person person;

    person.setName("krish desai");
    person.setAge(21);
    person.setCountry("INDIA");

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}



