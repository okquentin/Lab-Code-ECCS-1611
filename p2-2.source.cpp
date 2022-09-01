#include<iostream>
#include <string>


int main()
{
	using namespace std;
	cout << "Hello, my name is Hal!";
	cout << endl << "What is your name?";
	string user_name;
	getline(cin, user_name);

	cout << "Hello, " << user_name << ". I am glad to meet you!";

}