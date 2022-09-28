#include <iostream>
#include <string>
using namespace std;

// String isn't a primitive data type (research this later)

int main(){
    string s = "Hello world";
    string city, state;
    cout << s << endl;
    cout << "Enter your home town (city, state): ";
    cin >> city; // cin always says blank space is a delimiter
                // Generally, you don't want to use cin in real programs

    getline(cin, city, ','); // getline is the better option
                            // delimiter for getline is end of line
                            // but you can set a delimiting character 
                            // by specifiying one within '' 
                            // in this case, that character is a comma
    getline(cin, state);


    cout << "Your string is \""; // "\" says: This is a special character.
                                // used in this case to show a " character.
    
}

// say the program only asks for a city input
    // example input/output with cin
        // input: "Ottowa Hills"
        // output: "Ottowa"

    // example input/output with getline
        // input: "Ottowa Hills"
        // output: "Ottowa Hills"