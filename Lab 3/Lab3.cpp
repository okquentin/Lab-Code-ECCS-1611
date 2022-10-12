#include<iostream>
#include<cmath>
using namespace std;

int main()
{
const int rail = 9.97; // cost of rail
    const int post = 10.98; // cost of post
    const int segment = (3*rail)+post;

    double fenceLength; 
cout << "Enter length of fencing needed (feet): ";
    cin >> fenceLength; 

double totalCost; 

totalCost = ((fenceLength/10)*segment)+post;

cout << endl << "Your cost is: " << totalCost;

}
    

