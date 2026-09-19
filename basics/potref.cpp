#include<iostream>
using namespace std;

int main(){
    int x=10;
    int *p=&x;
    int &ref=x;
    *p=20;
    ref=30;
    cout << x << endl;
    cout << *p << endl;
    cout << ref << endl;
    return 0;
}