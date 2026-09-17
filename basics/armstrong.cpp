#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the number ";
    cin >> n;
    int og=n;
    int count =0;
    while(n!=0){
        n/=10;
        count++;
    }
    n=og;
    int arr[count];
    int i=0;
    while(i<count){
        arr[i]=n%10;
        n/=10;
        i++;
    }
    int arm=0;
    for(int j=0;j<count;j++){
        arm+=pow(arr[j],count);
    }
    if(arm==og){
        cout << "The entered number is Armstrong Number" << endl;
    }
    else{
        cout << "The entered number is not armstrong number" << endl;
    }
    return 0;
}