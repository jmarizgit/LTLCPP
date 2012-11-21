#include <iostream>
#include <fstream>	//deal with files input/output
using namespace std;

int main(){
	string buffer; //will hold temporarily content of file
	ifstream in("lorem.txt"); //opening file "lorem.txt" for reading
	while(getline(in, buffer)){
		cout << buffer << "\n"; //reading line by line and send to monitor
	}
}