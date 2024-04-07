/*
Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/

#include <iostream>
#include <string>
using namespace std;

class Students
{
protected:
    int rollNumber;

public:
    Students(int rn) : rollNumber(rn) {}

    void displayRollNumber()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Students
{
protected:
    int marksSubject1;
    int marksSubject2;

public:
    Test(int rn, int m1, int m2) : Students(rn), marksSubject1(m1), marksSubject2(m2) {}

    void displayMarks()
    {
        cout << "Marks Subject 1: " << marksSubject1 << endl;
        cout << "Marks Subject 2: " << marksSubject2 << endl;
    }
};

class Result : public Test
{
private:
    int totalMarks;

public:
    Result(int rn, int m1, int m2) : Test(rn, m1, m2)
    {
        totalMarks = marksSubject1 + marksSubject2;
    }
    void displayResult()
    {
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    Result studentResult(20, 85, 78);

    studentResult.displayResult();

    return 0;
}
