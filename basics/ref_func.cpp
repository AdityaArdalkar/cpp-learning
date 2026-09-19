#include <iostream>
using namespace std;

void change(int &x);

int main() {
    int num = 25;
    change(num);
    cout << num << endl;

    return 0;
}

void change(int &x) {
    x = 100;
}