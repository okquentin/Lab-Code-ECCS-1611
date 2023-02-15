#include <iostream>
#include <string>

using namespace std;

// *** Function Prototypes ***
int countVowel(string str);
string toUpper(string s);

// BEGINNING OF MAIN
int main(){

// Variable Declarations
string userString;
int vowelCount = 0;

// User Prompt
    while (true){
    cout << "Enter a string or Q to quit: ";
    getline(cin, userString);
    if(userString == "Q"){break;}
    vowelCount = countVowel(userString);
    cout << vowelCount << endl;
    }

// END OF MAIN
return 0;
}

// *** Function Headers ***
int countVowel(string str){
    int vowelCount = 0;
    str = toUpper(str);
    for(int i = 0; i < str.length(); i++){
    if(str[i]== 'A' || str[i]== 'E' || str[i]== 'I' || str[i]== 'O' || str[i]=='U'){vowelCount++;}
    }
    return vowelCount;
}

string toUpper(string s){
    for (int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}