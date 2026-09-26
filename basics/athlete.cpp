#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    void introduce() {
        cout << "I am a person" << endl;
    }
};

class Athlete {
public:
    void train() {
        cout << "I am training" << endl;
    }
};

class studentAthelte : public Person,public Athlete{
public:
void study() {
        cout << "I am studying" << endl;
    }
};

int main(){
    studentAthelte sa;
    sa.introduce();
    sa.train();
    sa.study();
    return 0;
}