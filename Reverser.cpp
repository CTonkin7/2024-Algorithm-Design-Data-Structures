#include <iostream>
#include "Reverser.h"
#include <string>
#include <cmath>

int Reverser::reverseDigit(int value){
    int reversedNumber = 0; 
    if(value<10){
        return value;
    } else {
        int lastDigit = value % 10; // assigns the last digit of value to lastDigit
        int remainingDigits = value / 10;   // assigns the remaining digits of value to remainingDigits
        int reversedRemaining = reverseDigit(remainingDigits); // calls reverseDigit with remainingDigits as the argument
        int numDigits = 0; // initializes numDigits to 0
        int temp = reversedRemaining; // assigns reversedRemaining to temp

        while(temp > 0){ 
            temp = temp / 10; 
            numDigits++;    // This wile loop counts the number of digits in reversedRemaining
        }
        return (lastDigit * pow(10, numDigits)) + reversedRemaining; // returns the reversed number
    }
}

std::string Reverser::reverseString(std::string characters){    
    if(characters.length() == 1) {
        return characters; // Base case
    } else {
        char lastChar = characters.back();   // assigns the last character of characters to lastChar
        std::string remainingChars = characters.substr(0,characters.length()-1); // assigns the remaining characters of characters to remainingChars
        std::string reversedRemaining = reverseString(remainingChars); // calls reverseString with remainingChars as the argument
        return (lastChar + reversedRemaining); // returns the reversed string
    }

}
