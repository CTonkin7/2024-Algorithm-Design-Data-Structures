#include <iostream>
#include "bigNumCalc.h"

int main() {
    bigNumCalc calculator;

    std::string numString1 = "9876543210";
    std::string numString2 = "1234567890";

    std::list<int> num1 = calculator.buildBigNum(numString1);
    std::list<int> num2 = calculator.buildBigNum(numString2);

    std::list<int> sum = calculator.add(num1, num2);
    std::list<int> difference = calculator.sub(num1, num2);
    std::list<int> product = calculator.mul(num1, num2);

    std::cout << "Sum: ";
    for (int digit : sum) {
        std::cout << digit;
    }
    std::cout << std::endl;

    std::cout << "Difference: ";
    for (int digit : difference) {
        std::cout << digit;
    }
    std::cout << std::endl;

    return 0;
}
