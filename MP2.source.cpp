#include <iostream>

using namespace std;

// FUNCTION PROTOTYPES
int rollDie( void );
bool isTurnScoreLost( int die1value, int die2value );
bool isTotalScoreLost( int die1value, int die2value );
char getUserInput( void );
bool isWinningScore( int score ); 
void displayRollResults(int die1value, int die2value);

// MAIN FUNCTION
int main(){

// Variable Declarations
int firstDie;
int secondDie;
char roll;
char rollAgain; 
string winningPlayer;

// User Prompt
cout << "Welcome to the game of Pig" << endl;
cout << "Player 1, please roll your die to begin the game." << endl;

// Players take turns rolling the dice.

do{
    cout << "Please type R to roll." << endl;
        cin >> roll;
    if(roll == 'R' || roll == 'r'){
    firstDie = rollDie();
    secondDie = rollDie();
    displayRollResults(firstDie, secondDie);
    }else{
        cout << "Please type R or r in order to roll the dice. ";
        continue;
    }
   
    cout << "Roll again? (Y/N): ";
        cin >> rollAgain;

} while(rollAgain == 'Y' || rollAgain == 'y');


// END OF MAIN
cout << "Thank you for playing! Congratulations to " << winningPlayer << endl;
return 0;
}

// FUNCTION HEADERS
int rollDie( void ){
    const int NUMBER_OF_DIE_SIDES = 6;
    const int LOWEST_DIE_VALUE = 1;

    return rand() % NUMBER_OF_DIE_SIDES + LOWEST_DIE_VALUE;
}

bool isTurnScoreLost( int die1value, int die2value ){
    if(die1value == 1 || die2value == 1){return true;} 
    else return false;
}

bool isTotalScoreLost( int die1value, int die2value ){
    if(die1value == 1 && die2value == 1){return true;}
    else return false;
}

// char getUserInput( void ){
// }

// bool isWinningScore( int score ){}

void displayRollResults(int die1value, int die2value){
    bool turnLost = isTotalScoreLost(die1value, die2value);
    if(turnLost == true){
        cout << "Sorry! You've rolled a 1. Your turn has ended, with a total of 0" << endl;
    } else{
        cout << "You've rolled a " << die1value << " and a " << die2value << "!";
    }
}