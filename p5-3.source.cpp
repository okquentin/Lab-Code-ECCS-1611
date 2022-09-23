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


// User Prompt

    cout << "Please enter a number: ";
        cin >> number;

// Algorithim

if(number == 0){
    cout << 0;
}

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

// cout << digit1 << endl;
// cout << digit2 << endl;
// cout << digit3 << endl;
// cout << digit4 << endl;
// cout << digit5 << endl;
// cout << digit6 << endl;
// cout << digit7 << endl;
// cout << digit8 << endl;

// Output

if(digit1 != 0){
    cout << digit1 << endl;
}

return 0;
} 

return 0;
}