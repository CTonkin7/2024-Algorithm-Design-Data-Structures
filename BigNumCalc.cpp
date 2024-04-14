#include <iostream>
#include "BigNumCalc.h"

std::list<int> bigNumCalc::buildBigNum(std::string numString) {
    std::list<int> result;
    for (char c : numString) {
        if (isdigit(c)) {
            result.push_back(c - '0');
        }
    }
    return result;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> sum;
    int carry = 0;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    while (it1 != num1.rend() || it2 != num2.rend() || carry) {
        int digit = carry;
        if (it1 != num1.rend()) {
            digit += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            digit += *it2;
            ++it2;
        }
        sum.push_front(digit % 10);
        carry = digit / 10;
    }
    return sum;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> diff;
    int borrow = 0;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    while (it1 != num1.rend() || it2 != num2.rend()) {
        int digit = borrow;
        if (it1 != num1.rend()) {
            digit += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            digit -= *it2;
            ++it2;
        }
        if (digit < 0) {
            digit += 10;
            borrow = -1;
        } else {
            borrow = 0;
        }
        diff.push_front(digit);
    }
    // Remove leading zeroes
    while (diff.size() > 1 && diff.front() == 0) {
        diff.pop_front();
    }
    return diff;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> product;
    if (num2.empty() || num2.front() == 0) {
        product.push_back(0);
        return product;
    }
    int carry = 0;
    for (auto it = num1.rbegin(); it != num1.rend(); ++it) {
        int digit = (*it * num2.front()) + carry;
        product.push_front(digit % 10);
        carry = digit / 10;
    }
    if (carry > 0) {
        product.push_front(carry);
    }
    return product;
}
