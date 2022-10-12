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

// Input Analysis
if(cin.fail()){ // Quit Function 
    quit = true;
}
else{
    if(numInput > largest){ // Determining largest input
        largest = numInput;
    }
    if(numInput < smallest){ // Determining smallest input
        smallest = numInput;
    }

    if (numInput == 0){ // Handling 'zero' inputs
        evenCount = 0;
        oddCount = 0;
    } else if(numInput % 2 == 0){ // Even Count
        evenCount += 1;
    }  else{ // Odd Count
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