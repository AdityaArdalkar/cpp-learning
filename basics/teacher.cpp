#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    void introduce(){
        cout << "Hello there " << endl;
    }
};

class Student : public Person{
public:
    void study(){
        cout << "I am a student " << endl;
    }
};

class Teacher : public Person{
public:
    void teach(){
        cout << "I am a teacher " << endl;
    }
};
int main(){
    Student s1;
    Teacher t1;
    s1.introduce();
    s1.study();
    cout << endl;
    t1.introduce();
    t1.teach();
    return 0;
}