#include <iostream>
#include <string>
#include <fstream>

void myFunction() {
    std::string name = "function name";
    std::cout << name << std::endl;

}


class DataTypes {
    public:
        unsigned int *INT;
        char *c;
        bool *isFalse; 


    unsigned int INT() {

    std::cout << "Enter an attack power: " << std::endl;
    std::cin >> INT;
    if (INT > 0) {
        //std::cout << num << std::endl;
        std::cout << "this is a number " << num << std::endl;

    }
    else {
        std::cout << "this is NOT number" << std::endl;
    }

}





}

int main(){
    std::cout << "hello world" << std::endl;
    myFunction();

}
