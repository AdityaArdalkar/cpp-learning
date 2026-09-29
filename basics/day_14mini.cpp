#include<iostream>
using namespace std;

class Money{
private:
    double amount;
public:
    Money(double amount){
        this->amount=amount;
    }
    Money operator+(const Money& other) const{
        Money result(amount + other.amount);
        return result;
    }
    bool operator==(const Money& other) const{
        return amount==other.amount;
    }
    friend ostream& operator<<(ostream& out,const Money &m){
        return out << "(" << m.amount << ")";
    }
};
int main(){
    Money m1(100.50);
    Money m2(50.25);

    Money m3 = m1 + m2;

    cout << m3 << endl;

    cout << (m1 == m2) << endl;
}