#include <iostream>
using namespace std;
int main(){    
    int x = 42;
    cout.width(5);
    cout.fill('*'); //fill spaces with '*'
    cout << x << endl;
    //just works for the following line of output
    cout << x << endl;
    return 0;
}
