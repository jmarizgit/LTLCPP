#include <iostream>
using namespace std;
int main(){  
    int anumber = 123;
    //pass by value
    int* pnumber = &anumber;
    //pass by reference
    int& rnumber = anumber;  
    cout << anumber << " by value\n" << *pnumber << " by pointer reference\n" << rnumber << " by c++ reference" <<  endl;
    cout << "anumber: " << &anumber << "\npnumber: " << &pnumber << "\nrnumber: " << &rnumber << endl;
    return 0;
}
