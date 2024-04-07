//Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char *str; 
public:
    String(const char *s) {
        int len = strlen(s);
        str = new char[len + 1]; 
        strcpy(str, s); 
    }

    ~String() {
        delete[] str;
    }

    String operator+(const String& s) {
        int len1 = strlen(str);
        int len2 = strlen(s.str);
        char *temp = new char[len1 + len2 + 1]; 
        strcpy(temp, str); 
        strcat(temp, s.str); 
        return String(temp);
    }

    void display() {
        cout << "Concatenated String: " << str << endl;
    }
};

int main() {
    String s1("Hello, ");
    String s2("world!");

    String result = s1 + s2;

    result.display();

    return 0;
}
