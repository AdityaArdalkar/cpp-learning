#include<iostream>
#include<string>
using namespace std;

class Vehicle{
public:
    string brand;
    Vehicle(string brand) {
        this->brand=brand;
        cout << "Vehicle constructor" << endl;
    }
    void start(){
        cout << brand << " has started " << endl;
    }
};

class Car : public Vehicle{
public:
    Car(string brand):Vehicle(brand) {
        cout << "Car constructor" << endl;
    }
    void drive(){
        cout << brand << " is on a drive " << endl;
    }
};
int main(){
    Car c1("BMW");
    c1.start();
    c1.drive();
    return 0;
}