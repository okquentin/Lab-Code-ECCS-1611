#include <iostream>

using namespace std;

bool isCardValid(int digits[], int size ); 

int main(){

// Variable Declarations
int cardSize = 8;
int digits[cardSize];

cout << "Enter card digits: ";
for(int i = 0; i < cardSize; i++){
    cin >> digits[i];
}

return 0;
}

// *** Function Headers ***
bool isCardValid(int digits[], int size){

int oddSum = 0;
int sum;
int checksum;
for(int i = 0; i < size; i++){

    if(i % 2 != 0){oddSum += digits[i];}
}
for(int i = 0; i < size; i++){
    sum += digits[i];
}

checksum = oddSum+sum;

if(checksum % 10 == 0){return true;}
else{return false;}

} 
