//convert this if else ladder into a switch statement

#include <iostream>

int main () {
    int option = 2;
    // if (option == 1){ 
    //     std::cout << "Play";
    // } else if (option == 2) {
    //     std::cout << "Pause";
    // } else if (option == 3) {
    //     std::cout << "Stop";
    // } else {
    //     std::cout << "Invalid";
    // }

    switch (option){
        case 1:
            std::cout << "Play";
            break;
        case 2:
            std::cout << "Pause";
            break;
        case 3: 
            std::cout << "Stop";
            break;
        default: 
            std::cout << "Invalid";
            break;
    }
    
    return 0;
}

