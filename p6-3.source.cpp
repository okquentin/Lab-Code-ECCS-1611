#include <iostream>
#include <cmath>

using namespace std;


int main(){

// Variable Declarations
bool quit = false;
int num;
int sum = 0;
int count = 0;
double mean;
double variance;
double SD;

// User Prompt
cout << "Enter numbers - Q to quit: ";

while(!quit){

    if(cin.fail()){ quit = true;} 
    else{
    cin >> num;
    count++;
    sum += num;
    mean = double(sum)/double(count-1);
    variance = pow((double(num)-mean), 2) / ((double(count)-1)-1);
    SD = double(sqrt(variance));
    }
}

cout << "n = " << (count-1);
cout << ", average = " << mean;
cout << ", standard deviation = " << SD;

return 0;
}