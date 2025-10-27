// A) What statement can almost always ends each case statement in a switch? 
    // Answer: break;

//B) What will print in the following? 

#include <iostream>
using namespace std;

int main () { 
    int icount = 0;
    
    while(icount < 3){
        switch(++icount){
            case 1: 
                cout << "1";
            case 2: 
                cout << "2";
            case 3: 
                cout << "3";
            case 4: 
                cout << "4";
            default: 
                cout << "Oh" << endl;
        }
    }
    return 0;
}


// This will print "1234Oh, 234Oh, 34Oh" 
//Why?
// icount starts at 0, each loop iteration begins with the switch statment incrementing icount by 1 (++icount).
// none of the case statements have break statements so once a case is matched all the following case statements will execute including the default until icount is greater than 4. 
