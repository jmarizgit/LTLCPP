#include <iostream>
#include <iomanip>
using namespace std;
int main(){    
    int x = 42;
    cout << oct << x << endl;
    cout << dec << x << endl;
    cout << hex << x << endl;

    //one arg manipulares
    cout << setw(10) << setfill('*') << dec << x << endl;
    return 0;
}
