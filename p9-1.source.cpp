#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function Prototypes
void randomIntMatrix(int &num);
void evenIndices(int &num);
void evenElements(int &num);
void reverseElements(int &num);
void firstlastElement(int &num);

// BEGIN MAIN
int main(){

srand(time(0));

// Declarations
int ROW = 10;
int COL = 4;

int m[ROW][COL];

cout << "The random integers: ";
for(ROW = 0; ROW < 10; ROW++){
    for(COL = 0; COL < 4; COL++){
        m[ROW][COL] = rand() % 9+1;
        cout << m[ROW][COL];
    }cout << " ";
}

cout << endl << "Even indices: ";
for(ROW = 0; ROW < 10; ROW++){
    

    if(ROW % 2 == 0){
        for(COL = 0; COL < 4; COL++){
        cout << m[ROW][COL];
        }cout << " ";
    } 
}

cout << endl << "Even values: ";
for(ROW = 0; ROW < 10; ROW++){
    COL = 3;
    if(m[ROW][COL] % 2 == 0){
        for(COL = 0; COL < 4; COL++){
        cout << m[ROW][COL];
        }cout << " "; 
    } 
}

cout << endl << "Reversed order: ";
for(ROW = 9; ROW > -1; ROW--){
    for(COL = 0; COL < 4; COL++){
        cout << m[ROW][COL];
    } cout << " ";
}


cout << endl << "First and last: ";
for(ROW = 0; ROW < 1; ROW++){
    for(COL = 0; COL < 4; COL++){
        cout << m[ROW][COL];
    }cout << " ";
}
for(ROW = 9; ROW < 10; ROW++){
    for(COL = 0; COL < 4; COL++){
        cout << m[ROW][COL];
    }
}

// END MAIN
return 0; 
}

// Function Definitons
void randomIntMatrix(int &num){

}
void evenIndices(int &num){

}
void evenElements(int &num){

}
void reverseElements(int &num){

}
void firstlastElement(int &num){

}

