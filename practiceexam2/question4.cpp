//A what will the output be in the following? 
#include <iostream>

// int main () {
//     int icount;
//     do{
//         icount = 0;
//         std::cout << "The count is " << icount << std::endl; 
//     }while(icount < 10);
    
//     return 0;
// }

// prediction : "The count is 1,2,3,4,5,6,7,9,10" on different lines..??
// answer: it printed "The count is 0" continously
// this is most likely because there's no indication of movement to the icount, itll always remain 0 therefore the if statement is always true



//B what will the output be in the following? 

// int main () {
//     int icount = 0;
//     do{
//         std::cout << "The count is " << icount << std::endl;
//     }while(++icount<10);
// }

//prediction: prints "The count is 0,1,2,3,4,5,6,7,8,9" with starting on a new line every run the program does until the statment is false..??
//answer: it was right :D



//C what will the output be in the following? 

int main (){
    for (int n = 5; n > 0; n--) {
        std::cout << n;
    }
}

//prediction: will print 5, 4, 3, 2, 1 on one line
// answer: yes but no commas
//this is the correct result because for when int = 5 and is greater than 0 the program will decrement by one, which will result the print to be 54321 but stops at 1 because 0 is not greater than 0 

