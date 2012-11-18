#include <iostream>
#include <string>
using namespace std;

class Pet{
public:
	string name;
};

class Dog : public Pet{
public:
	string breed;
};

int main(char argv[]){

	Pet *pet;
	Dog *dog;
	dog = new Dog;
	dog->name = "bobby";
	dog->breed = "husky";
	pet = dog;

	cout << ((Dog *)pet)->breed << endl;

	return 0;
}