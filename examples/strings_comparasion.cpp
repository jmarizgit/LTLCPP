#include <iostream>
using namespace std;

int main(){
		//REMEMBER: C/C++ are case sensitive
    string s1 = "Hello";
    string s2 = "hello";
    string s3 = "Hello";

    if ( s1.compare(s2) == 0 ){ // 0 indicates "equal"
    	cout << "s1 is EQUAL to s2" << endl;	//comparing s1 and s2
    }else{
    	cout << "s1 is NOT EQUAL to s2" <<endl;
    }

    if( s1.compare(s3) == 0 ){ //comparing s1 and s3
    		cout << "s1 is EQUAL to s3" << endl;
    }else{
    	cout << "s1 is NOT EQUAL to s3" << endl;
    }
	return 0;
}