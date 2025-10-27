// what will the output be in the following? 
// prediciton : true 

#include <iostream> 

int main () {
    int a, b, c;
    a = b  = 0;
    c = 5;

    if (c < 10 || (a == 0 && b != 0)) {
        std::cout << "True";
    } else { 
        std::cout << "False"; 
    }

    return 0;
}

// Answer: True
// keep in mind || represents the OR logical operator 
// && represents AND
// ! represents NOT 
// since c < 10 is a true statement, that makes the answer true and the block of code will display "True"