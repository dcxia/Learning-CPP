// importing iostream
#include <iostream>

#define PRINT_JOE
#define CURIOUS_CASE 0

int main(){

    // if PRINT_JOE is defined, compile this code
    #ifdef PRINT_JOE
        std::cout << "Joe\n";
    #endif

    // if PRINT_BOB is not defined, compile this code
    #ifndef PRINT_BOB
        std::cout << "BOB\n";
    #endif

    // dont compile anything starting here.
    #if 0 
        std::cout << "Never ot be seen in the light of day";
    #endif

    // Depending on the value of the object we can skip compiling code.
    #if CURIOUS_CASE
        std::cout << "This is a curious case!!!";
    #endif
}


