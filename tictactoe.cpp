// Tic Tac Toe - Example from Lecture (10/14/22)
// Ussing stepwise refinement 


int main(){
    while(true){
        displayBoard();
        placeMarkOnBoard(getPlayerInput());
        if(boardHasThreeInRow()){
            gameWon();
            if(matchIsOver()) break;
            else selectStartingPlayerForNextGame();
            continue;
        }
        else if(isTiedGame()){
            gameTied();
            if(matchIsOver()) break;
            else selectStartingPlayerForNextGame();
            continue;
        }
        switch player();
    } // end while
}