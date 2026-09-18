#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string reversed = "";
    for(int i = s.length() - 1; i >= 0; i--){
        reversed += s[i];
    }
    cout << "Original: " << s << endl;
    cout << "Reversed: " << reversed << endl;
    cout << "Palindrome: ";
    if(s == reversed){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}