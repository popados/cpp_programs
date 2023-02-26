#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void myFunction() {
    std::string name = "function name";
    std::cout << name << std::endl;

}


int main(){
    std::cout << "hello world" << std::endl;
    myFunction();

    int userInput;
    cin >> userInput;

    switch(userInput) {
        case 1:
            cout << "pressed 1" << endl;
            break;
        case 2:
            cout << "pressed 2" << endl;
            break;
        case 3:
            cout << "pressed 3" << endl;
            break;
        default:
            cout << "no option selected" << endl;
            break;
    }

}
