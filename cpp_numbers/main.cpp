#include <iostream>
#include <string>
#include <fstream>

void myFunction() {
    std::string name = "function name";
    std::cout << name << std::endl;

}



class Range {
    public:
        int a;
        int b;

        int compareValues (int a, int b) {
            if (a > b) {
                std::cout << a << " is greater than " << b << std::endl;
                return a;
            } 
            else if (a == b) {
                std::cout << a << " is the same as " << b << std::endl;
                return a, b;
            } else {
                std::cout << a << " is less than " << b << std::endl;
                return b;
            }
        }


};


int main(){
    std::cout << "hello world" << std::endl;
    myFunction();
    //card();
    Range range;
    range.compareValues(1, 3);
    int a;
    int b;
    // std::cout << "enter a numer" << std::endl;
    // std::cin >> a;
    return 0;
}
