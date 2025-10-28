// prompt: You're in a kitchen, ready to bake some cupcakes! 
// Your mission is to write a program that bakes 10 cupcakes. 
// For each cupcake, your program should inform you that one more 
// is ready. This will be a great practice for understanding how 
// "while" loops work in C++. Remember, every cupcake counts!

#include <iostream> 

int main () {
    int cupcakesBaked = 1;
    
    while(cupcakesBaked <= 10){
        std::cout << "there are " << cupcakesBaked << " baked cupcakes!" << std::endl;
        cupcakesBaked += 1;
    }

    return 0;
}

// runs 10 times, prints from 1 - 10 
// += 1 is adding one to cupcakesBaked variable. 