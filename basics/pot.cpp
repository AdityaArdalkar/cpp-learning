#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int *p = &x;

    cout << "Value: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Address stored in p: " << p << endl;
    cout << "Value through p: " << *p << endl;
    cout << endl;
    *p=100;
    cout << "After Modification: " << endl;
    cout << "Value of x: " << x << endl;
    return 0;
}