#include <iostream>


int main(){

    std::cout <<  "Enter an Integer:";      // Insertion

    int num{0};                             // BEST PRACTICE
    std::cin >> num;                        // Extraction

    // Concatonating strings, use insertion.
    std::cout << "Double that number is: " << (2 * num) << "\n";
    std::cout << "Triple that number is: " << (3 * num) << "\n";



    return 0;
}


