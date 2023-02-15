/*

 * File: MP2.source.cpp
 * Author: Quentin Osterhage
 * Date: 10/20/2022
 *
 * Description: The Game of Pig, which can be played against a simulated opponent


*/

#include <iostream>
using namespace std;

// *** FUNCTION PROTOTYPES ***
int rollDie( void );
bool isTurnScoreLost( int die1value, int die2value );
bool isTotalScoreLost( int die1value, int die2value );
int turnTotal(int die1value, int die2value);
char getUserInput( void );
bool isWinningScore( int score ); 
void displayRollResults(int die1value, int die2value);
void comWin();
void playWin();
void displayScores(int playScore, int comScore);

// *** MAIN FUNCTION ***
int main(){

    // Variable Declarations
    int firstDie = 0;
    int secondDie = 0;

    bool turnLost = false;
    bool totalLost = false;
    int playScore = 0;
    int comScore = 0;
    int turnScore = 0;
    int turnNum = 1;

    char begin;
    char rollAgain;
    bool turnDone = false;
    bool comDone = false;

    bool win = false;
    string winner;

    // User Prompt
    cout << "Welcome to the game of Pig" << endl;
    cout << "Player, please roll your die to begin the game." << endl;

    cout << "Are you ready to begin the game? (Y/N): ";
        cin >> begin;

    // Player and COM take turns rolling the dice.
    while(win == false){

        cout << endl;
        cout << "[TURN " << turnNum << " - BEGIN]\n";
        cout << endl;

    // Player Turn
        while(!turnDone){
            
            rollAgain = getUserInput();
            if(rollAgain != 'n' && rollAgain != 'N'){
            firstDie = rollDie();
            secondDie = rollDie();
            displayRollResults(firstDie, secondDie);
            turnLost = isTurnScoreLost(firstDie, secondDie);
            totalLost = isTotalScoreLost(firstDie, secondDie);
            win = isWinningScore(playScore + turnScore);
            
                if(turnLost == true){
                turnScore = 0;
                cout << "Ouch! You've rolled a 1! :(" << endl;
                cout << "Your score is now: " << playScore + turnScore << endl;

                turnDone = true;
                comDone = false;
                break;
                }
                else if (totalLost == true){
                playScore = 0;
                turnScore = 0;
                cout << "Ouch! Snake eyes! :(" << endl;
                cout << "Your score is now: " << playScore + turnScore << endl;

                turnDone = true;
                comDone = false;
                break;
                }
                else{
                turnScore += turnTotal(firstDie, secondDie);
                cout << "Your score is now: " << playScore + turnScore << endl;

                    if(win == true){
                    playWin();
                    return 0;
                    }
            }
        }
            else{
            playScore += turnScore;
            turnDone = true;
            comDone = false;
            turnScore = 0;
            }

    }

    cout << endl;
    cout << endl;

    // COM Turn
    while (!comDone){
    
        while(turnScore < 20){
        firstDie = rollDie();
        secondDie = rollDie();
        displayRollResults(firstDie, secondDie);
        turnLost = isTurnScoreLost(firstDie, secondDie);
        totalLost = isTotalScoreLost(firstDie, secondDie);
        win = isWinningScore(comScore + turnScore);

            if(turnLost == true){
                turnScore = 0;
                cout << "A 1 was rolled! :(" << endl;
                cout << "Com score is now: " << comScore + turnScore << endl;
                comDone = true;
                break;
            }
            else if (totalLost == true){
                comScore = 0;
                turnScore = 0;
                cout << "Snake eyes! :(" << endl;
                cout << "Com score is now: " << comScore + turnScore << endl;
                comDone = true;
                break;
            }
            else{
                turnScore += turnTotal(firstDie, secondDie);
                cout << "Com score is now: " << comScore + turnScore << endl;

                    if(win == true){
                        void displayScores(int playScore, int comScore);
                        comWin();
                        return 0;
                    }
            }
        }

    comScore += turnScore;
    void displayScores(int playScore, int comScore);
    comDone = true;
    turnDone = false;
    turnScore = 0;
    turnNum++;
    }

    }

// END OF MAIN
return 0;
}


// *** FUNCTION DEFINITIONS ***

// * rollDie: Simulates the rolling of a single die using the rand function
// * Parameters: N/A
// * Returns: int - A random integer
int rollDie( void ){
    const int NUMBER_OF_DIE_SIDES = 6;
    const int LOWEST_DIE_VALUE = 1;
    return rand() % NUMBER_OF_DIE_SIDES + LOWEST_DIE_VALUE;
}

// * turnTotal: Calculates the total points scored after two die rolling simulations are run
// * Parameters: die1value, die2value - value of each respective die
// * Returns: int score - the score of the two die added together
int turnTotal(int die1value, int die2value){
    int score = die1value + die2value;
    return score;
}

// * isTurnScoreLost: Determines whether a one was rolled, nullifying the score of both die
// * Parameters: die1value, die2value - value of each respective die
// * Returns: boolean result - true or false
bool isTurnScoreLost( int die1value, int die2value ){
    if(die1value == 1 || die2value == 1){return true;} 
    else return false;
}

// * isTotalScoreLost: Determines whether 'snake eyes' were rolled, nullifying the total score of a player
// * Parameters: die1value, die2value - value of each respective die
// * Returns: boolean result - true or false.
bool isTotalScoreLost( int die1value, int die2value ){
    if(die1value == 1 && die2value == 1){return true;}
    else return false;
}

// * getUserInput: Prompts player as to whether to continue to roll the die or end their turn
// * Parameters: N/A
// * Returns: char rollAgain - the player's indication as to whether to roll the die again
char getUserInput( void ){
    char rollAgain;
    cout << "Roll die? (Y/N): ";
        cin >> rollAgain;
    return rollAgain;
}

// * isWinningScore: Checks whether the condition has been met for the game to be won (>=100 points scored)
// * Parameters: int score - the total score to be checked (either the player's or the simulated opponent's)
// * Returns: boolean result - true or false
bool isWinningScore(int score){
    if(score >= 100){return true;}
    else{return false;}
}

// * comWin: Message to be displayed in the event of an AI victory
// * Parameters: N/A
// * Returns: N/A
void comWin(){
    cout << endl;
    cout << "The Computer" << " has won the match!\n";
    cout << "Thank you for playing!\n";
}

// * playWin: Message to be displayed in the event of a player victory
// * Parameters: N/A
// * Returns: N/A
void playWin(){
    cout << endl;
    cout << "The Player" << " has won the match!\n";
    cout << "Thank you for playing!\n";
}

// * displayRollResults: Displays the result of a dice roll
// * Parameters: die1value, die2value - value of each respective die
// * Returns: N/A
void displayRollResults(int die1value, int die2value){
    bool turnLost = isTotalScoreLost(die1value, die2value);
    if(turnLost == true){
        cout << "Sorry! A 1 was rolled. Turn has ended, with a total of 0" << endl;
    } else{
        cout << "Rolled a " << die1value << " and a " << die2value << "!" << endl;
    }
}
// * displayScores: Displays the total scores of the Player and the AI (Computer)
// * Parameters: playScore, comScore - the total scores of the Player and Computer respectively
// * Returns: N/A
void displayScores(int playScore, int comScore){
    cout << endl;
    cout << "Current scores: Player - " << playScore << " | Computer - " << comScore;
    cout << endl;
}