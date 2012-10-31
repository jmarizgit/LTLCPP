#include <iostream>
using namespace std;
int main(){
    int x = 42;
    cout.setf(ios::showpos);
    cout << x << endl;    
    cout.unsetf(ios::showpos);
    cout << x << endl;
    return 0;
}
