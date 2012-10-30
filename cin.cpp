/* Using cin and cout to display number and text input from user */

//pre-processor libraries
#include <iostream>

//namespace
using namespace std;

//main program
int main(){
	//variable to store integer from user
	int InputNumber;

	cout << "Enter an integer: ";
	//store integer given user input
	cin >> InputNumber;

	//The same with text/string data
	cout << "Enter your name: ";
	string InputName;
	cin >> InputName;
	cout << InputName << " entered " << InputNumber << endl;

	return 0;
}//main()