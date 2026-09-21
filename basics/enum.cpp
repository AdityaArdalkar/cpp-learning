#include<iostream>
using namespace std;

enum class Year{
    First,
    Second,
    Third,
    Fourth
};

int main(){
    Year currentYear = Year :: First;
    if(currentYear==Year :: First){
        cout << "You are in First Year " << endl;
    }
    return 0;
}