#include <iostream>
#include <cmath>

using namespace std;


int main(){

// Variable Declarations
bool quit = false;
double num;
double sum = 0;
int count = 0;
double mean;
double variance;
double SD;
double squaredSum;

// User Prompt
cout << "Enter numbers - Q to quit: ";

while(!quit){

    cin >> num;

    if(cin.fail()){ quit = true;} 
    else{
    count++;
    sum += num;
    mean = double(sum)/double(count);
    squaredSum += num*num;
    }
}


variance = (squaredSum - ((sum*sum)/count));

variance = variance/(count-1);

SD = sqrt(variance);

cout << "n = " << (count);
cout << ", average = " << mean;
cout << ", standard deviation = " << SD;

return 0;
}