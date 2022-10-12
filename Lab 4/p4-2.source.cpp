#include <iostream>
using namespace std;

int main(){

// Variable Declarations
    double num1;
    double num2;
    double num3;

// Initial Prompt
    cout << "Please enter three numbers: ";
        cin >> num1 >> num2 >> num3;

// Finding Largest Input
    if(num1 > num2 && num1 > num3){
        cout << "The largest number is " << num1 << endl;
    }
    if(num2 > num1 && num2 > num3){
        cout << "The largest number is " << num2 << endl;
    }
    if(num3 > num1 && num3 > num2){
        cout << "The largest number is " << num3 << endl;
    }

return 0;
}
