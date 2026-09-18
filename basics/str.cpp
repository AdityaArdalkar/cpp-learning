#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;
    cout << "First Character: " << name[0] << endl;
    cout << "Last Character: " << name[name.length() - 1] << endl;
    cout << "Characters: ";
    for(char c : name){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}