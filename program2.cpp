Write a program to swap two numbers using parameterized constructor. 

#include <iostream>
using namespace std;

class NumberSwapper {
private:
    int a, b;

public:
    
    NumberSwapper(int x, int y) : a(x), b(y) {}

    
    void swap() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    
    NumberSwapper ns(5, 10);

    cout << "Before swapping: ";
    ns.display();

    
    ns.swap();

    
    cout << "After swapping: ";
    ns.display();

    return 0;
}

    