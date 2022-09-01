#include<iostream>
#include<cmath>

int main()
{
	using namespace std;

	double length;
	double width; 
	double area;
	double perim;
	double diag;

	cout << endl << "Enter length:";
		cin >> length;
	cout << "Enter width:";
		cin >> width;

	area = length * width;
	cout << endl << "Area:" << area;

	perim = 2*(length + width);
	cout << endl << "Perimeter:" << perim;

	diag = sqrt(pow(width, 2) + pow(length, 2));
	cout << endl << "Diagonal:" << diag;

}
