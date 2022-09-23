#include <iostream>
using namespace std;

int main(){

// Variable Declarations

int numInput; 
bool quit = false;
int largest = 0;
int smallest = 100000;
int evenCount = 0;
int oddCount = 0;

// User Prompt
while(quit == false){
    cout << "Enter number or Q to quit: ";
        cin >> numInput;

if(cin.fail()){ // Quit Function 
    quit = true;
}
else{
    if(numInput > largest){
        largest = numInput;
    }
    if(numInput < smallest){
        smallest = numInput;
    }
    if(numInput % 2 == 0)
        evenCount += 1;
        else{
            oddCount += 1;
        }
}
}

// Output 

cout << "Largest Value: " << largest;

cout << " Smallest Value: " << smallest << endl; 

cout << "Even Number Count: " << evenCount;

cout << " Odd Number Count: " << oddCount;

return 0;
}