#include <iostream>
#include <string>
#include <fstream>
using namespace std;

FILE *file;

// ofstream MyFile("card.json", ios_base::app);

void myFunction() {
    string name = "function name";
    cout << name << endl;

};

bool fileCheck() {
    if(fopen("card.json", "r")) {
        cout << "found" << endl;
        return true;
    } else {
        cout << "Not found - creating file.." << endl;
        ofstream MyFile("card.json", ios_base::app);
        MyFile.close();
        return false;
    }


}

// int userSelection () {
//     cin >> userSelection;
//     return userSelection;
// };




class CardGenerate {
    public:
    string name;

        void cardName () {
            cout << "enter card name: " << endl;
            getline(cin,name);
            cout << "the card is called: " << name << endl;
        }
        // void saveCard(signed int num) {
        //     string atk_pow = to_string(num);
            
        //     MyFile << "{" << "\"" << "name" << "\"" << ":\"" << name << "\",\"" << "Attack"  << "\"" << ":\"" << atk_pow << "\"}" ;

        //     int userInput;
        //     cin >> userInput;

        //     switch(userInput) {
        //         case 1:
        //         cout << "continue" << endl;
        //         MyFile << "," << endl;
        //          break;
        //         case 2: 
        //         cout << "end" << endl;
        //         MyFile << "]" << endl;
        //          break;
        //         default:
        //             cout << "default end" << endl;
        //             MyFile << "]" << endl;       
        //             break;
        //     }

        //     MyFile.close();
        //     cout << "Saved this card: " << endl;

        // }

        // bool isOpen() {
        //     if() {
        //         return true;
        //     }
        //     else {
        //         MyFile.close();
        //         return false;
        //     }
        // }
        

};


void createCard(CardGenerate card) {
    CardGenerate card1;
    card1.cardName();
    //card1.setAttackValue();

    cout << "Enter an attack power: " << endl;
    signed int test_num;
    cin >> test_num;
        if (test_num > 0) {
            //cout << num << endl;
            cout << "this is a number " << test_num << endl;

        }
        else {
            cout << "this is NOT number" << endl;
        }
   // card1.saveCard(test_num);
    
};





int main(int argc, char** argv){
    cout << "hello world" << endl;
    myFunction();
    fileCheck();
    CardGenerate imp_card;
    createCard(imp_card);

    // int select;
    // cin >> select;
    // // userSelection();

    // switch(select) {
    //     case 1:
    //         cout << "pressed 1" << endl;
    //         break;
    //     case 2:
    //         cout << "pressed 2" << endl;
    //         break;
    //     case 3:
    //         cout << "pressed 3" << endl;
    //         break;
    //     default:
    //         cout << "no option selected" << endl;
    //         break;
    // }


    
    //card();
    return 0;
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





