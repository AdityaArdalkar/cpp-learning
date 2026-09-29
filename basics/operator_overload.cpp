//Understanding operator overloading
#include<iostream>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
    Point operator+(const Point& other) const{
        Point result(x + other.x , y + other.y);
        return result;
    }
    bool operator==(const Point& other) const{
        return x==other.x && y==other.y;
    }
    friend ostream& operator<<(ostream& out, const Point& p) {
        return out << "(" << p.x << "," << p.y << ")";
    }
};
int main(){
    Point p1(2,4);
    Point p2(3,5);
    Point p3=p1+p2;
    cout << p3 << endl;
    Point p4(5,9);
    cout << (p1==p3) << endl;
    cout << (p3==p4) << endl;
}