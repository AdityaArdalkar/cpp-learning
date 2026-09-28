#include<iostream>
#include<string>
using namespace std;

class Calculator{
public:
    int add(int n,int m){
        return n+m;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    double add(double x,double y){
        return x+y;
    }
};
int main(){
    Calculator c1;
    cout << c1.add(2,5) << endl;
    cout << c1.add(2,6,9)<< endl;
    cout << c1.add(2.3,3.4) << endl;
    return 0;
}