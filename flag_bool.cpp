#include <iostream>
using namespace std;
int main(){    
    bool b = true;
    cout << b << endl;
    cout.setf(ios::boolalpha);
    cout << b << endl; //true
    cout << (!b) << endl; //false
    return 0;
}
