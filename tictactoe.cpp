#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int random();
void displaywin(string user, string comp);
void displayloss(string user, string comp);

int main() {

    cout << "ROCK, PAPER or SCISSORS GAME (press n to exit)" << endl;
    cout << "-----------------------------------------------" << endl;

    string user, comp;
    
     while(user != "N"){
        cout << "Rock, Paper or Scissors: ";
        cin >> user;
        transform(user.begin(), user.end(), user.begin(), ::toupper);


        switch (random()) {
        case 1:
            comp = "ROCK";
            break;
        case 2:
            comp = "PAPER";
            break;
        case 3:
            comp = "SCISSORS";
            break;
        }
        if (user == "ROCK" || user == "PAPER" || user == "SCISSORS") {
            if (user == "ROCK" && comp == "PAPER") {
                displayloss(user, comp);
            }
            else if (user == "PAPER" && comp == "SCISSORS") {
                displayloss(user, comp);
            }
            else if (user == "SCISSORS" && comp == "ROCK") {
                displayloss(user, comp);
            }

            if (user == "ROCK" && comp == "SCISSORS") {
                displaywin(user, comp);
            }
            else if (user == "PAPER" && comp == "ROCK") {
                displaywin(user, comp);
            }
            else if (user == "SCISSORS" && comp == "PAPER") {
                displaywin(user, comp);
            }
            else if (user == comp) {
                cout << "Draw" << endl;
            }
        }
        else if(user != "N") {
            cout << "Enter Rock, Paper or Scissors. " << endl;
        }
    }

    return 0;

}
int random() {
    srand(time(NULL));
    return (rand() % 3) + 1;
}
void displaywin(string user, string comp) {
    cout << "-----------------------------------------------" << endl;
    cout << "User: " << user << " | Computer: " << comp << " .You Won!" << endl;
    cout << "-----------------------------------------------" << endl;
}
void displayloss(string user, string comp) {
    cout << "-----------------------------------------------" << endl;
    cout << "User: " << user << " | Computer: " << comp << " .You Lost!" << endl;
    cout << "-----------------------------------------------" << endl;
}