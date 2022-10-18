#include <iostream>

using namespace std;

// FUNCTION PROTOTYPES
int rollDie( void );
int turnTotal(int die1value, int die2value);
bool isTurnScoreLost( int die1value, int die2value );
int gameTotal(int dieTotal);
bool isTotalScoreLost( int die1value, int die2value );
char getUserInput( void );
bool isWinningScore( int score ); 
void displayRollResults(int die1value, int die2value);
void playerRoll(int die1value, int die2value);
void computerRoll(int die1value, int die2value);

// MAIN FUNCTION
int main(){

// Variable Declarations
int die1;
int die2;
char ready;
char rollAgain;
int playScore;
int comScore;

// User Prompt
cout << "-----------------[ECCS 1611 - MP2]-----------------" << endl;
cout << "             Welcome to the game of Pig!" << endl;
cout << "       Program designed by Quentin Osterhage" << endl;
cout << "---------------------------------------------------" << endl;

// Asking Player if ready to take their turn
ready = getUserInput();

if(ready == 'Y' || ready == 'y'){
do{
    playerRoll(die1, die2);
    cout << "Roll again? (Y/N): ";
        cin >> rollAgain;
    int comScore = turnTotal(die1, die2);
} while(rollAgain == 'Y' || rollAgain == 'y');
}


computerRoll(die1, die2);

// END OF MAIN
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

int turnTotal(int die1value, int die2value){
    int score = 0;
    bool turnFail = isTurnScoreLost(die1value, die2value);
    score = score + die1value + die2value;
    if(turnFail == true){score = 0;}
    return score;
}

int gameTotal(int total, int turn){
    total += turn;
    return total;
}

bool isTotalScoreLost( int die1value, int die2value ){
    if(die1value == 1 && die2value == 1){return true;}
    else return false;
}


char getUserInput( void ){
    char roll;
    cout << "Player 1, are you ready to begin your turn? (Y/N): ";
    cin >> roll;
    return roll;
}

bool isWinningScore( int score ){
    if(score >= 100){return true;} 
    else{return false;}
}


void displayRollResults(int die1value, int die2value){
    bool turnLost = isTurnScoreLost(die1value, die2value);
    bool totalLost = isTotalScoreLost(die1value, die2value);
    if(turnLost == true){cout << "Sorry! You've rolled a 1. Your turn has ended, with a total of 0." << endl;} 
    else if(totalLost == true){cout << "Ouch! Snake eyes! Your total score has been wiped to 0." << endl;}
    else{
        cout << "Rolled a " << die1value << " and a " << die2value << "!" << endl;
    }
}

void playerRoll(int die1value, int die2value){
    int turnP1 = 0;
    int totalP1 = 0;
    die1value = rollDie();
    die2value = rollDie();
    displayRollResults(die1value, die2value);
    turnP1 = turnTotal(die1value, die2value);
    totalP1 += turnP1;
    gameTotal(totalP1, turnP1);
    cout << "Your score is now " << turnP1 <<'.' << endl;
}

void computerRoll(int die1value, int die2value){
    int turnCOM = 0;
    int totalCOM= 0;
    while(turnCOM <= 20){
    
    die1value = rollDie();
    die2value = rollDie();
    displayRollResults(die1value, die2value);
    turnCOM= turnTotal(die1value, die2value);
    totalCOM += turnCOM;
    gameTotal(totalCOM, turnCOM);
    cout << "Your score is now " << turnCOM <<'.' << endl;
}
}