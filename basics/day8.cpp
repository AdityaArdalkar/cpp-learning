#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int age;
    float marks;

    void introduce(){
        cout << "My name is " << name << endl;
        cout << "I am " << age << " years old " << endl;
        cout << "My marks are " << marks << endl;
    }
};

int main(){

    Student s1;
    s1.name="Aditya";
    s1.age=18;
    s1.marks=92.5;

    s1.introduce();

    return 0;
}