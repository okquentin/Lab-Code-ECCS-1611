#include <iostream>
using namespace std;

int main ()
{
// Variable Declarations
    const char celsius = 'C';
    const char fahrenheit = 'F';
    int inputTemp; // Temperature value input by user
    char tempScale; // Temperature scale input by user (C or F)

// Initial Prompt
    cout << "Please enter temperature value: ";
    cin >> inputTemp >> tempScale;

// Celsius States
    if(inputTemp > 0 && inputTemp < 100 && tempScale == celsius){
        cout << "Water is a liquid at that temperature" << endl;
    } else if(inputTemp == 100 && tempScale == celsius){
        cout << "Water is both a liquid and a gas at that temperature." << endl;
    } else if(inputTemp == 0 && tempScale == celsius){
        cout << "Water is both a solid and a liquid at that temperature." << endl;
    } else if(inputTemp < 0 && tempScale == celsius){
        cout << "Water is a solid at that temperature." << endl;
    } else if(inputTemp > 100 && tempScale == celsius){
        cout << "Water is a gas at that temperature." << endl;
    }

// Fahrenheit States
    if(inputTemp > 32 && inputTemp < 212 && tempScale == fahrenheit){
        cout << "Water is a liquid at that temperature" << endl;
    } else if(inputTemp == 212 && tempScale == fahrenheit){
        cout << "Water is both a liquid and a gas at that temperature." << endl;
    } else if(inputTemp == 32 && tempScale == fahrenheit){
        cout << "Water is both a solid and a liquid at that temperature." << endl;
    } else if(inputTemp < 32 && tempScale == fahrenheit){
        cout << "Water is a solid at that temperature." << endl;
    } else if(inputTemp > 212 && tempScale == fahrenheit){
        cout << "Water is a gas at that temperature." << endl;
    }

// Error Checking

    if(cin.fail()){
    cout << "Please input temperature as an integer value." << endl; 
    }
    if(tempScale != celsius && tempScale != fahrenheit){
        cout << "Please specify a temperature scale. (C or F)" << endl;
    }

return 0;

}