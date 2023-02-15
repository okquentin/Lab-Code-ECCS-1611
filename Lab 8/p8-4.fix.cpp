#include <iostream>
#include <string>

using namespace std;

// *** Function Prototypes ***
int romanCharValue(char r);
int convertRomanToInt(string s);

int main(){

// Variable Declarations
int total = 0;
string myStr;

// Main algorithim
for(;;){
    cout << "Enter a Roman number or Q to quit: ";
        getline(cin, myStr);
    if(myStr == "Q" || myStr == "q"){break;}
    cout << myStr << " = " << total;
}   

// END OF MAIN
return 0;
}

// ** Function Headers ***
int romanCharValue(char r){

}

int convertRomanToInt(string s){

}