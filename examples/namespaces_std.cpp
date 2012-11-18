#include <iostream>
using namespace std; //"using" makes the namespace "std" available for the entire program

int main(){
	//std::cout << "Hello World!"; //without "using" namespace "std"
	cout << "Hello World!"; //we don't need the scope operator "::" because we are "using" namespace "std"
	return 0;
}