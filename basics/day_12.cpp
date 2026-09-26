#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    void introduce(){
        cout << "Hello there " << endl;
    }
};

class Student : virtual public Person{
public:
    void study(){
        cout<< "I am studying " << endl;
    }
};

class Athlete : virtual public Person{
public:
    void train(){
        cout<< "I am training " << endl;
    }
};

class StudentAthlete : public Student,public Athlete{
public:
    void compete(){
        cout<< "I am competing " << endl;
    }
};

int main(){
    StudentAthlete sa;
    sa.introduce();
    sa.study();
    sa.train();
    sa.compete();
    return 0;
}