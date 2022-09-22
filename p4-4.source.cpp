#include <iostream>
#include <iomanip>
using namespace std;

int main(){

//Variable Declarations

double amountDue;
double amountPaid;

// Initial Prompt

    cout << "Customer owes  $"; 
        cin >> amountDue;
    cout << "Customter pays $";
        cin >> amountPaid;

// Change Formula

double changeDue = (amountPaid - amountDue);

// Change Output
cout << fixed;
cout << setprecision(2);
cout << "Change due is  $" << changeDue << endl;

// Coin Counting
int coins = changeDue*100;

    int dollars = int(coins/100);

        coins -= 100*dollars; // to get change remaining

    int quarters = int(coins/25);

        coins -= 25*quarters; 

    int dimes = int(coins/10);

        coins -= 10*dimes;

    int nickels = int(coins/5);

    int pennies = coins-5*nickels;

    

// Coin Output 
if(dollars > 0){

cout << dollars << " dollars" << endl;

} if(quarters > 0){
cout << quarters << " quarters" << endl;
} if(dimes > 0){
cout << dimes << " dimes" << endl;
}if (nickels > 0){
cout << nickels << " nickels" << endl;
}if (pennies > 0){
cout << pennies << " pennies" << endl;
}
return 0;
}



