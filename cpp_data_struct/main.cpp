#include <iostream>
#include <string>
#include <fstream>

void myFunction() {
    std::string name = "function name";
    std::cout << name << std::endl;

}


class MyCard {
    public:
    std::string name;
    int num;




        void cardName () {
            std::cout << "enter card name: " << std::endl;
            std::getline(std::cin,name);
            std::cout << "the card is called: " << name << std::endl;
        }
        void saveCard() {
            std::ofstream MyFile("card.json", std::ios_base::app);
            MyFile << "[{" << name << ", " << int{num} << "}]" << std::endl;
            MyFile.close();
            std::cout << "Saved this card: " << std::endl;

        }
        int greatThanZero(int num) {
            if (num > 0) {
                std::cout << "this is a number " << num << std::endl;
                return num;

            }
            else {
                std::cout << "this is NOT number" << std::endl;
                return num;
            }       
        }


};

void createCard(MyCard card) {
    MyCard card1;
    card1.cardName();
    std::cout << "Enter an attack power: " << std::endl;
    int num;
    std::cin >> num;
    card1.greatThanZero(num);
    card1.saveCard();
}



// class Creature : public MyCard {
//     public:

//     typedef struct Creature {
//        int Health;
//        int Attack;
//     } Creature;

//     void cardName () {
//         std::cout << "enter card name: " << std::endl;
//         std::cin >> name;
//         std::cout << name;
//     }

// };




int main(){
    std::cout << "hello world" << std::endl;
    myFunction();
    MyCard imp_card;
    createCard(imp_card);
    //card();
   

    return 0;
}
