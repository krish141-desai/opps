/*
Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/

#include <iostream>
#include <string>
using namespace std;

class Cricketer
{
protected:
    string name;
    int age;

public:
    Cricketer(string n, int a) : name(n), age(a) {}

    void inputData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer
{
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    Batsman(string n, int a) : Cricketer(n, a) {}

    void inputData()
    {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        averageRuns = totalRuns / 5;
    }

    void displayData()
    {
        Cricketer::displayData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main()
{
    Batsman batsman("Player", 25);
    cout << "Enter batsman details:" << endl;
    batsman.inputData();
    cout << "\nBatsman details:" << endl;
    batsman.displayData();
    return 0;
}
