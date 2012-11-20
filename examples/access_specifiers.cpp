#include <iostream>
using namespace std;

class Person{
	private: // ** optional ** all methods and attributes are private by default in c++
		string email;
		int age;
	public: // will be accessible by the entire program
		string name;
		string language;
	protected: //will be accessible by inherited classes
		float height;
		char size;
};

int main(){
    Person mariz;	//created an "instance" of Person
    return 0;
}