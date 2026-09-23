#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    string name;
    int age;
    float marks;
public:
    Student(string name,int age,float marks)
        :name(name),age(age),marks(marks){
        if(age<=0){
            this->age=0;
        }
        if(marks<0){
            this->marks=0;
        }
        if(marks>100){
            this->marks=100;
        }
    }
    string getName()const{
        return name;
    }
    int getAge()const{
        return age;
    }
    float getMarks()const{
        return marks;
    }
    void setMarks(float marks){
        if(marks<0){
            this->marks=0;
        }
        else if(marks>100){
            this->marks=100;
        }
        else{
            this->marks=marks;
        }
    }
};

int main() {

    Student s1("Aditya", 18, 92.5);
    Student s2("Rahul", 19, 85.0);
    Student s3("Priya", 18, 96.5);
    Student s4("Aman", 20, 78.0);
    Student s5("Sneha", 19, 88.5);

    s1.setMarks(95);   // valid
    s2.setMarks(150);  // invalid
    s3.setMarks(-10);  // invalid
    
    cout << endl;

    cout << s1.getName() << endl;
    cout << s1.getAge() << endl;
    cout << s1.getMarks() << endl;

    cout << endl;

    cout << s2.getName() << endl;
    cout << s2.getAge() << endl;
    cout << s2.getMarks() << endl;

    cout << endl;

    cout << s3.getName() << endl;
    cout << s3.getAge() << endl;
    cout << s3.getMarks() << endl;

    cout << endl;

    cout << s4.getName() << endl;
    cout << s4.getAge() << endl;
    cout << s4.getMarks() << endl;

    cout << endl;

    cout << s5.getName() << endl;
    cout << s5.getAge() << endl;
    cout << s5.getMarks() << endl;
    
    return 0;
}