#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// *** FUNCTION PROTOTYPES ***
void pressEnterToContinue();
bool fileLength(string filename);
bool fileWordCount(string filename);

// *** MAIN ***
int main(){

string filename;

    cout << "input file: ";
    getline(cin, filename);

    fileWordCount(filename);
    fileLength(filename);

    pressEnterToContinue();

// END MAIN
return 0;
}



// *** FUNCTION HEADERS ***

void pressEnterToContinue() {

    cout << "\nPress enter to continue... \n";
    cin.clear();
    while (cin.get() != '\n') 
        continue;
}

bool fileLength(string filename) {

    ifstream inFile;
    char currentChar;
    int length = 0;
    inFile.open(filename);

    if (inFile.fail()) {
        return false;
    }

    while (true) {
        inFile.get(currentChar);

        if (inFile.fail())
            break;

        if (isalpha(currentChar)) length++;
    }

    cout << "Characters: " << length << endl;

    

    inFile.close();
    return true;

}

bool fileWordCount(string  filename) {

    ifstream inFile;
    string word;
    string notThis = "-";
    int wordCount = 0;
    inFile.open(filename);

    if (inFile.fail()) {
        cout << "read error - sorry \n";
        return false;
    }

    while (true) {
        inFile >> word;

        if (inFile.fail())
            break;
        for(int i = 0; i < word.length(); i++){
            if(isalpha(word[i]))wordCount++;
            break;
        }
    }

    cout << "Words: " << wordCount << endl;

    inFile.close();
    return true;

}
