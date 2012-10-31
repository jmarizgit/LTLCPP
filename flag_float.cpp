#include <iostream>
using namespace std;
int main(){    
    float y = 3.0;
    cout << y << endl; //outputs 3
    cout.setf(ios::showpoint);
    cout << y << endl;
    return 0;
}
