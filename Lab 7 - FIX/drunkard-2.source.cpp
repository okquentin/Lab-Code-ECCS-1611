#include <iostream>
#include <cmath>

using namespace std;

// FUNCTION PROTOTYPES

void expected(double minute);
void moveFunc(int drunkNum, int posX, int posY);
void average(int numMinutes);

// MAIN FUNCTION
int main(){

// Variable Declarations
double numMinutes;
double expectedDistance;
int drunkNum = 1;

// User Prompt
cout << "Enter number of minutes for each drunkard to stagger: ";
    cin >> numMinutes;

// Calling Functions
while(drunkNum <= 100000){
    moveFunc(drunkNum, 0, 0, numMinutes);
    drunkNum++;
}
expected(numMinutes);
average(numMinutes);

return 0;
}



// FUNCTION DEFINITIONS

void expected(double minute){

    double totalNum = minute*60;
    double avgLength = ((4*sqrt(2))+4)/9;
    double expectedDistance = sqrt(totalNum*avgLength);
    cout << "Expected distance: " << expectedDistance;
}

int movePos(void){
int range = 1-(-1)+1; // Set range for rand between 1 and -1 inclusive

return rand() % range + -1; // Uses range to decide what position to move 
}

void moveFunc(int drunkNum, int posX, int posY, int numMinutes){
    numMinutes*=60;
    int seconds = 0;
    int sum = 0;
    int distance =0;

    while(seconds < numMinutes){
    posX += movePos();
    posY += movePos();
    seconds++;
    distance += sqrt(posX^2)+sqrt(posY^2);
    }
    sum += distance;
    
    cout << sum;
}

void average(int numMinutes){
//     int drunkNum = 1;
//     int sum = 0;

//     while(drunkNum <= 10000){
//     moveFunc(drunkNum, 0, 0, numMinutes);
//     drunkNum++;
//     } 
// }
