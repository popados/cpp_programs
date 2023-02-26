#include <iostream>
#include <string>
#include <fstream>

void myFunction() {
    std::string name = "function name";
    std::cout << name << std::endl;

}


typedef struct {
char name[20];
int age;
char type;
    } Card;




class MyCard{


    public:
        std::string name;

        void cardName () {
            std::cout << "enter card name: " << std::endl;
            std::getline(std::cin, name);
            std::cout << name;
        }
        void saveCard() {
            std::ofstream MyFile("card.dat", std::ios_base::app);
            std::cout << "card saved!";
            MyFile << name << std::endl;
            MyFile.close();

        }


};


int main(){
    std::cout << "hello world" << std::endl;
    myFunction();
    //card();
    MyCard card;
    card.cardName();
    card.saveCard();
    return 0;
}
