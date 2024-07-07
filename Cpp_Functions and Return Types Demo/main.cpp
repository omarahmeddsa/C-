#include <vector>
#include "LIB.h"
#include <iostream>
std::vector<int>& modifyVector(std::vector<int>& vec){
    

    if (!vec.empty()) {
        vec[0] = 42;
    }
    return vec;
}



int oldAddition(int a, int b){
    return a+b;
}


int newAddition(int a, int b) {
    return a + b;
}
 
auto multiply(double a, double b) -> double {
    return a * b;
}




int main() {
    // Test modifyVector
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    std::cout << "Original vector: ";
    for (const int& val : myVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Modify the vector
    modifyVector(myVector);

    std::cout << "Modified vector: ";
    for (const int& val : myVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Test newAddition
    int sum1 = newAddition(5, 10);
    int sum2 = newAddition(5); // using the default parameter

    std::cout << "Sum of 5 and 10 using newAddition: " << sum1 << std::endl;
    std::cout << "Sum of 5 using newAddition with default parameter: " << sum2 << std::endl;

    // Test multiply
    double product = multiply(3.5, 2.0);
    std::cout << "Product of 3.5 and 2.0 using multiply: " << product << std::endl;

    return 0;
}