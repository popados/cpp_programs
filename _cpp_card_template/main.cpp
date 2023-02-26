#include <iostream>
#include <string>
#include <fstream>
using namespace std;



ofstream MyFile("card.json", ios_base::app);

void myFunction() {
    string name = "function name";
    cout << name << endl;

}


class MyCard {
    public:
    string name;
    int num;

        void cardName () {
            cout << "enter card name: " << endl;
            getline(cin,name);
            cout << "the card is called: " << name << endl;
        }
        void saveCard() {
            string atk_pow = to_string(num);
            
            MyFile << "{" << "\"" << "name" << "\"" << ":" << name << "\"," << "Attack" << "\"" << ":" << "\"" << atk_pow << "\"}," << endl;

            MyFile.close();
            cout << "Saved this card: " << endl;

        }

};

void createCard(MyCard card) {
    MyCard card1;
    card1.cardName();
    cout << "Enter an attack power: " << endl;
    int num;
    cin >> num;
    if (num > 0) {
        //cout << num << endl;
        cout << "this is a number " << num << endl;

    }
    else {
        cout << "this is NOT number" << endl;
    }

    card1.saveCard();
    
}


// class Creature : public MyCard {
//     public:

//     typedef struct Creature {
//        int Health;
//        int Attack;
//     } Creature;

//     void cardName () {
//         cout << "enter card name: " << endl;
//         cin >> name;
//         cout << name;
//     }

// };




int main(int argc, char** argv){
    cout << "hello world" << endl;
    myFunction();
    MyCard imp_card;
    createCard(imp_card);

    
    //card();
    return 0;
}