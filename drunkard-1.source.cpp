#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// FUNCTION PROTOTYPES
int movePos(void);
void moveFunc(int drunkNum, int posX, int posY);

// MAIN FUNCTION
int main(){

srand(time(0)); // Random seed

moveFunc(1, 0, 0);
moveFunc(2, 0, 0);
moveFunc(3, 0, 0);
moveFunc(4, 0, 0);
moveFunc(5, 0, 0);
moveFunc(6, 0, 0);
moveFunc(7, 0, 0);
moveFunc(8, 0, 0);
moveFunc(9, 0, 0);
moveFunc(10, 0, 0);

return 0;    
}

// FUNCTION DEFINITIONS

/* Name: movePos
 * Desc: Moves the drunkard one space in x and/or y. 
 * Param: N/A
 * Return: Movement in coordinate plane for each step. 
 */ 

int movePos(void){

int range = 1-(-1)+1; // Set range for rand between 1 and -1 inclusive

return rand() % range + -1; // Uses range to decide what position to move 
}

/* Name: moveFunc
 * Desc: Moves the drunkard one space in x and/or y. 
 * @drunkNum - number of drunkard who moving
 * @posX  - initial position in x (0)
 * @posY - initial position in y (0)
 * Return: N/A
 */ 

void moveFunc(int drunkNum, int posX, int posY){

    int seconds = 0;

    while(seconds < 120){
    posX += movePos();
    posY += movePos();

    seconds++;
    }
cout << "Drunkard #" << drunkNum << ": finished at location (" << posX << ", " << posY << ") \n";

}