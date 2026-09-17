#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number that you want to reverse; ";
    cin >> n;
    int og=n;
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n/=10;
    }
    cout << "The reversed number of " << og << "is " << rev << endl;
    return 0;
}