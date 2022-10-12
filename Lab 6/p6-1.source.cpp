#include <iostream>

using namespace std;

int main(){

// Variable Declarations
int numAst; 

// User Prompt
cout << "Enter number of asterisks per side: ";
    cin >> numAst; 

// Loop to generate squares.
// Where 'i' denotes rows and 'j' columns.
for(int i = 1; i <= numAst; i++){

    // Solid Square
    for (int j = 1; j <= numAst; j++ ){
        
        if(j == numAst)
            cout << "* "; // space included to separate squares
        else
            cout << "*";
    }

    // Hollow Square
    for (int j = 1; j <= numAst; j++){

    if (i == 1 || i == numAst || j == 1 || j == numAst)        
            cout << "*";            
        else
            cout << " ";
    }
      
    cout << endl; // output both squares
}

return 0;
}