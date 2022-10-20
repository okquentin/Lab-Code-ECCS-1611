#include <iostream>
using namespace std;

// Global Variables
int scorePlay = 0;
int scoreCom = 0;

// Function Prototypes
char getUserInput(void);
int rollDie(void);
int playTurn(void);
int compTurn(void);
bool isTurnScoreLost(int die1value, int die2value);
bool isTotalScoreLost(int die1value, int die2value);
void displayRollResults(int die1value, int die2value);
int turnScore(int die1value, int die2value, int rollTotal);
int gameScore(int turnScore);
bool isWinningScore(int score);

int main(){

// Variable Declarations
int playCount = 1;
int compCount = 1;

// Main Algorithim

cout << "ECCS 1611 - MP2 \"Roll'em Pigs!\"\n";
cout << "Program designed by Quentin Osterhage\n";
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

cout << "[PLAYER TURN " << playCount << "]\n";
cout << "\n";

while(!isWinningScore(scorePlay) && !isWinningScore(scoreCom)){
playCount = playTurn();

cout << "\n";
cout << "[COMPUTER TURN " << compCount << "]\n";
cout << "\n";

compCount = compTurn();
}

// END OF MAIN
return 0;
}


// FUNCTION HEADERS
char getUserInput(void){
    char roll;
    do{
        cout << "Roll or stop? (R/S): ";
        cin >> roll;

        if (roll != 'r' && roll!= 'R' && roll!= 's' && roll!= 'S'){
            cout << "Please indicate R to roll, or S to stop: " << endl;
        }
    } while(roll != 'r' && roll!= 'R' && roll!= 's' && roll!= 'S');
    
    return roll;
}

int rollDie(void){
    const int NUMBER_OF_DIE_SIDES = 6;
    const int LOWEST_DIE_VALUE = 1;
    return rand() % NUMBER_OF_DIE_SIDES + LOWEST_DIE_VALUE;
}

bool isTurnScoreLost(int die1value, int die2value){
if(die1value == 1 || die2value == 1){return true;} 
else{return false;}
}

bool isTotalScoreLost(int die1value, int die2value){
if(die1value == 1 && die2value == 1){return true;} 
else{return false;}
}

void displayRollResults(int die1value, int die2value){
    bool turnLost = isTurnScoreLost(die1value, die2value);
    bool totalLost = isTotalScoreLost(die1value, die2value);
    if(turnLost == true){
        cout << "Sorry! You've rolled a " << die1value << " and a " << die2value << ".\n";
        cout << "Your score for this turn is now zero.\n";
    }
    else if(totalLost == true){
        cout << "Yikes! Snake eyes! Your total score is now zero...\n";
    } else{
        cout << "Rolled a " << die1value << " and a " << die2value << "!" << endl;
    }
}

int playTurn(void){
    int die1;
    int die2;
    int count = 0;
    char continueRoll;
    bool turnLost = isTurnScoreLost(die1, die2);
    bool totalLost = isTotalScoreLost(die1, die2);
    
    while (continueRoll != 's' && continueRoll != 'S' && turnLost != false && turnLost != false){
        continueRoll = getUserInput();

        if(continueRoll != 's' && continueRoll != 'S' && turnLost != false && totalLost != false){
            die1 = rollDie();
            die2 = rollDie();
            displayRollResults(die1, die2);
        }
    }

count++;
return count;
}   

int compTurn(void){
    int die1;
    int die2;
    int count = 0;
    bool turnLost = isTurnScoreLost(die1, die2);
    bool totalLost = isTotalScoreLost(die1, die2);

    for(int i = 0; i > 5; i++){

    if(!turnLost && !totalLost )
        die1 = rollDie();
        die2 = rollDie();
        displayRollResults(die1, die2);
    }
  
count++;
return count;
}
