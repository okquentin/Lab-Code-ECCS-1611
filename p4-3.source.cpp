#include <iostream>
#include <iomanip>
using namespace std;


int main(){

// Variable Declaration

int intInput;

int length; // # of digits

// Initial Prompt
cout << "Please enter an integer: ";
    cin >> intInput; 

// Digit Counter
int integer = abs(intInput);

if(integer < 10){
    length = 1;
} else if(integer < 100){
    length = 2;
} else if(integer < 1000){
    length = 3;
} else if(integer < 10000){
    length = 4;
} else if(integer < 100000){
    length = 5;
} else if(integer < 1000000){
    length = 6;
} else if(integer < 10000000){
    length = 7;
} else if(integer < 100000000){
    length = 8;
} else if(integer < 1000000000){
    length = 9;
}


// Output

cout << "Number of digits: " << length << endl;

return 0;
}