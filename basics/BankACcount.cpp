#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
    string holder;
    double balance;

public:
    static int accountCount;
    BankAccount(string holder,double balance){
        this->holder=holder;
        this->balance=balance;
        accountCount++;
    }
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
};
int BankAccount::accountCount=0;
void BankAccount::deposit(double amount){
    if(amount<=0){
        cout << "Pls enter a valid deposit value " << endl;
    }
    else{
        BankAccount::balance+=amount;
        cout << amount << " deposited succesfully " << endl;
    }
}
void BankAccount::withdraw(double amount){
    if(amount<=0 || amount>balance){
        cout << "Pls enter a valid withdrawal value " << endl;
    }
    else{
        BankAccount::balance-=amount;
        cout << amount << " withdrawn succesfully " << endl;        
    }
}
double BankAccount::getBalance() const{
    return BankAccount::balance;
}
int main(){
    BankAccount a1("Aditya", 10000);
    BankAccount a2("Rahul", 5000);
    a1.deposit(2000);
    a1.withdraw(3000);
    a2.deposit(2000);
    a2.withdraw(3000);
    cout << "Balance of account 1 is " << a1.getBalance() << endl;
    cout << "Balance of account 2 is " << a2.getBalance() << endl;
    cout << BankAccount::accountCount << endl;
    return 0;
}