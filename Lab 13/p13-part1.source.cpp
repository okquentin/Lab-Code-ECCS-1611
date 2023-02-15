#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// *** FUNCTION PROTOTYPES ***
void pressEnterToContinue();
bool readFromFile(string filename);

// *** MAIN ***
int main(){

string filename;

    cout << "Lab 13 Intro to Text Files\n";
    cout << endl;
    cout << "Input file: ";
    getline(cin, filename);

    readFromFile(filename);
    bool status = readFromFile(filename);
    if(status) cout << "Success!\n";
    else cout << "failure. :-(\n";

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

bool readFromFile(string filename){
    ifstream inFile;
    string movieTitle;
    int year;
    inFile.open(filename);

    if(inFile.fail()){
        cout << "read error - sorry\n";
        return false;
    }

    while(true){
        inFile >> movieTitle >> year;
        if(inFile.fail()) break;

        cout << movieTitle << ": " << year << endl;
    }

    inFile.close();
    return true;
}