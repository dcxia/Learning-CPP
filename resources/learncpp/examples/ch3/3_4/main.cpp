#include <iostream>

int main(){
    std::cout << "This output is buffered!\n ";
    std::cerr << "This output is not buffered!";
    return 0;
}
