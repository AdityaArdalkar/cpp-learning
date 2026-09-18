#include<iostream>
#include<string>
#include<array>
using namespace std;

void printArray(const array<int, 100>& arr, int n);
int main(){
    int n;
    cout << "Enter size: " ;
    cin >> n;
    cout << "Enter elements: ";
    array<int,100> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;
    printArray(arr, n);
    cout << "Sum: ";
    int sum=0;
    for(int i = 0; i < n; i++){
        sum+=arr[i];
    }
    cout << sum << endl;
    cout << "Largest: ";
    int largest=arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
    cout << largest << endl;
    cout << "Smallest: ";
    int smallest=arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            smallest=arr[i];
        }
    }
    cout << smallest << endl;
    cout << "Reverse: " << " { ";
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
    cout<< endl;



    // String Part below



    string  sentence;
    cout << "Enter a sentence: ";
    cin.ignore();  // To ignore the newline character left in the input buffer
    getline(cin, sentence);
    int v_count=0, c_count=0, digi_count=0, space_count=0;
    for(char c : sentence){
        if(c == ' '){
            space_count+=1;
        }
        else if(c >= '0' && c <= '9'){
            digi_count+=1;
        }
        else if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                v_count+=1;
            }
            else{
                c_count+=1;
            }
        }
    }
    cout << "\n" << endl;
    cout << "Length: " << sentence.length() << endl;
    cout << "Vowels: " << v_count << endl;
    cout << "Consonants: " << c_count << endl;
    cout << "Digits: " << digi_count << endl;
    cout << "Spaces: " << space_count << endl;
    cout << "Reverse: " ;
    for(int i = sentence.length()-1; i >= 0; i--){
        cout << sentence[i];
    }
    cout << endl;
    return 0;
}
void printArray(const array<int, 100>& arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}