#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
        cout << "Person Constructed " << endl;
    }
    void introduce(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person{
private:
    int rollNo;
public:
    Student(string name,int age,int rollNo): Person(name,age){
        this->rollNo=rollNo;
        cout << "Student Constructed " << endl;
    }
    void study(){
        cout << name <<" is studying "<< endl;
    }
    int displayRollNo() const{
        return rollNo;
    }
};

int main(){
    Student s1("Aditya",18,101);
    s1.introduce();
    cout << "Roll No: " << s1.displayRollNo() << endl;
    s1.study();
    return 0;
}