Write a program to display the sum of two integer values, two float values, two char values using constructor overloading 
# include<iostream>
using namespace std;

class Sum {
public:
    
    Sum(int a, int b) {
        cout << "Sum of integers: " << (a + b) << endl;
    }

    
    Sum(float a, float b) {
        cout << "Sum of floats: " << (a + b) << endl;
    }

   
    Sum(char a, char b) {
        cout << "Sum of characters: " << (a + b) << " (ASCII sum)" << endl;
    }
};

int main() {
    
    Sum intSum(5, 10);        
    Sum floatSum(3.5f, 2.5f);
    Sum charSum('A', 'B');  

    return 0;
}
