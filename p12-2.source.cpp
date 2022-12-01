#include <iostream>
using namespace std;


// ** FUNCTION PROTOTYPES ** 
int charcnt(char* ptr, char c);
int repeat(char* ptr);
void reverse(char* ptr); 

// ** MAIN **
int main(){

// Variable Declarations
char* ptr;
char cstr[100];
char userChar;
int numChar;
int numRepeat;

ptr = cstr;

// Algorithim

cout << "Enter a string: ";
    cin.get(cstr, 100);

cout << "Enter a character: ";
    cin >> userChar;

numChar = charcnt(ptr, userChar);
cout << "The character '" << userChar << "' appears " << numChar << " times in the string.\n";

numRepeat = repeat(ptr);
cout << "The are " << numRepeat << " repeated characters in the string.\n";

reverse(ptr);

// END MAIN
return 0;
}
// ** FUNCTION HEADERS **

int charcnt(char* ptr, char c){

int charNum = 0;
for(int i = 0; i < 100; i++){
    if(ptr[i] == c){charNum++;}
    if(ptr[i] == '.' && i > 2){break;}
}   

return charNum;
} 

int repeat(char* ptr){

int numRepeat = 0;
for(int i = 0; i < 100; i++){
    if(ptr[i] == '.' && i > 2){break;}
    if(ptr[i] == ptr [i+1]){numRepeat++;}
}   

return numRepeat;
}

void reverse(char* ptr){

int actualSize = 1;

for(int i = 0; i < 100; i++){
    if(ptr[i] == '.' && i > 2){
        break;
    }
    else{actualSize++;}
}

    int j = actualSize -1;
    for(int i =0; i< j; i++, j--)
    {
        int temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
    }

cout<<"The reversed string is: ";
    for(int i = 0; i < actualSize; i++){
        cout << ptr[i] << " ";
    }
}