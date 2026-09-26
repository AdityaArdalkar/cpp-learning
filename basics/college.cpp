#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    void introduce() {
        cout << "I am a person" << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "I am studying" << endl;
    }
};

class CollegeStudent : public Student {
public:
    void attendCollege() {
        cout << "I attend college" << endl;
    }
};

int main(){
    CollegeStudent c;
    c.introduce();
    c.study();
    c.attendCollege();
    return 0;
}