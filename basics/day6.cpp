#include <iostream>
#include <string>
using namespace std;

enum class Year {
    First,
    Second,
    Third,
    Fourth
};

using CGPA = double;

struct Student {
    string name;
    int age;
    string branch;
    CGPA cgpa;
    Year currentYear;
};

void printStudent(const Student& s) {
    cout << "Details" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Branch: " << s.branch << endl;
    cout << "CGPA: " << s.cgpa << endl;

    if (s.currentYear == Year::First) {
        cout << "Year: First" << endl;
    }
    else if (s.currentYear == Year::Second) {
        cout << "Year: Second" << endl;
    }
    else if (s.currentYear == Year::Third) {
        cout << "Year: Third" << endl;
    }
    else if (s.currentYear == Year::Fourth) {
        cout << "Year: Fourth" << endl;
    }

    cout << "-------------------------------" << endl;
}

int main() {
    Student s1{
        "Aditya",
        18,
        "Computer Engineering",
        9.7,
        Year::First
    };

    Student s2{
        "Arnav",
        19,
        "BBA",
        8.9,
        Year::Second
    };

    Student s3{
        "Rohan",
        20,
        "Mechanical Engineering",
        8.4,
        Year::Third
    };

    printStudent(s1);
    printStudent(s2);
    printStudent(s3);

    return 0;
}