#include <iostream>
#include <iomanip>
using namespace std;

int main(){

// Variable Declarations

    int sumNum = 0;

// Sum of All Even Numbers between 2 and 100

    for(int i=2; i<=100; i=i+2){

    sumNum = sumNum + i;

}

// Sum of all squares between 1 and 100



// Output

cout << "The sum of all even numbers between 2 and 100, inclusive, is " << sumNum; 



return 0;

}