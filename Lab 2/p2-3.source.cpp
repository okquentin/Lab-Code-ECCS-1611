#include <iostream>
#include <string>

int main()
{
	using namespace std;
	double meters;
	double inches; 
	double feet;
	double miles;
	cout << "Enter measurment (m):";
	cout << endl;
	cin >> meters;
	
	inches = (meters * 39.37);
	cout << endl << "Inches:" << inches << "cm";
	
	feet = (meters * 3.281);
	cout << endl << "Feet:" << feet << "ft";

	miles = (meters / 1609);
	cout << endl << "Miles:" << miles << "mi";


}
		
		
