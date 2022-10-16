#include <iostream>
using namespace std;

// FUNCTION PROTOTYPES
bool all_the_same(int x, int y, int z);
bool all_different(int x, int y, int z);
bool sorted(int x, int y, int z);

// MAIN FUNCTION
int main(){

// Variable Declarations
bool same = false;
bool different = false;
bool numSort = false;
int x = 0;
int y = 0;
int z = 0;

// Algorithim
for(;;){

    // User Prompt
    cout << "Enter three numbers or Q to quit: ";
    cin >> x >> y >> z;

    // Quit Statement
    if(cin.fail()){
        break;
    }

    // Calling same function and outputting return
    same = all_the_same(x, y, z);
    if(same == true){
    cout << "Numbers are all the same." << endl;
    } else{
    cout << "Numbers are not all the same." << endl;
    }

    // Calling different function and outputting return
    different = all_different(x, y, z);
    if(different == true){
    cout << "Numbers are all different." << endl;
    } else{
    cout << "Numbers are not all different." << endl;
    }

    // Calling sorted function and outputting return
    numSort = sorted(x, y, z);
    if(numSort == true){
    cout << "Numbers are sorted." << endl;
    } else{
    cout << "Numbers are not sorted." << endl;
    }
}

return 0;
}


// FUNCTION HEADERS

bool all_the_same(int x, int y, int z){

if(x == y && x == z){
    return true;
} else{
    return false;
}
}

bool all_different(int x, int y, int z){

if(x != y && x != z){
    return true;
} else{
    return false;
}

}

bool sorted(int x, int y, int z){

if(x < y && y < z){
    return true;
} else{
    return false;
}


}