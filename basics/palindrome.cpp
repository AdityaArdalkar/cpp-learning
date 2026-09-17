#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number that you want to check for palindrome: ";
    cin >> n;
    int og=n;
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n/=10;
    }
    if(og==rev){
        cout << og << " is a palindrome number." << endl;
    }
    else{
        cout << og << " is not a palindrome number." << endl;
    }
    return 0;
}