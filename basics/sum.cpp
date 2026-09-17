#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number till which you want to find the sum: ";
    cin >> n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}