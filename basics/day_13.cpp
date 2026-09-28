#include<iostream>
using namespace std;


class Animal{
public:
    virtual void sound(){
        cout << "Animal makes a sound" << endl;
    }
    virtual ~Animal(){
        cout << "Animal Destructed " << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog is barking " << endl;
    }
    ~Dog(){
        cout << "Dog Destructed " << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override{
        cout << " Cat is meowing " << endl;
    }
    ~Cat(){
        cout << "Cat Destructed " << endl;
    }
};

int main(){
    Animal* a1=new Dog();
    Animal* a2=new Cat();

    a1->sound();
    a2->sound();

    delete a1;
    delete a2;
    return 0;
}