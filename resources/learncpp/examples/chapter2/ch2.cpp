#include <iostream>


////////////////////////////////////////////////////////////////////////////////
void printA(){
    std::cout<< "A\n";
}

void learningCPP2_2(){

    // This statement will result in a blank line since nothing is being 
    //      returned from printA

    // std::cout << printA() << "\n";

}
////////////////////////////////////////////////////////////////////////////////
int getValueFromUser(){
    std::cout << "Enter an Integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value){
        std::cout << value << " doubled is: " << value * 2 <<"\n";
}

int main2_3(){
    printDouble(getValueFromUser());
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
int main(){
    //main2_3();
    return 0;
}