#include <iostream>
#include <string>
using namespace std;

int main()

{
	cout << "Hello, my name is Hal!" << endl << "What would you like me to do?";
		

	string user_input;

	
	getline(cin, user_input);
	
	cout << "I am sorry, I cannot do that. \n";
	return 0;
}



