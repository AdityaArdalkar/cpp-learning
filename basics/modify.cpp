#include<iostream>
using namespace std;

void modify(int x);
void modifyReference(int &x);
int main(){
    int a=10;
    cout << "Before modify: a = " << a << endl;
    modify(a);
    cout << "After modify: a = " << a << endl;
    cout << "Before modify: a = " << a << endl;
    modifyReference(a);
    cout << "After modify: a = " << a << endl;
    return 0;
}
void modify(int x){
    x=100;
}
void modifyReference(int &x){
    x=100;
} 