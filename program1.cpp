# Display the sum of first n natural number using default constructor.
#include <iostream>

class SumNaturalNumbers {
public:
    SumNaturalNumbers(int n = 10) { 
        int sum = (n * (n + 1)) / 2;
        std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;
    }
};

int main() {
    SumNaturalNumbers sum1;
    SumNaturalNumbers sum2(5); 
    return 0;
}


    