#include <iostream>
#include <cmath>

using namespace std;


int main(){

// Variable Declarations
bool quit = false;
double num;
double sum = 0;
double count = 0;
double mean;
double sumSquares;
double variance;
double SD;

// User Prompt
cout << "Enter numbers - Q to quit: ";

while(!quit){

cin >> num;

    if(cin.fail()){ quit = true;} 
    else{
    count++;
    sum += num;
    mean = double(sum)/double(count);
    sumSquares += (num-mean);
    }
}

cout << "sumSquares: " << sumSquares;
cout << "n = " << (count);
cout << ", average = " << mean;
cout << ", standard deviation = " << SD;

return 0;
}