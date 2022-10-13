#include <iostream>

using namespace std;

//  *** Function Definitions ***
      
/* Name: smallest
 * Description: finds the smallest of 3 numbers
 * Parameters: x, y, and z for 1st, 2nd, and 3rd number
 * Returns: Calculation to find smallest number
 */

double smallest(double x, double y, double z){

if(x < y && x < z)
return z;

else if(y < x && y < z)
return y;

else if (x < y && x < z)
return x;
}


// *** Main Program *** 
int main(){

// Variables
double x;
double y;
double z;

// User Prompt
cout << "Enter three numbers: ";
    cin >> x >> y >> z;

double smallestNum = smallest(x);

cout << smallestNum << endl;

// END OF MAIN 
return 0;
}



/* Name: average
 * Description: finds the average of 3 numbers
 * Parameters: x, y, and z for 1st, 2nd, and 3rd number
 * Returns: Calculation for the average
 */


// ----

// double average(double x, double y, double z){


// }
