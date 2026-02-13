
#include<iostream>
using namespace std;

class Distance { 
private:
    int feet;
    int inches;
public:
    // Default values 
    Distance(int x=0 , int y=0 ) {
        feet = x;
        inches = y;
    }

    void display() {
        cout << "(" << feet << " feet, " << inches << " inches)" << endl;
    }
    friend Distance operator +(Distance &,Distance &);
};

Distance operator+(Distance &d1,Distance &d2) {
        Distance d3; 
        d3.feet = d1.feet + d2.feet;
        d3.inches = d1.inches + d2.inches;
        d3.feet += d3.inches / 12;
        d3.inches %= 12;
        return d3;
}
int main() {
    Distance d1(12, 12);
    Distance d2(10, 34);
    Distance d3 = d1 + d2;
    d3.display();
    return 0;
}
