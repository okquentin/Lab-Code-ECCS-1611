#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    const double rail = 9.97; // cost of rail
    const double post = 10.98; // cost of post
    float segment = (3 * rail) + post; // cost of each segment of fence

    double fenceLength; // length of fencing requested by client
    cout << "Enter length of fencing needed (feet): ";
    cin >> fenceLength;

    double totalCost;

     totalCost = ((fenceLength / 10) * segment) + post;

    cout << endl << "Your cost is: $ " << totalCost;
    return 0;
}
