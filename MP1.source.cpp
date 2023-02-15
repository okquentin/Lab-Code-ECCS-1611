/*

 * File: MP1.source.cpp
 * Author: Quentin Osterhage
 * Date: 9/29/2022
 *
 * Description: Calculating the cost and change due for purchases made at Jim's Donut Shop


*/

#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// *** MAIN FUNCTION ***
int main(){

    // Variable Declarations 
    double salesTax = 1.075; // 7.5% sales tax

    int costRegSIN = 75; // singular rate
    int costRegDOZ = 799; // dozen rate
    int costReg; // total $ of regular donuts


    int costFanSIN = 85; // singular rate
    int costFanDOZ = 849; // dozen rate
    int costFan; // total cost of fancy donuts


    int costFrit = 150; // Cost of a fritter

    // User inputted variables
    int numReg;
    int numFan;
    int numFrit;
    double amountPaid;

    // Prompt for order input
        cout << "Number of regular donuts ordered: ";
            cin >> numReg;

        cout << "Number of fancy donuts ordered: ";
            cin >> numFan;

        cout << "Number of apple fritters ordered: ";
            cin >> numFrit;

    // Cost Calculations

        // For Regular Donuts
        if(numReg % 12 == 0){
            costReg = ((numReg/12)*(costRegDOZ)); // When the changeDue is a product of twelve

        } else if(numReg % 12 != 0){
            costRegSIN *= (numReg % 12); // Find remainder and * by cost of single donut
            costRegDOZ *= (numReg/12); // Find quotient and * by cost of dozen donut

            costReg = costRegSIN + costRegDOZ; // Adding to get total cost of regular donuts
        }

        // For Fancy Donuts
        if(numFan % 12 == 0){
            costFan = ((numFan/12)*(costFanDOZ));

        } else if(numFan % 12 != 0){
            costFanSIN *= (numFan % 12); 
            costFanDOZ *= (numFan/12); 

            costFan = costFanSIN + costFanDOZ; 
        }
        
        // For Fritters
        costFrit *= numFrit;

    // Cost Calculation w/ Output
    double amountDue = ((double(costReg + costFan + costFrit))/100)*salesTax;

        cout << fixed;
        cout << setprecision(2);
        cout << "Customer owes $" << amountDue << endl;

    // Prompt for payment input
        cout << "Cutomer pays $";
            cin >> setprecision(2);
            cin >> amountPaid;

    // Change Calculation  
    double changeDue = (amountPaid) - (amountDue); // For change due as a decmimal value

    double coins = round(changeDue*100); // For change due in coins

        int dollars = int(coins/100);
            coins -= 100*dollars; // to get change remaining

        int quarters = int(coins/25);
            coins -= 25*quarters; 

        int dimes = int(coins/10);
            coins -= 10*dimes;

        int nickels = int(coins/5);

        int pennies = coins-5*nickels;

    // Change Output as a decmial value
    if(changeDue < 0.01){ // Validating that change is actually owed
    cout << "Exact payment recieved - no change owed.";
    }else{
    cout << "Changed owed is $" << changeDue << " - ";
    }

    // Change Output in Coins;
    if(dollars > 0){

        // Change type is compared to value '1' to check for plurality
        // If no other change is due then a period is added.
        // This code format is repeated for every coin type, except for pennies
        }if(dollars == 1 && quarters == 0 && dimes == 0 && nickels == 0 && pennies == 0){
            cout << dollars << " dollar.";
        }else if (dollars > 1 && quarters == 0 && dimes == 0 && nickels == 0 && pennies == 0){
            cout << dollars << " dollars.";

        // Otherwise (if other change is also due), a comma is added. 
        // Code is again compared to '1' to check for plurality
        // This code format is also repeated for every coin type, except for pennies.
        }else if(dollars == 1){ 
        cout << dollars << " dollar, ";
        }else if (dollars > 1){
        cout << dollars << " dollars, ";

    }if(quarters > 0){
    
        }if(quarters == 1 && dimes == 0 && nickels == 0 && pennies == 0){
            cout << quarters << " quarter.";
        }else if (quarters > 1 && dimes == 0 && nickels == 0 && pennies == 0){
            cout << quarters << " quarters.";

        }else if(quarters == 1){ 
        cout << quarters << " quarter, ";
        }else if (quarters > 1){
        cout << quarters << " quarters, ";

    }if(dimes > 0){
    
        }if(dimes == 1 && nickels == 0 && pennies == 0){
            cout << dimes << " dime.";
        }else if (dimes > 1 && nickels == 0 && pennies == 0){
            cout << dimes << " dimes.";

        }else if (dimes == 1){ 
        cout << dimes << " dime, ";
        }else if (dimes > 1){
        cout << dimes << " dimes, ";

    }if(nickels > 0){
    
        }if(nickels == 1 && pennies == 0){
            cout << nickels << " dollar.";
        }else if (nickels > 1 && pennies == 0){
            cout << nickels << " dollars.";

        }else if(nickels == 1){ 
        cout << nickels << " nickel, ";
        }else if (nickels > 1){
        cout << nickels << " nickels, ";

    }if (pennies > 0){

    // Because pennies will always be the last output (if > 0)
    // All that is checked for is plurality.
        if(pennies == 1){
        cout << pennies << " penny.";
        }else
        cout << pennies << " pennies.";

    } 

// END OF MAIN
return 0;
}
