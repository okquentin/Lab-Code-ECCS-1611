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
int maxiPos;
int miniPos;

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
    
    double avg = average(ptr, size);
    cout << "Average is " << avg << endl;

    double* max = maximum(ptr, size);
    for(int i = 0; i < size; i++){
    if(ptr[i] == *max){maxiPos = i;}
    }
    cout << "Maximum value is element #" << maxiPos << ": " << *max << endl;

    double* min = minimum(ptr, size);
    for(int i = 0; i < size; i++){
    if(ptr[i] == *min){miniPos = i;}
    }
    cout << "Minimum value is element #" << miniPos << ": " << *min << endl;

delete ptr;

// END MAIN
return 0;
}


double average(double* a, int size){
double avg = 0;
for(int i = 0; i < size; i++){
    avg += a[i];
}
avg /= size;
return avg;
}

// *** Function Definitions ***
double* maximum(double* a, int size){

double* max = new double;
*max = *a; 

for(int i = 0; i < size; i++){
   if(*max < *(a+i)){*max = *(a+i);}
}

return max;
}

double* minimum(double* a, int size){


for(int i = 0; i < size; i++){
   if(*a > *(a+i)){*a = *(a+i);}
}

return a;
}
