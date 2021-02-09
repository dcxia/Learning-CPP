#include <iostream>
#include<vector>
#include<string>

#include <plog/Log.h> //include logger header

using namespace std;


void vsCodeExample(){
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", 
    "and the C++extension!"};  

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

int getUserInput(){
    LOGD << "getUserInput() called";

    std::cout<< "Enter a number pls: ";
    int x{};
    std::cin >> x;
    return x;
}


int main(){
    plog::init(plog::none, "Logfile.txt");
    // plog::init(plog::debug, "Logfile.txt");

    LOGD << "main() called";

    vsCodeExample();

    int x{getUserInput()};
    std::cout << "You entered: " << x;
    return 0;
}
