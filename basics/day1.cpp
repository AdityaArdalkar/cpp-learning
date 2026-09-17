#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int age;
    double height;
    char grade;
    bool isStudent;
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your grade: ";
    cin >> grade;
    cout << "Are you a student? (1 for yes, 0 for no): ";
    cin >> isStudent;
    cout << "Hello," << name << "!" << endl;
    cout << "You are " << age << " years old " << endl;
    cout << "Your height is " << height << " cm" << endl;
    cout << "Your grade is " << grade << endl;
    cout << "You are a student: " << (isStudent ? "Yes" : "No") << endl;
    return 0;
}