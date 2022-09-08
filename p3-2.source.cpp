#include <iostream>
using namespace std;

int main()
{
	int intOne;
	int intTwo;

	cout << "Please enter two integers:";
		cin >> intOne >> intTwo;

		int sum = intOne + intTwo;
		int diff = intOne - intTwo;
		int prod = intOne * intTwo;
		double avg = (intOne + intTwo) / 2.0;

		cout << "Sum:" << sum << endl;
		cout << "Difference:" << diff << endl;
		cout << "Product:" << prod << endl;
		cout << "Average:" << avg << endl;



}