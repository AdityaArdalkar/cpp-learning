#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the 2 numbers to perform calculations " << endl;
    cin >> a >> b;
    cout << "Enter the operation you want to perform (+, -, *, /): ";
    char op;
    cin >> op;
    switch(op){
        case '+':
            cout << "The sum is: " << a + b << endl;
            break;
        case '-':
            cout << "The difference is: " << a - b << endl;
            break;
        case '*':
            cout << "The product is: " << a * b << endl;
            break;
        case '/':
            if(b != 0){
                cout << "The quotient is: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please enter +, -, *, or /." << endl;
    }
}