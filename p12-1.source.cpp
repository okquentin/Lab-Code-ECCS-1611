#include <iostream>
using namespace std;

// *** Function Prototypes ***
double average(double* a, int size);
double* maximum(double* a, int size);
double* minimum(double* a, int size);

// *** BEGIN MAIN ***
int main(){

// Variable Declarations
int size;
double* ptr;

// Algorithim
    cout << "Enter size of array: ";
        cin >> size;

    ptr = new double[size];
        if (size == 0){
        cout << "No memory allocated";
        exit(0);
        }

    cout << "Enter 6 floating-point values: ";
        for(int i = 0; i < size; i++){
        cin >> ptr[i];
        }

    double* max = maximum(ptr, size);
    cout << "Maximum value is element #" << ": " << *max << endl;

    double* min = minimum(ptr, size);
    cout << "Minimum value is element #" << ": " << *min;

delete ptr;

// END MAIN
return 0;
}


// *** Function Definitions ***
// double average(double* a, int size){

// }
double* maximum(double* a, int size){
    
for(int i = 0; i < size; i++){
   if(*a < *(a+i)){*a = *(a+i);}
}

return a;
}

double* minimum(double* a, int size){

for(int i = 0; i < size; i++){
   if(*a > *(a+1)){*a = *(a+1);}
}

return a;
}
