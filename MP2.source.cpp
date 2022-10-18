#include <iostream>
using namespace std;

// Function Prototypes
int rollDie(void);
bool isTurnScoreLost(int die1value, int die2value);
bool isTotalScoreLost(int die1value, intdie2value);
char getUserInput(void);
bool isWinningScore(int score);

int main(){

}


// FUNCTION HEADERS
char getUserInput( void ){
    char roll;
    cout << "Player 1, are you ready to begin your turn? (Y/N): ";
    cin >> roll;
    return roll;
}

int rollDie( void ){
    const int NUMBER_OF_DIE_SIDES = 6;
    const int LOWEST_DIE_VALUE = 1;
    return rand() % NUMBER_OF_DIE_SIDES + LOWEST_DIE_VALUE;
}