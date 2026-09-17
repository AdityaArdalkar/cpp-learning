#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number whose number of digits you want to find : ";
    cin >> n;
    int og=n;
    int count =0;
    while(n!=0){
        n/=10;
        count++;
    }
    cout << "The entered number has " << count << " digits." << endl;
    return 0;
}