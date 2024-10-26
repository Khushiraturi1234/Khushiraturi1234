#Using hierarchical inheritance where two numbers are declared in base class. Create one function in first derive class and one-function in second derive class. First derive class displays the first number with the help of their function and the second derive class displays the second function with the help of their function 9. Create a program on hybrid inheritance where we have five classes A, B, C, D and E. Class B, C and D inherit from class A and class E inherit from class B.
#include <iostream>
using namespace std;


class Base {
protected:
    int num1;
    int num2;

public:
    Base(int a, int b) : num1(a), num2(b) {}
};

class Derived1 : public Base {
public:
    Derived1(int a, int b) : Base(a, b) {}

    void displayNum1() {
        cout << "Number 1: " << num1 << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2(int a, int b) : Base(a, b) {}

    void displayNum2() {
        cout << "Number 2: " << num2 << endl;
    }
};


class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

class D {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

class E : public C, public D {
public:
    void displayE() {
        cout << "Class E" << endl;
    }
};

int main() {
    
    Derived1 obj1(5, 10);
    obj1.displayNum1();

    Derived2 obj2(5, 10);
    obj2.displayNum2();

    
    B objB;
    objB.displayA(); 
    objB.displayB(); 

    E objE;
    objE.displayC(); 
    objE.displayD(); 
    objE.displayE(); 

    return 0;
}
