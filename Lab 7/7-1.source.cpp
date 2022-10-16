#include <iostream>
using namespace std;

// FUNCTION PROTOTYPES
double smallest(double x, double y, double z);   
double average(double x, double y, double z);

// MAIN PROGRAM
int main(){

// Variable Declarations
double x;
double y;
double z;
double smallestNum;
double avgNum;

// User Prompt
cout << "Enter three numbers: ";
    cin >> x >> y >> z;

// Calling Functions

smallestNum = smallest(x, y, z);

cout << "Smallest value is " << smallestNum << endl;

avgNum = average(x, y, z);
cout << "Average is " << avgNum;


// END OF MAIN 
return 0;
}

// FUNCTION DEFINITIONS
double smallest(double x, double y, double z){

    if(x < y && x < z)
    return x;
    else if (y < x && y <z)
    return y;
    else if (z < x && z < y)
    return z;
    
else return 0;
}  

double average(double x, double y, double z){

return ((x+y+z)/double(3));
}


