#include<iostream>
#include<string>
using namespace std;

class Rectangle{
public:
    int length;
    int width;
    static int count;
    void calculateArea();
    void compareArea(Rectangle other);
    Rectangle(){
        cout << "Default Constructor " << endl;
        length = 0;
        width = 0;
        count++;
    }
    Rectangle(int len){
        cout << "One Parameter " << endl;
        length = len;
        width = 1;
        count++;
    }
    Rectangle(int len,int wid){
        cout << "Two Parameter" << endl;
        length = len;
        width = wid;
        count ++;
    }
    ~Rectangle(){
        cout << "Destroying Rectangle " << length << " x " << width << endl; // DEstrucor is called when the object is destroyed
    }
};
void Rectangle::calculateArea(){
        int area = length * width;
        cout << "Area: " << area << endl;
    }

void Rectangle::compareArea(Rectangle other) {
    int area1 = length * width;
    int area2 = other.length * other.width;

    if (area1 > area2) {
        cout << "Current rectangle is larger" << endl;
    }
    else if (area1 < area2) {
        cout << "Other rectangle is larger" << endl;
    }
    else {
        cout << "Both rectangles have the same area" << endl;
    }
}

int Rectangle::count = 0;
int main(){
    Rectangle r1;
    Rectangle r2(10);
    Rectangle r3(10,5);
    r1.calculateArea();
    r2.calculateArea();
    r3.calculateArea();
    r3.compareArea(r2);
    cout << Rectangle::count << endl;
    return 0;
}