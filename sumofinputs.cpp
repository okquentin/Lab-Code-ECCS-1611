#include <iostream>
using namespace std;

int main(){
    
    int sum = 0;
    int input;
    bool done = false;

    cout << "Enter values, 0 to quit: " << endl;
    cin >> input;

    if(input ==0){
        done == true;
    } while(done != true){
        sum += input;
    }

    cout << "Sum: " << sum << endl;
    
    return 0;
}