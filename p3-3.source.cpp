#include <iostream>
using namespace std;

int main()
{
		int eggsLaid; 
	cout << "Eggs laid overnight: ";
		cin >> eggsLaid;

	
		int carton = eggsLaid / 12;
	cout << endl << "Cartons needed: " << carton;
	
		int extra = eggsLaid % 12;
	cout << endl << "Eggs left over: " << extra;

	return 0;
}