#include<iostream>
using namespace std;

int main(){

// Variable Declarations

int number = 0;
    int digit1;
    int digit2; 
    int digit3; 
    int digit4;
    int digit5;
    int digit6; 
    int digit7;
    int digit8;

bool quit = false;

// User Prompt

for(;;){
   cout << "Please enter a whole number: ";
        cin >> number;
    if (number < 0) // Failed input if not a whole number
    cout << "Be sure to enter a whole number." << endl; 
    if (number == 0) // Dealing with 'zero' input
    cout << "Number in binary: " << 0;
    if (number > 0)
    break;
}
 

// Algorithim
  
while(number >0){

digit1 = number % 2;
    number /= 2; // Storing quotient
digit2 = number % 2;
	number /= 2;

digit3 = number % 2;
    number /= 2; 
digit4 = number % 2;
	number /= 2;

digit5 = number % 2;
    number /= 2; 
digit6 = number % 2;
	number /= 2;

digit7 = number % 2;
    number /= 2; 
digit8 = number % 2;
	number /= 2;
	
}

// Converting output to a one-line string

string string1 = to_string(digit1);
string string2 = to_string(digit2);
string string3 = to_string(digit3);
string string4 = to_string(digit4);
string string5 = to_string(digit5);
string string6 = to_string(digit6);
string string7 = to_string(digit7);
string string8 = to_string(digit8);

string binaryString = string8 + string7 + string6 + string5 +string4 + string3 + string2 + string1;

// Removing leading zeros by converting the string into an integer value

int binaryOut = stoi(binaryString);

// Outputting the binary number result

cout << binaryOut << endl;

return 0;
} 