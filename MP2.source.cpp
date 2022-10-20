#include <iostream>
using namespace std;

// Global Variables
int scorePlay = 0;
int scoreCom = 0;

// Function Prototypes
char getUserInput(void);
int rollDie(void);
bool isTurnScoreLost(int die1value, int die2value);
bool isTotalScoreLost(int die1value, int die2value);
bool isWinningScore(int score);
bool isWinningScore(int score1, int score2);

int main()
{
	int total1 = 0;
	int total2 = 0;
	int die1Value;
	int die2Value;
	int score = 0;
	char input;
	int turnTotal = 0;
	int roundNum = 1;
	srand(time(0));
	
    // Intro Prompt
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "   Welcome to the game of pig! \n";
    cout << "Program designed by Quentin Osterhage \n";
    cout << "   ECCS 1611 - MP2 ""Roll Em' Pigs"" \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    // The main algorithim for running the game 
    // Runs until a winner has been decided
	while (!isWinningScore(total1, total2))
	{   
		bool turnDone = false;
        cout << endl;

		// Displays a round counter w/ scores for both players 
		// Displays before each round
		// If statements adjust graphics for the box when there is
		// one or two digits to display
		cout << "|------  ROUND " << roundNum;
        if(roundNum < 10){cout << " ------|\n";} 
        else{cout << " -----|\n";}
		cout << "|   Player score: " << total1;
        if(total1 < 10){cout << "    |\n";}
        else{cout << "   |\n";}
        cout << "|  Computer score: " << total2;
        if(total2 < 10){cout << "   |\n";}
        else{cout << "  |\n";}
        cout << "|----------------------|\n";
        cout << endl;
		cout << "[Player Turn] \n";
		
		// Runs the player's turn until finished
		while (!turnDone)
		{
			die1Value = 0;
			die2Value = 0;
			cout << "Turn score: " << turnTotal << endl;
			input = getUserInput();
			// Rolls die when correct input is gathered from getUserInput()
			if (input == 'r')
			{
				die1Value = rollDie(); 
				die2Value = rollDie();
				cout << "Rolled a " << die1Value << " and a " << die2Value << ". \n";
				
				// Stops roll and wipes total score when snake eyes are rolled
				if (isTotalScoreLost(die1Value, die2Value))
				{
					cout << "Yikes! Snake eyes! \n"; 
                    cout << "Total score is now zero. \n";
					total1 = 0;
					turnDone = true;
				}

				// Stops roll and wipes turn score when a one is rolled
				else if (isTurnScoreLost(die1Value, die2Value))
				{
					cout << "Sorry! " << "A ";
                    if(die1Value < die2Value){cout << die1Value;}
                    else{cout << die2Value;}
                    cout << " was rolled.\n";
                    cout << "Turn score lost. \n";
					turnTotal = 0;
					turnDone = true;
					
				// If no ones are rolled, the values for the roll are added to turn total
				}else
				{
					turnTotal += die1Value + die2Value;
				}
			}
			// Stops roll when 's' is input
			else
			{
				total1 += turnTotal;
				turnTotal = 0;
				turnDone = true;
			}
		}
		
        cout << endl << "[Computer Turn] \n";

		// Runs the computer's turn until scoring at least 20 points
		while (turnTotal <= 20)
		{
			die1Value = 0;
			die2Value = 0;
			die1Value = rollDie();
			die2Value = rollDie();
			if(total2 < 100){cout << "Rolled a " << die1Value << " and a " << die2Value << ".\n";}

			// Allows computer to end turn when surpassing 100 points
			if ((total2 + turnTotal) >= 100)
			{
				total2 += turnTotal;
				break;
			}

			// Stops roll and wipes total score when snake eyes are rolled
			else if (isTotalScoreLost(die1Value, die2Value))
			{
				cout << "Snake eyes! \n";
                cout << "Computer total score is now zero. \n";
				total2 = 0;
				break;
			}

			// Stops roll and wipes turn score when a one is rolled
			else if (isTurnScoreLost(die1Value, die2Value))
			{
				cout << "A ";
                if(die1Value < die2Value){cout << die1Value;}
                else{cout << die2Value;}
                cout << " was rolled.\n";
                cout << "Turn score lost. \n";
				turnTotal = 0;
				break;
			}
			else
			{ 
				turnTotal = die1Value + die2Value + turnTotal;
				cout << "Turn score: " << turnTotal << endl;
			}
		}
		// Adds turn total to game total 
		// Adds when computer turn score >= 20 and ones were not rolled.
		if (!isTurnScoreLost(die1Value, die2Value) && !isTotalScoreLost(die1Value, die2Value)) 
		{
			total2 += turnTotal;
			turnTotal = 0;
		}
		roundNum++;
	}

// Displaying Game Result w/ Ascii Art

	// Player Victory
	if (total1 > total2)
	{
        cout << "\n";
        cout << "     [PLAYER VICTORY]      \n";
		cout << "You've beat the computer! \n";
        cout << "    Congratulations! \n";
        cout << endl;

        cout << "      ┈┈┈┈┈┈▕▔╲ \n";
        cout << "      ┈┈┈┈┈┈┈▏▕ \n";
        cout << "      ┈┈┈┈┈┈┈▏▕▂▂▂ \n";
        cout << "      ▂▂▂▂▂▂╱┈▕▂▂▂▏\n";
        cout << "      ▉▉▉▉▉┈┈┈▕▂▂▂▏\n";
        cout << "      ▉▉▉▉▉┈┈┈▕▂▂▂▏\n";
        cout << "      ▔▔▔▔▔▔╲▂▕▂▂▂ \n";
        cout << endl;
	}

	// Computer Victory
	else if (total2 > total1) {
        cout << "\n";
		cout << "          [COMPUTER VICTORY]     \n";
        cout << "     The computer has won the game! \n";
        cout << "         Better luck next time! \n";

            cout << "     ,---------------------------,\n";
            cout << "     |  /---------------------\\  |\n";
            cout << "     | |                       | |\n";
            cout << "     | |     0         0       | |\n";
            cout << "     | |          <            | |\n";
            cout << "     | |      \\________/       | |\n";
            cout << "     | |                       | |\n";
            cout << "     |  \\_____________________/  |\n";
            cout << "     |___________________________|\n";
            cout << "   ,---\\_____     []     _______/--------,\n";
            cout << "  /         /______________\\           / |\n";
            cout << " /___________________________________ /  |\n";
            cout << " |                                   |   |\n";
            cout << " |  _ _ _                 [-------]  |   |\n";
            cout << " |  o o o                 [-------]  |  / \n";
            cout << " |___________________________________| /   \n";
 
    
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

bool isWinningScore(int score){
	if(score >= 100){return true;}
	else{return false;}
}

bool isWinningScore(int score1, int score2){
	if(isWinningScore(score1)){return true;}
	else if(isWinningScore(score2)){return true;}
	else{return false;}
}

