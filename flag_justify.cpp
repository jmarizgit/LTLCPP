#include <iostream>
using namespace std;
int main(){    
    int x = 42;
    cout.setf(ios::showpos); //+ symbol in front of integers
    cout.fill('*');
    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
    cout << x << endl;
    return 0;
}
