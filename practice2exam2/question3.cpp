//what will this code output and why?

#include <iostream>

int main () {
    int x = 3, y = 5, z = 0;

    if ((x < y && z == 0 ) || (y > 10)){
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}

//prediction: Yes. Since x < y && z == 0 is true in the OR 
// statement against y > 10, the if statement is true disregarding 
// if the y > 10 is true or false. 

//answer: i was right mueheheheh