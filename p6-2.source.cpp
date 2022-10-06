#include <iostream>

using namespace std;

int main(){
    
// Variable Declarations
int numAst;
int count = 0;

// User Prompt
cout << "Enter number of asterisks per side: ";
    cin >> numAst;

// Generator for top half of diamond
for(int row = 1; row <= (numAst); row++){ // Top Half

    // Spaces
    for(int s = 1; s <= (numAst-row); s++){cout << " ";}

    // Asterisks
    for(int column = 1; column <= (row*2-1); column++){cout << "*";}

cout << endl;

}

// Generator for bottom half of diamon
for(

    // Spaces
    for(

    // Asterisks
    for(




// End of program
return 0;
}


// for(int i = numAst; i >= 1; i--){ // Bottom Half

//     // Spaces
//     for(int s = 

//     // Asterisks
//     for(int j = 

// cout << endl;

// }

// for(int i = 1; i < (2*numAst); i++){

//     for(int j = 1; j < (2*numAst); j++){

//         if(j == 1 && i == 4) {cout << "*";}

//         if(j == 2){
//             if(i == 3 || i == 4 || i == 5){cout << "*";}
//         }

//         if(j%4 == 0){cout << "*";}
//     }