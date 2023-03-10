#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void myFunction() {
    std::string name = "function name";
    std::cout << name << std::endl;

}

ofstream createFile() {
    ofstream MyFile("card.json", ios_base::app);
    return MyFile;
}


void createFileFunc() {
    //cout opening file/looking for object??
    cout << "press 1" << endl;
    int userInput;
    cin >> userInput;
    ofstream MyFile = createFile();

    switch(userInput) {
        case 1:
        //MyFile.seekg(0, MyFile.end);
        MyFile.seekp(MyFile.end);
        //MyFile << "" ;
            break;
        case 2: 
        cout << "end" << endl;
        cout << "]" << endl;
            break;
        default:
            cout << "default end" << endl;
            cout << "]" << endl;       
            break;
    }

}

class CardCreator {
    private:
        bool isCreature;
        bool isCastable;

    public:
    //change to char
        string name;
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


// methods go here

        string getCardName () {
            cout << "enter card name: " << endl;
                // getline(cin,name);
                // // cin >> name;
                //cin.getline(name, 20) >> ws;
                // cout << "the card is called: " << name << endl;
        //this fix came from [https://stackoverflow.com/questions/26071275/c-while-loop-and-getline-issue]
        //must clear the buffer for the while loop to allow input(break the loop)
            //getline(cin, name);
            //cin.ignore(256,'\n');
            getline(cin >> ws, name);
            cout << "The name is: " << name << endl;
            return name;
            }

        int getCardAtk(){               
            
                cout << "enter card atk value: " ;
                cin >> atk;
                cout << "the card atk value: " << atk << endl;
                return atk;
            }

        int getCardHealth(){
                cout << "enter card health value: " ;
                cin >> hp;
                cout << "the card hp value: " << hp << endl;
                return hp;
            }

        int getCardMana(){
                cout << "enter card mana value: " ;
                cin >> mana;
                cout << "the card mana value: " << mana << endl;
                return mana;
            }

        int CardsToCreate() {
            cout << "enter number of cards to create: ";
            cin >> cards_to_create;
            return cards_to_create;
            //return cards_to_create;
            //enter cards to create
            // user selection > create cards > num of cards to create > get name, hp, atk, mana

        }

        void saveCard(string cardname, int cardatk,int cardhp,int cardmana) {

            //createFile();
            //[https://www.rfc-editor.org/rfc/rfc8259]
            //array of name, stats, ?????????????
            // [{"card:"{"name":"value"}{"stats":{"atk": "value", "hp": "value", "mana": "value"}}}]
            ofstream MyFile("card.json", ios_base::app);
            MyFile 
                << "{" //bracket
                << "\""  // this is quote
                << "name" // key
                << "\""  // quote
                << ":" //colon
                << "\"" //quote
                << name  // value
                << "\""  //quote
                << "," // comma
                << "\"" // quote
                << "stats" //key
                << "\"" // quote
                << ":" // colon
                << "{" //bracket
                << "\"" // quote
                << "Attack"  // key
                << "\"" // quote
                << ":" //colon
                << "\""  //quote
                << atk //value
                << "\"" //quote
                << "," // comma
                << "\"" // quote
                << "health"  // key
                << "\"" // quote
                << ":" //colon
                << "\""  //quote
                << hp //value
                << "\"" //quote
                << "," // comma
                << "\"" // quote
                << "mana"  // key
                << "\"" // quote
                << ":" //colon
                << "\""  //quote
                << mana //value
                << "\"" //quote
                << "}" //bracket
                << "}" //bracket
                ;
            cout << "hit 1 to continue to next card; 2 to end and add ']' : ";
            int userInput;
            cin >> userInput;

            switch(userInput) {
                case 1:
                cout << "continue" << endl;
                MyFile << "," << endl;
                 break;
                case 2: 
                cout << "end" << endl;
                MyFile << "]" << endl;
                 break;
                default:
                    cout << "default end" << endl;
                    MyFile << "]" << endl;       
                    break;
            }

};

};

void cardCreationInput () {
    CardCreator machine;
    machine.cards_to_create = 0;
    cout << "is this random? " << machine.cards_to_create << endl;
    cout << "cards left to create: " << machine.cards_to_create << endl;
    machine.CardsToCreate();

    for (int i = 0; i < machine.cards_to_create; i++) {
        cout << "cards to create: " << machine.cards_to_create << endl;
        machine.name = machine.getCardName();
        machine.atk = machine.getCardAtk();
        machine.hp = machine.getCardHealth();
        machine.mana = machine.getCardMana();
        machine.saveCard(machine.name, machine.atk, machine.hp,machine.mana);
    }

    // while(machine.cards_to_create > 0) {
    //    
    //     machine.getCardName();
        
    //     //break;
    //     machine.cards_to_create--;
    //     //save card and do json things
    //     //create cards
    //     //ask name, atk, hp, mana, iscreature, iscastable.


    // }    
    
};



void userStartSelection (CardCreator machine) {
    cout << "enter 1 for new file, 2 for existing file, or 3 . any other key will exit." << endl; 
    int userInput;
    cin >> userInput;
    CardCreator machine1;


    switch(userInput) {
        case 1:
            cout << "pressed 1" << endl;
            createFileFunc();
            cardCreationInput();
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
    userStartSelection(machine);
    // machine.name;
    // getline(cin, machine.name);
    cout << "end of program" << endl;

}