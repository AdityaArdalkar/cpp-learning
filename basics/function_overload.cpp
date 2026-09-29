//Understanding Function overloading
#include<iostream>
using namespace std;

class Calculator{
public:
    int multiply(int a,int b){
        return a*b;
    }
    int multiply(int a,int b,int c){
        return a*b*c;
    }
    double multiply(double a,double b){
        return a*b;
    }
    double multiply(int a,double b){
        return a*b;
    }
};

int main(){
    Calculator calc;
    cout << calc.multiply(2,3) << endl;
    cout << calc.multiply(2,3,4) << endl;
    cout << calc.multiply(2.3,3.4) << endl;
    cout << calc.multiply(2,3.4) << endl;
}