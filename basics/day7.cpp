#include <iostream>
#include <string>
#include <array>
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

void printStudent(const Student& s);

Student findTopper(const array<Student, 3>& students);

double averageCGPA(const array<Student, 3>& students);

bool findStudent(const array<Student, 3>& students, const string& name);

void printStudentsByYear(const array<Student, 3>& students, Year year);

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

    array<Student, 3> students = {s1, s2, s3};

    printStudent(s1);
    printStudent(s2);
    printStudent(s3);

    cout << endl;
    cout << endl;

    Student topper = findTopper(students);

    cout << "TOPPER" << endl;
    printStudent(topper);

    cout << endl;
    cout << endl;

    CGPA avg_cgpa = averageCGPA(students);

    cout << "Average CGPA : " << avg_cgpa << endl;

    cout << endl;
    cout << endl;

    string searchName;

    cout << "Enter student name: ";
    cin >> searchName;

    if (findStudent(students, searchName)) {
        cout << "Student found!" << endl;
    }
    else {
        cout << "Student not found!" << endl;
    }

    cout << endl;
    cout << endl;

    int year_input;

    cout << "Enter year whose students you want to find:" << endl;
    cout << "1. First" << endl;
    cout << "2. Second" << endl;
    cout << "3. Third" << endl;
    cout << "4. Fourth" << endl;
    cout << "Enter choice: ";

    cin >> year_input;

    Year year_details;

    if (year_input == 1) {
        year_details = Year::First;
    }
    else if (year_input == 2) {
        year_details = Year::Second;
    }
    else if (year_input == 3) {
        year_details = Year::Third;
    }
    else if (year_input == 4) {
        year_details = Year::Fourth;
    }
    else {
        cout << "Invalid year!" << endl;
        return 0;
    }

    cout << endl;
    cout << "Students in selected year:" << endl;

    printStudentsByYear(students, year_details);

    return 0;
}


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


Student findTopper(const array<Student, 3>& students) {

    Student topper = students[0];

    for (int i = 1; i < 3; i++) {

        if (students[i].cgpa > topper.cgpa) {
            topper = students[i];
        }
    }

    return topper;
}


double averageCGPA(const array<Student, 3>& students) {

    CGPA total = 0;

    for (int i = 0; i < 3; i++) {
        total += students[i].cgpa;
    }

    return total / 3;
}


bool findStudent(const array<Student, 3>& students, const string& name) {

    for (int i = 0; i < 3; i++) {

        if (name == students[i].name) {
            return true;
        }
    }

    return false;
}


void printStudentsByYear(const array<Student, 3>& students, Year year) {

    for (int i = 0; i < 3; i++) {

        if (students[i].currentYear == year) {
            cout << students[i].name << endl;
        }
    }
}