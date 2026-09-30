#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    string holderName;
    double balance;
public:
    static int accountCount;
    BankAccount(int accountNumber, string holderName, double balance){
        this -> accountNumber = accountNumber;
        this->holderName = holderName;
        this->balance = balance;
        accountCount++;
    }
    virtual ~BankAccount() = default;
    void deposit(double amount){
        if(amount <= 0){
            cout << "Invalid deposit amount" << endl; 
        }
        else{
            balance+=amount;
        }
    }
    virtual void withdraw(double amount){
        if(amount <= 0){
            cout << "Invalid withdrawal amount" << endl; 
        }
        else if(amount> balance){
            cout << "Insufficient balance" << endl;
        }
        else{
            balance -= amount;
        }
    }
    void displayAccountInfo() const{
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
    double getBalance() const {
        return balance;
    }

    void setBalance(double newBalance) {
        balance = newBalance;
    }

    static int getAccountCount() {
        return accountCount;
    }
};

class SavingsAccount: public BankAccount{
private:
    double interestRate;
public:
    SavingsAccount(int accountNumber, string holderName, double balance,double interestRate):BankAccount(accountNumber,holderName,balance){
        this->interestRate = interestRate;
    }
    double calculateInterest() const{
        double interest = getBalance() * interestRate/100;
        return interest;
    }
};

class CurrentAccount : public BankAccount{
private:
    double overdraftLimit;
public:
    CurrentAccount(int accountNumber, string holderName, double balance,double overdraftLimit):BankAccount(accountNumber,holderName,balance){
        this->overdraftLimit=overdraftLimit;
    }
    void withdraw(double amount) override{
        if(amount <= 0){
            cout << "Invalid withdrawal amount" << endl; 
        }
        else if(amount > (getBalance()+overdraftLimit)){
            cout << "Insufficient balance and OverDraft Limit" << endl;
        }
        else{
            setBalance(getBalance()-amount);
        }
    }
};

int BankAccount::accountCount=0;
int main(){
    BankAccount b1(101, "Aditya", 5000);
    b1.displayAccountInfo();
    b1.deposit(1000);
    b1.displayAccountInfo();
    b1.withdraw(2000);
    b1.displayAccountInfo();
    b1.deposit(-500);
    b1.withdraw(10000); 
    SavingsAccount s1(102, "Rahul", 10000, 5);
    s1.displayAccountInfo();
    cout << "Interest: " << s1.calculateInterest() << endl;
    CurrentAccount c1(103, "Aditya", 5000, 2000);
    c1.displayAccountInfo();
    c1.withdraw(6000);
    c1.displayAccountInfo();
    c1.withdraw(1500);
    BankAccount* accounts[] = {&b1,&s1,&c1};
    for(int i=0;i<3;i++){
        accounts[i]->withdraw(500);
        accounts[i]->displayAccountInfo();
    }
    cout<<BankAccount::getAccountCount()<<endl;
}