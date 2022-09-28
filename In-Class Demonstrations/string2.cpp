#include<iostream>
#include<string>

using namespace std;

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
                                // used in this case to show a " character

    for (int i = 0; i < city.length(); i++){ // start index at zero, go up to but NOT include length
        city[i] = city[i] - 32; // converts output to uppercase, based on ASCII values
        cout << i << ":" << city[i] << endl; 
    }
}

// example input/output (with city[i] = city[i])
    // input: abcdef 
    // output: abcdef 

// example input/output (with city[i] = city[i] - 32)
    // input: abcdef
    // output: ABCDEF