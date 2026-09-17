#include<iostream>
using namespace std;
int square(int x);
int main(){
    int n;
    cout << "Enter the number whose square you want to find: ";
    cin >> n;
    int ans=square(n);
    cout << "Square of " << n << " is " << ans << endl;
    return 0;
}
int square(int x){
    return x*x;
}