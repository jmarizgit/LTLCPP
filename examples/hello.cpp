//pre-processor directive
#include <iostream>

//start of program
int main(){
	//tell compile what namespace to search
	//using namespace std;

	//more restrictive example of namespace
	//only hides std from "cout" and "endl", not other methods
	using std::cout;
	using std::endl;

	//prints message to console
	//std::cout << "Hello world!" << std::endl;
	/*new example without std::*/
	cout << "Hello world!" << endl;

	return 0;
}//main()
