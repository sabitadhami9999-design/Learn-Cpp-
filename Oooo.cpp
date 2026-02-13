#include <iostream>
using namespace std;

class SimpleCount {
    int value;

public:
    // Simple function to take input
    void get() {
        cout << "Enter a number: ";
        cin >> value;
    }

    // Overload ++ (Prefix)
    void operator++() {
        value = value + 1;
    }

    // Show result
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    SimpleCount obj;

    obj.get();      
    ++obj;          
    obj.display(); 

    return 0;
}
