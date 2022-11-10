// Question to ask: 
// why is my for loop infinite when cin > maximum threshold value for an integer in C++
// (2147483647) is entered?


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
// Variable Declarations

int cardNum; // user input
bool isCardValid( int digits[], int size ); 


int digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8; // for operating on individual digits of the card number

// User Prompt
for(;;){

// Prompt statement
    cout << "Please enter 8-digit card number: ";
    cin >> cardNum; 

    // Storing card # as a string, then counting the length of that string as an integer
        string cardString = to_string(cardNum); 
        int numLength = cardString.length(); 

    // Error checking to make sure 8 digits are entered.
        if(numLength < 8 || numLength > 8){
        cout << "Please enter 8 digits." << endl;
        }

// Stripping digits out of card number
    else if(numLength == 8){
        
        while(cardNum >0){
        digit1 = cardNum % 10;
            cardNum /= 10;
        digit2 = cardNum % 10;
            cardNum /= 10;
        digit3 = cardNum % 10;
            cardNum /= 10;
        digit4 = cardNum % 10;
            cardNum /= 10;
        digit5 = cardNum % 10;
            cardNum /= 10;
        digit6 = cardNum % 10;
            cardNum /= 10;
        digit7 = cardNum % 10;
            cardNum /= 10;
        digit8 = cardNum % 10;
            cardNum /= 10;
        }
    break; 
    }
}

// Operating on digits

int digitSum = digit1 + digit3 + digit5 + digit7; // Summing every other digit, beginning with rightmost

// Doubling every other digit, beginning with leftmost
int DoubleDigit1 = digit2*2;
int DoubleDigit2 = digit4*2;
int DoubleDigit3 = digit6*2;
int DoubleDigit4 = digit8*2;


// Stripping digits out of doubled results 
while(DoubleDigit1 > 0){
    digit1 = DoubleDigit1 % 10;
        DoubleDigit1 /= 10;
    digit2 = DoubleDigit1 % 10;
        DoubleDigit1 /= 10;
}

while(DoubleDigit2 > 0){
    digit3 = DoubleDigit2 % 10;
        DoubleDigit2 /= 10;
    digit4 = DoubleDigit2 % 10;
        DoubleDigit2 /= 10;
}

while(DoubleDigit3 > 0){
    digit5 = DoubleDigit3 % 10;
        DoubleDigit3 /= 10;
    digit6 = DoubleDigit3 % 10;
        DoubleDigit3 /= 10;
}

while(DoubleDigit4 > 0){
    digit7 = DoubleDigit4 % 10;
        DoubleDigit4 /= 10;
    digit8 = DoubleDigit1 % 10;
        DoubleDigit4 /= 10;
}

// Summing stripped double digits
int sumDouble = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8;


// 
int checkSum = digitSum + sumDouble;

// Checking if checkSum ends in zero and outputting card validity status based on yes/no
if(checkSum % 10 ==0)
cout << "Card is valid." << endl;
else
cout << "Card is not valid." << endl;


return 0;  
}    

