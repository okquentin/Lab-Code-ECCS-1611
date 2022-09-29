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
double changeDue = (amountPaid) - (amountDue);

double coins = round(changeDue*100);

    int dollars = int(coins/100);
        coins -= 100*dollars; // to get change remaining

    int quarters = int(coins/25);
        coins -= 25*quarters; 

    int dimes = int(coins/10);
        coins -= 10*dimes;

    int nickels = int(coins/5);

    int pennies = coins-5*nickels;

// Change Output in Decimal
if(coins == 0.00){
    cout << "Exact payment recieved - no change owed.";
}else{
cout << "Changed owed is $" << changeDue << " - ";
}


// Change Output in Coins;
if(dollars > 0){
    if(dollars == 1){
    cout << dollars << " dollar, ";
    }else
    cout << dollars << " dollars, ";
}if(quarters > 0){
    if(quarters == 1){
    cout << dollars << " quarter, ";
    }else
    cout << quarters << " quarters, ";

}if (dimes > 0){
    if(dimes == 1){
    cout << dimes << " dime, ";
    }else
    cout << dimes << " dimes, ";

}if (nickels > 0){
    if(nickels == 1){
    cout << nickels << " nickel, ";
    }else
    cout << nickels << " nickels, ";
}if (pennies > 0){
    if(pennies == 1){
    cout << pennies << " penny.";
    }else
    cout << pennies << " pennies.";

}

return 0;
}