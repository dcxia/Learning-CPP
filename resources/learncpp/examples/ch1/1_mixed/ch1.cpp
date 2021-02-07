#include <iostream>

using namespace std;


// Section 1.4 at learningcpp.com
// Learning about declaring and assigning variables
int LCpp1_4(){
    // Copy initialization of value 5 into variable width
    int width = 5;
    // Direct Init of value 5 into variable length
    // direct is more efficient since we're not instantiating 5 and copying, we're direclty instantiating.
    int length(5);

    // Additionally, you can list initialize data.
    // Best practice is to directly initialize lists when possible.
    int height{4};  // Always try to do this when possible.
    int height2 = {2};

    return 0;
}



// Section 1.5 at learningcpp.com
// Learning about iostream and using cin, cout
int LCpp1_5(){
    std::cout << "Hello World!" << std::endl;

    int x{5};
    std::cout << x;
    std::cout << "Hello" << "World \n";

    std::cout <<"Hello \n World \n";

    /*
     *  Best practice 
     *  is to use \n instead of endl when outputting text to console.
     *  
     *  Declare and instantiate a variable that has not been used before when accepting user input.
     */

    std::cout <<"Enter a number.\n";
    int in{};
    std::cin >> in;
    std::cout << "You entered " << in << '\n';
    return 0;
}



// section 1.6 at learningcpp.com
// uninitialized variables and undefined behaviour
int LCpp1_6(){
    int x;

    // Computer will assign unused memory to x, the value of memory at that 
    // location is undetermined.
    std::cout << x;

    // Because uninit variables have a value assosiated with them, it can make 
    // debugging difficult.
    // REMEMBER TO ALWAYS INIT VARIABLES so that they at least have some value 
    // assosiated with them.

    return 0;
}

// Naming conventions
void learningCpp1_7(){
    // See chapter1 notes
}

//Formatting and whitespace
void learningCpp1_8(){
    /*  BEST PRACTICES

    1.  Keep your lines less than 80 character, I put a ruler in to help us
        with that in my IDE.

    2.  If you need to split a long line, the operater should be placed
        on the next line and not the current line.

        Also remember to indent to indicate that the statement is hella long.

        eg)

        std:cout << 3 + 4
            + 5 + 6
            * 7 * 8;


    3.  Use Whitespace to make your code easier to read.

        cost            = 21;
        pricePerItem    = 24;
        value           = 5;;
        numberOfItems   = 17;
     */
}

// Intro to literals and operators
void learningCpp1_9(){
    // check notes 
}

// Intro to expressions
void learningCpp1_10(){
    // 2+3 is expression that evaluates to 5

    int x{2+3};
}


int main(){
    std::cout << "Hello World\n";

    // When calling a function, the function must be declared ahead of the point
    // where it is used.
    // LCpp1_5();
    // LCpp1_6();
    return 0;
}



/*
 * Multiline comment.
 * lol.
 * 
 */
