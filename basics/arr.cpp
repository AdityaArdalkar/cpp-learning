#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"\nThe elements of the array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << "\nSum : ";
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum;
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"\nThe largest element in the array is: "<<largest;
    int smallest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout<<"\nThe smallest element in the array is: "<< smallest << endl;
    return 0;
}