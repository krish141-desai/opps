/*
Write a program to find the multiplication values and the cubic values using 
inline function
*/

#include <iostream>
using namespace std;

inline int multiply(int a, int b)
{
    return a * b;
}

inline int cube(int a)

{
    return a * a * a;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The multiplication of " << a << " and " << b << " is " << multiply(a, b) << endl;
    cout << "The cube of " << a << " is " << cube(a) << endl;
    return 0;
}