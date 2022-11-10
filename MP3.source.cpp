#include <iostream>
#include <string>
using namespace std;

// Global Variable


// Function Prototypes
int getPlayerInput(string playerName);
bool isLegalMove(char board[], int location);
void placeMarkOnBoard(char board[], char playerMark, int location);
void clearBoard(char board[]);
bool hasThreeInRow(char board[], char playerMark);
void displayBoard(char board[]);
void displayGameStats(int ties, int player1Score, int player2Score);

// BEGIN MAIN
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


// Algorithim
    cout << "Please enter name of Player 1 (x): ";
        getline(cin, player1);  
    cout << "Please enter name of Player 2 (o): ";
        getline(cin, player2);

for(;;){
    cout << endl;
    cout << "[Welcome to Tic Tac Toe || Match " << match << "]";
    displayBoard(board);
    location = getPlayerInput(player1);
        while(!isLegalMove(board, location)){
            cout << "Please choose a legal space. \n";
            location = getPlayerInput(player1);
            isLegalMove(board, location);
        }
        if(isLegalMove(board, location)){placeMarkOnBoard(board, player1Mark, location);}
        displayBoard(board);

        if(hasThreeInRow(board, player1Mark)){
        cout << "Congratulations to " << player1 << "!\n";
        cout << endl;
        clearBoard(board);
        match++;
        player1Score++;
        displayGameStats(ties, player1Score, player2Score);
        }
        
    location = getPlayerInput(player2);
        
        while(!isLegalMove(board, location)){
            cout << "Please choose an empty space. \n";
            location = getPlayerInput(player2);
            isLegalMove(board, location);
        }
        if(isLegalMove(board, location)){placeMarkOnBoard(board, player2Mark, location);}
        displayBoard(board);

        if(hasThreeInRow(board, player2Mark)){
        cout << "Congratulations to " << player2 << " !";
        clearBoard(board);
        match++;
        player2Score++;
        }

}


// END MAIN
return 0;
}

// Function Definitions
int getPlayerInput(string playerName){
    
    int location;
    cout << playerName << ", " << "please choose a space on the board: ";
        cin >> location;
    cout << endl;

return location;
}
bool isLegalMove(char board[], int location){

if(board[location-1] != 'X' && board[location-1] != 'O'){return true;}
else{return false;}
}

void placeMarkOnBoard(char board[], char playerMark, int location){

    if(isLegalMove(board, location)){board[location-1] = playerMark;}
}
void clearBoard(char board[]){

board[0] = '0'; 
board[1] = '1';
board[2] = '2';
board[3] = '3';
board[4] = '4';
board[5] = '5';
board[6] = '6';
board[7] = '7';
board[8] = '8';
board[9] = '9';

}
bool hasThreeInRow(char board[], char playerMark){

    if(board[0] == board[0+1] && board [0] == board[0+2]){return true;}
    else if(board[3] == board[3+1] && board [3] == board[3+2]){return true;}
    else if(board[6] == board[6+1] && board [6] == board[6+2]){return true;}
    else if(board[0] == board[0+3] && board[0] == board[0+6]){return true;}
    else if(board[1] == board[1+3] && board[1] == board[1+6]){return true;}
    else if(board[2] == board[2+3] && board[2] == board[2+6]){return true;}
    else if(board[0] == board[0+4] && board[0] == board[0+8]){return true;}
    else if(board[2] == board[2+3] && board[2] == board[2+6]){return true;}

else{return 0;}
}


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

 
void displayGameStats(int ties, int player1Score, int player2Score){

cout << "[CURRENT GAME STATISTICS] \n";
cout << "Ties: " << ties << endl;
cout << "Player 1 Score: " << player1Score << endl;
cout << "Player 2 score: " << player2Score << endl;

}

