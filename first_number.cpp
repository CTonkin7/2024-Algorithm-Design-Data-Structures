#include "first_number.h"
// Head recursive
int FirstNumber::number(std::string input) {   
    if (input.size == 0){
        return 0;
    }
    if (isdigit (input[0])){
        return input[0] - '0';
    }
    first_number(input.erase(0,1));
}

//Tail Recursive
void first_number()