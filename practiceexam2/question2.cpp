// write the switch statement to do the following: 

// if (ch == 'C')
//     cout << "do";
// else if (ch == 'D')
//     cout << "re";
// else if (ch == 'E')
//     cout << "me";
// else if (ch ==  'F')
//     cout << "fa" ;
// else if (ch == 'G')
//     cout << "so";
// else if (ch == 'A')
//     cout << "la";
// else if (ch == 'B')
//     cout << "ti";
// else
//     cout << "error";


//write it out first - paper  

#include <iostream>

int main () {
    char ch;
    std::cin >> ch; //gets input from user 

    switch (ch) {
        case 'C':
            std::cout << "do";
            break;
        case 'D':
            std::cout << "re";
            break;
        case 'E':
            std::cout << "me";
            break;
        case 'F':
            std::cout << "fa";
            break;
        case 'G':
            std::cout << "so";
            break;
        case 'A':
            std::cout << "la";
            break;
        case 'B':
            std::cout << "ti";
            break;
        default: 
            std::cout << "error";
            break;
    }
}

//Answer: since the orignal code snippet is testing the variable "ch" we first set "ch" as a char variable, then use std::cin >> ch; to get user input 
//the users input will then be equal to the variable "ch", now we can start our switch 
//cases aren't limited to just numbers (case 1, case 2, case 3, etc.) they can also be reffered to using letters. 
//using the same logic we were to use if we to solve this problem using only numbers applies when we use letters. 
