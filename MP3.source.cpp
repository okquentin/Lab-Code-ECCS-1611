/*

 * File: MP3/source.cpp
 * Author: Quentin Osterhage
 * Date: 11/10/2022
 *
 * Description: Allows to players to play Tic-Tac-Toe with each other.


*/


#include <iostream>
#include <string>
using namespace std;


// *** FUNCTION PROTOTYPES ***
int getPlayerInput(string playerName);
bool isLegalMove(char board[], int location);
void placeMarkOnBoard(char board[], char playerMark, int location);
void clearBoard(char board[]);
bool hasThreeInRow(char board[]);
void displayBoard(char board[]);
void displayGameStats(int ties, int player1Score, int player2Score);
bool playerTie(char board[]);

// *** MAIN FUNCTION ***
int main(){

// Variable Declarations
int match = 1;
int location;
int boardSize = 9;
char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
string player1;
char player1Mark = 'X';
int player1Score = 0;
string player2;
char player2Mark = 'O';
int player2Score = 0;
int ties = 0;
bool playAgain = false;
char yesNo;

// Initial Game Prompt
    cout << "Please enter name of Player 1 (x): ";
        getline(cin, player1);  
    cout << "Please enter name of Player 2 (o): ";
        getline(cin, player2);

    cout << endl;
    cout << "[Welcomte to Tic Tac Toe!]\n";
    displayBoard(board);
    cout << endl;


// The main algorithim for running the game
// Runs until player decies to quit
// Player can decide to end game during end of match prompt
for(;;){
    
    // Getting input from Player 1
    // Determining move legality
    // Placing mark on board using player input
    // Displaying the board after mark has been placed
    location = getPlayerInput(player1);
        while(!isLegalMove(board, location)){
            cout << "Please choose a legal space. \n";
            location = getPlayerInput(player1);
            isLegalMove(board, location);
        }
        if(isLegalMove(board, location)){placeMarkOnBoard(board, player1Mark, location);}
        displayBoard(board);
        cout << endl;

        // Determines if Player 1 has won the match
        // Prompts Player 1 if they wish to play again or end the game
        if(hasThreeInRow(board)){
        cout << endl;
        cout << "Congratulations to " << player1 << "!\n";
        cout << endl;
        clearBoard(board);
        match++;
        player1Score++;
        displayGameStats(ties, player1Score, player2Score);
        cout << "Would you like to play again? (Y/N): ";
        cin >> yesNo;

            if(yesNo == 'y' || yesNo == 'Y'){
            displayBoard(board);
            cout << endl;
            }
            else{
                cout << "Thank you for playing!";
                return 0;
            }
        }
        
        // Determines if the game has been tied
        // Prompts Player 1 if they wish to play again or end the game
        if(playerTie(board)){
        cout << "It's a tie!";
        cout << endl;
        clearBoard(board);
        match++;
        ties++;
        displayGameStats(ties, player1Score, player2Score);
        cout << endl;
        cout << "Would you like to play again? (Y/N): ";
        cin >> yesNo;

            if(yesNo == 'y' || yesNo == 'Y'){
            displayBoard(board);
            cout << endl;
            }
            else{
                cout << "Thank you for playing!";
                return 0;
            }
        }
        

    location = getPlayerInput(player2);
        while(!isLegalMove(board, location)){
            cout << "Please choose an empty space. \n";
            location = getPlayerInput(player2);
            isLegalMove(board, location);
        }
        if(isLegalMove(board, location)){placeMarkOnBoard(board, player2Mark, location);}
        displayBoard(board);
        cout << endl;

        // Determines if Player 2 has won the match
        // Displays current standings for the whole game
        // Prompts Player 2 if they wish to play again or end the game
        if(hasThreeInRow(board)){
        cout << "Congratulations to " << player2 << " !";
        cout << endl;
        clearBoard(board);
        match++;
        player2Score++;
        displayGameStats(ties, player1Score, player2Score);
        cout << endl;
        cout << "Would you like to play again? (Y/N): ";
        cin >> yesNo;

            if(yesNo == 'y' || yesNo == 'Y'){
            displayBoard(board);
            cout << endl;
            }
            else{
                cout << "Thank you for playing!";
                return 0;
            }
        }
       
        // Determines if the game has been tied
        // Prompts Player 2 if they wish to play again or end the game
        if(playerTie(board)){
        cout << "It's a tie!\n";
        cout << endl;
        clearBoard(board);
        match++;
        ties++;
        displayGameStats(ties, player1Score, player2Score);
        cout << endl;
        cout << "Would you like to play again? (Y/N): ";
        cin >> yesNo;

            if(yesNo == 'y' || yesNo == 'Y'){
            displayBoard(board);
            cout << endl;
            }
            else{
                cout << "Thank you for playing!";
                return 0;
            }
        }
 }       

// END MAIN
return 0;
}

