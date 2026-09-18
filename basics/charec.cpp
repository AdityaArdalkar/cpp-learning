#include<iostream>
#include<string>
using namespace std;

int main(){
    string  sentence;
    cout << "Enter a sentence: ";
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
    cout << "Vowels: " << v_count << endl;
    cout << "Consonants: " << c_count << endl;
    cout << "Digits: " << digi_count << endl;
    cout << "Spaces: " << space_count << endl;
    return 0;
}