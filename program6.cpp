Write a program to display the sum of two numbers using multilevel inheritance where one numbers is declared in base class and one number declared in first derived class. Function is defined in second derived class to sum two numbers. 

#include <iostream>
using namespace std;


class Base {
protected:
    int num1; 

public:
    void setNum1(int n) {
        num1 = n;
    }
};

class Derived1 : public Base {
protected:
    int num2; 

public:
    void setNum2(int n) {
        num2 = n;
    }
};


class Derived2 : public Derived1 {
public:
    void displaySum() {
        int sum = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    Derived2 obj;
    
    
    obj.setNum1(10);
    obj.setNum2(20);
    
    
    obj.displaySum();
    
    return 0;
}
