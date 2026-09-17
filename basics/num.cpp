#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number till which you want to print the numbers: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout<< i << endl;
    }
    return 0;
}