#include "square.h"
#include "geometry.h"

#include<iostream>

int main(){
    std::cout << "a square has " << getSquareSides() << "sides \n";
    std::cout << "a square of length 5 has a perimeter of "
        << getSquarePerimeter(5) << "\n"; 
}
