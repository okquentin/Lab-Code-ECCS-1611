#include <iostream>
#include <string>
using namespace std;

// FUNCTION PROTOTYPES
int first_digit(int n);
int last_digit(int n);
int digits(int n);

// MAIN FUNCTION
int main(){

// Variable Declarations
bool quit = false;
int numInput;
int count = 0;
int length = 0;

// User Prompt
while(!cin.fail()){
    cout << "Enter number or Q to quit: ";
        cin >> numInput;

    string numString += to_string(numInput);
    cout << numString;
}  




// Calling Functions

// END OF MAIN
return 0; 
}


// FUNCTION DEFINITIONS

// int first_digit(int n){}

// int last_digit(int n){}

// int digits(int n){


// return;
// }