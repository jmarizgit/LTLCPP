#include <iostream>
using namespace std;
int main(){    
    float y = 23.1415;
    cout.precision(1);
    cout << y << endl; //2e+01
    cout.precision(2);
    cout << y << endl; //23
    cout.precision(3);
    cout << y << endl; //23.1
    return 0;
}
