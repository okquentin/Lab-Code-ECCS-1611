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
char continuePlay = getUserInput(); 

// User Prompt

// Players take turns rolling the dice.

do{
    firstDie = rollDie();
    secondDie = rollDie();
    displayRollResults(firstDie, secondDie);
    getUserInput;
} while(continuePlay == 'Y' || continuePlay == 'y');


// END OF MAIN
cout << "Thank you for playing!" << endl;
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

char getUserInput( void ){
    char rollAgain;
    cout << "Roll again? (Y/N): ";
        cin >> rollAgain;
    return(rollAgain);
}

// bool isWinningScore( int score ){}

void displayRollResults(int die1value, int die2value){
    bool turnLost = isTurnScoreLost();
    if(turnLost == true){
        cout << "Sorry! You've rolled a 1. Your turn has ended, with a total of 0" << endl;
    }
}