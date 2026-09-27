#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    string name;
    int salary;
    int age;
public:
    Employee(string name,int salary,int age):name(name),salary(salary),age(age){
        cout << "Employee Constructed" << endl;
        if (age <=0){
            this->age=18;
        }
        if (salary<0){
            this->salary=0;
        }
    }
    string getName() const{
        return name;
    }
    int getSalary() const{
        return salary;
    }
    int getAge()const{
        return age;
    }
    void setSalary(int salary){
        if(salary<0){
            this->salary=0;
        }
        else{
            this->salary=salary;
        }
    }
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main(){
    Employee e1("Aditya",50000,18);
    cout << "Name: " << e1.getName() << endl;
    cout << "Age: " << e1.getAge() << endl;
    cout << "Salary: " << e1.getSalary() << endl;
    e1.setSalary(70000);
    cout << "Salary: " << e1.getSalary() << endl;
    cout << endl;
    e1.displayDetails();
}