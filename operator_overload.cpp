#include <iostream>
using namespace std;

class Date{
private:
	int Day; 
	int Month;
	int Year;
public:
	Date(int InputDay, int InputMonth, int InputYear) : Day(InputDay), Month(InputMonth), Year(InputYear){};
	//unary increment operator 
	Date& operator ++ (){
		++Day;
		return *this;
	}
	//unary decrement operator
	Date& operator -- (){
		--Day;
		return *this;
	}
	Date& operator + (){
		Day += 3;
		return *this;
	}
	void DisplayDate(){
		cout << Day << "/" << Month << "/" << Year << endl;
	}
};

int main(){
	//instantiate and initialize a date object to Dec2011
	Date Holiday(25,12,2011);

	cout << "The date object is initialized to: ";
	Holiday.DisplayDate();

	//Applying the prefix-increment 
	++Holiday;

	cout << "Date after increment: ";
	Holiday.DisplayDate();

	--Holiday;
	--Holiday;

	cout << "Date after decrement: ";
	Holiday.DisplayDate();

	+Holiday;

	cout << "Date after operator: ";
	Holiday.DisplayDate();

	return 0;
}