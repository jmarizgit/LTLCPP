#include <iostream>

//example of namespace
namespace mariz{
	int age = 31;
}
namespace samira{
	int age = 25;
}

int main(){
	//accessing namespace variables using the scope operator "::"
	std::cout << mariz::age << endl;
	std::cout << samira::age << endl;
	return 0;
}