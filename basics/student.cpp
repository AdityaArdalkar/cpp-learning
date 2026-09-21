#include <iostream>
#include<string>
using namespace std;

struct Student {
    string name;
    int age;
    string branch;
    double cgpa;
};

void printStudent(const Student&s){
    cout << "Details" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age; " << s.age << endl;
    cout << "Branch: " << s.branch << endl;
    cout << "CGPA: " << s.cgpa << endl;
    cout << "-------------------------------" << endl;
}

int main(){
    cout << "Welcome " << endl;
    Student s1={"Aditya",18,"CE",9.7};
    Student s2={"Arnav",19,"BBA",8.9};
    printStudent(s1);
    printStudent(s2);
    return 0;
}