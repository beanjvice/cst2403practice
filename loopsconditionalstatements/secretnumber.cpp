//Use the knowledge from the lesson to manually control a 
// simple guessing game. Update the starter code to complete the 
// task. Remember the do-while loop and increment operations. Your 
// mission is to increment a number until it matches a secret number 
// and print every attempt.

#include <iostream>

int main () {
    int secretNumber = 7;
    int numberToGuess = 0;

    do{ 
        // TODO: Use an operation to change the guess and print the current guess number.
        numberToGuess ++;
        
        if (numberToGuess == secretNumber){
            std::cout << "You guessed the secret number: " << secretNumber << "!" << std::endl;
        } else {
            std::cout << "Your guessed number was: " << numberToGuess << " this was incorrect :(" << std::endl;\
        }

    } while (numberToGuess != secretNumber);

    return 0;
}