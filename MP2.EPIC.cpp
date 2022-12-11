#include <iostream>
using namespace std;
// FUNCTION PROTOTYPES
int rollDie( void );
bool isTurnScoreLost( int die1value, int die2value );
bool isTotalScoreLost( int die1value, int die2value );
int turnTotal(int die1value, int die2value);
char getUserInput( void );
bool isWinningScore( int score ); 
void displayRollResults(int die1value, int die2value);

// MAIN FUNCTION
int main(){

// Variable Declarations
int firstDie;
int secondDie;

bool turnLost = false;
bool totalLost = false;
int playScore = 0;
int turnScore = 0;

char begin;
char rollAgain;
bool turnDone = false;

bool win = false;
string winner;

// User Prompt
cout << "Welcome to the game of Pig" << endl;
cout << "Player 1, please roll your die to begin the game." << endl;

cout << "Are you ready to begin your turn? (Y/N): ";
cin >> begin;

// Players take turns rolling the dice.
while(win == false){


    while(!turnDone){
    firstDie = rollDie();
    secondDie = rollDie();
    displayRollResults(firstDie, secondDie);
    turnLost = isTurnScoreLost(firstDie, secondDie);
    totalLost = isTotalScoreLost(firstDie, secondDie);
    
        if(turnLost == true){
        turnScore = 0;
        cout << "Ouch! You've rolled a 1! :(" << endl;
        cout << "Your score is now: " << playScore + turnScore << endl;
        turnDone = true;
        }
        else if (totalLost == true){
        playScore = 0;
        turnScore = 0;
        cout << "Ouch! Snake eyes! :(" << endl;
        cout << "Your score is now: " << playScore + turnScore << endl;
        turnDone = true;
        }
        else{
        turnScore += turnTotal(firstDie, secondDie);
        cout << "Your score is now: " << playScore + turnScore << endl;
        }

    rollAgain = getUserInput();
    if (rollAgain == 'n' or 'N'){turnDone = true;}
    else{continue;}
    }
}

// END OF MAIN
cout << endl;
cout << "Thank you for playing!" << endl;
return 0;
}

// FUNCTION HEADERS
int rollDie( void ){
    const int NUMBER_OF_DIE_SIDES = 6;
    const int LOWEST_DIE_VALUE = 1;
    return rand() % NUMBER_OF_DIE_SIDES + LOWEST_DIE_VALUE;
}

int turnTotal(int die1value, int die2value){
    int score = die1value + die2value;
    return score;
}

bool isTurnScoreLost( int die1value, int die2value ){
    if(die1value == 1 || die2value == 1){return true;} 
    else return false;
}

bool isTotalScoreLost( int die1value, int die2value ){
    if(die1value == 1 && die2value == 1){return true;}
    else return false;
}

char getUserInput( void ){
char rollAgain;

    cout << "Roll again? (Y/N): ";
    cin >> rollAgain;
return rollAgain;
}

bool isWinningScore(int score ){
if(score >= 100){return true;}
else{return false;}
}

void displayRollResults(int die1value, int die2value){
    bool turnLost = isTotalScoreLost(die1value, die2value);
    if(turnLost == true){
        cout << "Sorry! You've rolled a 1. Your turn has ended, with a total of 0" << endl;
    } else{
        cout << "You've rolled a " << die1value << " and a " << die2value << "!" << endl;
    }
}