#include <iostream>

using namespace std;

//function declaration
int DemoConsoleOutput();

int main(){
	//call function DemoConsoleOutput()
	DemoConsoleOutput();
	return 0;
}//main()

int DemoConsoleOutput(){
	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing division 10/5 = " << 10/5 << endl;
	cout << "Pi when aproximated is 22/7 = " << 22/7 << endl;
	cout << "Pi more accurately is 22/7 = " << 22.0/7 << endl;
	return 0;
}//DemoConsoleOutput()