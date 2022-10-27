#include <iostream>
#include <string>

using namespace std;

// *** Function Prototypes ***
int countWords(string str);

int main(){

// Variable Declarations
string myStr;

// Main algorithim
for(;;){
    cout << "Enter a string or Q to quit: ";
        getline(cin, myStr);
    if(myStr == "Q" || myStr == "q"){break;}
    int wordCount = countWords(myStr);
    cout << "Word count: " << wordCount;
}

// END OF MAIN
return 0;
}

// *** Function Headers ***
int countWords(string str){
    int wordCount = 1;

    for(int i = 0; i < str.length(); i++){
    if(str[i] == ' ' && str[i+1] != ' '){wordCount++;}
    }

return wordCount;
}
