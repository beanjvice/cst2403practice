// A) what keyword stops execution from falling through to the 
// next case in a switch? 
// Answer: break

/// B) predict the output

#include <iostream>

int main () {
    int n = 1;
    switch(++n){
        case 1: 
            std::cout<< "One";
            break;
        case 2: 
            std::cout << "Two";
        case 3:
            std::cout << "Three";
            break;
        default: 
            std::cout << "Default";
    }
    
    return 0;
}

//prediction: TwoThree
//answer: TwoThree