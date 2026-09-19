#include<iostream>
using namespace std;
void swapNumbers(int &a, int &b);
int main(){
    int x,y;
    cout << "Enter the 2 numbers: ";
    cin >> x >> y;
    cout << "Before: " << x << " " << y << endl;
    swapNumbers(x,y);
    cout << "After: " << x << " " << y << endl;
    return 0;
}
void swapNumbers(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}