// *** FUNCTION DEFINITIONS ***

// * getPlayerInput: Prompts the user to choose a space to mark on the board
// * Parameters: playerName
// * Returns: integer value - indicates location on the board where the player wishes to place a mark
int getPlayerInput(string playerName){
    
    int location;
    cout << playerName << ", " << "please choose a space on the board: ";
        cin >> location;
    cout << endl;

return location;
}

// * isLegalMove: Determines whether sa player is trying to make an illegal move
// * Parameters: char board[], int location - the board array itself, and the location the player selected within that array
// * Returns: boolean result - true or false
bool isLegalMove(char board[], int location){

if(board[location-1] != 'X' && board[location-1] != 'O' && location > 0 && location < 10){return true;}
else{return false;}
}


// * placeMarkOnBoard: Places a mark on the board for a given player
// * Parameters: char board[], char playerMark, int location
// * Returns: N/A
void placeMarkOnBoard(char board[], char playerMark, int location){

    if(isLegalMove(board, location)){board[location-1] = playerMark;}
}

// * clearBoard: Resets the board array 
// * Parameters: char board[] - the board array itself
// * Returns: N/A
void clearBoard(char board[]){

board[0] = '1'; 
board[1] = '2';
board[2] = '3';
board[3] = '4';
board[4] = '5';
board[5] = '6';
board[6] = '7';
board[7] = '8';
board[8] = '9';

}

// * hasThreeInRow: Determines whether a player has achieved 3 marks in a row on the board
// * Parameters: char board[] - the board array itself
// * Returns: boolean result - true or false
bool hasThreeInRow(char board[]){

    if(board[0] == board[0+1] && board [0] == board[0+2]){return true;}
    else if(board[3] == board[3+1] && board [3] == board[3+2]){return true;}
    else if(board[0] == board[0+4] && board[0] == board[0+8]){return true;}
    else if(board[6] == board[6+1] && board [6] == board[6+2]){return true;}
    else if(board[0] == board[0+3] && board[0] == board[0+6]){return true;}
    else if(board[1] == board[1+3] && board[1] == board[1+6]){return true;}
    else if(board[2] == board[2+2] && board[2] == board[2+4]){return true;}
    else if(board[0] == board[0+4] && board[0] == board[0+8]){return true;}
    else if(board[2] == board[2+3] && board[2] == board[2+6]){return true;}
else{return false;}
}

// * playerTie: Determines whether a match was a tie
// * Parameters: char board[] - the board array itself
// * Returns: boolean result - true or false
bool playerTie(char board[]){

if(
    (board[0] == 'X' || board[0] == 'O') && (board[1] == 'X' || board[1] == 'O') && (board[2] == 'X' || board[2] == 'O') 
    && (board[3] == 'X' || board[3] == 'O') && (board[3] == 'X' || board[3] == 'O') && (board[4] == 'X' || board[4] == 'O')
    && (board[5] == 'X' || board[5] == 'O') && (board[6] == 'X' || board[6] == 'O') && (board[7] == 'X' || board[7] == 'O')
    && (board[1] == 'X' || board[1] == 'O')
)
{if(!hasThreeInRow(board)){return true;}else{return false;}}
return false;
}

// * displayBoard: Displays the board array
// * Parameters: char board[] - the board array itself
// * Returns: N/A
void displayBoard(char board[]){

    cout << endl;
    for(int i = 0; i < 9; i++){

        if (i == 0){
        cout << " " << board[i+6] << " " << "|";
        cout << " " << board [i+7] << " " << "|";
        cout << " " << board [i+8] << " " << " ";
        cout << endl;
        cout << "---+"; cout << "---+"; cout << "---" << endl;
        }
        if (i == 3){
        cout << " " << board[i] << " " << "|";
        cout << " " << board [i+1] << " " << "|";
        cout << " " << board [i+2] << " " << " ";
        cout << endl;
        cout << "---+"; cout << "---+"; cout << "---" << endl;
        }
        if(i == 7){
        cout << " " << board[i-7] << " " << "|";
        cout << " " << board [i-6] << " " << "|";
        cout << " " << board [i-5] << " " << " " << endl;;
        }
    }
}

// * displayGameStates: Display's the game's current standings using tracked scores
// * Parameters: int ties, int player1Score, int player2Score - the  scores for each player, as well as the tracked # of ties
// * Returns: N/A
void displayGameStats(int ties, int player1Score, int player2Score){

cout << "[CURRENT GAME STATISTICS] \n";
cout << "Ties: " << ties << endl;
cout << "Player 1 Score: " << player1Score << endl;
cout << "Player 2 score: " << player2Score << endl;

}

