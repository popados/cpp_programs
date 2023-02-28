#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void myFunction() {
    std::string name = "function name";
    std::cout << name << std::endl;

}

void createFile() {
    ofstream MyFile("card.json", ios_base::app);

}


class CardCreator {
    private:
        bool isCreature;
        bool isCastable;

    public:
        char name[16];
        int hp;
        int atk;
        int mana;
        int cards_to_create;

        bool fileCheck() {
            if(fopen("card.json", "r")) {
                cout << "found" << endl;
                return true;
            } else {
                cout << "Not found" << endl;
                // ofstream MyFile("card.json", ios_base::app);
                // MyFile.close();
                return false;
            }


        };

        int CardsToCreate() {
            cout << "enter number of cards to create: ";
            cin >> cards_to_create;
            return cards_to_create;
            //return cards_to_create;
            //enter cards to create
            // user selection > create cards > num of cards to create > get name, hp, atk, mana

        }

};

void userSelection (CardCreator machine) {
    cout << "enter 1, 2, or 3. any other key will exit." << endl; 
    int userInput;
    cin >> userInput;
    CardCreator machine1;

    switch(userInput) {
        case 1:
            cout << "pressed 1" << endl;
            cout << "cards left: " << machine1.cards_to_create << endl;
            //return machine1.cards_to_create;
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


int main(){
    std::cout << "hello world" << std::endl;
    myFunction();
    CardCreator machine;
    machine.fileCheck();
    machine.cards_to_create = 0;
    userSelection(machine);
    cout << "is this random? " << machine.cards_to_create << endl;
    machine.CardsToCreate();
    while(machine.cards_to_create > 0) {
        machine.cards_to_create--;
        cout << "cards to create: " << machine.cards_to_create << endl;
        //create cards
        //ask name, atk, hp, mana, iscreature, iscastable.
    }


}
