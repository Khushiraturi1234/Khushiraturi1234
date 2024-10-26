Write a program to display the sum of all positive number of array using copy contructor.
#include <iostream>
using namespace std;

class ArraySum {
private:
    int* arr;
    int size;

public:
    
    ArraySum(int* inputArr, int sz) {
        size = sz;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];
        }
    }

    
    ArraySum(const ArraySum& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    int sumOfPositive() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }

    
    ~ArraySum() {
        delete[] arr;
    }
};

int main() {
    int inputArr[] = {-1, 2, 3, -4, 5};
    int size = sizeof(inputArr) / sizeof(inputArr[0]);

    ArraySum arraySum(inputArr, size);  
    ArraySum copiedArraySum = arraySum; 

    cout << "Sum of positive numbers: " << copiedArraySum.sumOfPositive() << endl;

    return 0;
}
