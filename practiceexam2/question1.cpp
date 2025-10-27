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
                cout <<"1";
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
