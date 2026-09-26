#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    string name;

    void eat(){
        cout << name << " is eating " << endl;
    }
};

class Dog : public Animal{
public:
    void bark(){
        cout << name << " is barking " << endl;
    }
};

int main(){
    Dog d1;
    d1.name = "Bruno";
    d1.eat();
    d1.bark();
    return 0;
}