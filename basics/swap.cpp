#include <iostream>
using namespace std;

void swap(int &a,int &b);
int main(){
    int x,y;
    cout << "Enter two numbers to swap: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x,y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}