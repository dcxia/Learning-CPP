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
// This is a forward Declaration, it allows the compiler to know of add before
// it is called by main2_6()
// It is a type of declaration
////////////////////////////////////////////////////////////////////////////////
int add(int x, int y);

int main2_6(){
   //insert code here 
   // calls add()
}

int add(int x, int y){
    return x + y;
}


////////////////////////////////////////////////////////////////////////////////
int main(){
    //main2_3();
    return 0;
}