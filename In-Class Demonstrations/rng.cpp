// Random Number Generator
// rand() - generates integer between 0 and RAND_MAX
// srand() - seed for starting the random number generator
// time() - uses current system time as a seed

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

srand(time(0));
    cout << time(0) << endl;

    for(int i = 0; i <10; i++)
        // convert [0...RAND_MAX] to [1...6]
        cout << rand() % 6 << endl;



return 0;
}
