#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r);

int convertRomanToInt(string s);


// BEGIN MAIN
int main(){

// Variable Declarations
string s;

// Main Algorithim
for(;;){
    cout << "Enter Roman number or Q to quit: ";
        getline(cin, s);
    if (s == "q" || s == "Q"){break;}
    cout << s << " = " << convertRomanToInt(s) << endl;
}

// END MAIN
return 0;
}

int convertRomanToInt(string s){
    int total = 0;
    while (s.length() > 0){
        if (romanCharValue(s[0]) >= romanCharValue(s[1])){
            total += romanCharValue(s[0]);
            s.erase(0, 1);
        } 
        else{
            total += (romanCharValue(s[1]) - romanCharValue(s[0]));
            s.erase(0, 1);
            s.erase(0, 1);
        }
    }
    return total;
}

int romanCharValue(char r){
    switch (r)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
    }
}