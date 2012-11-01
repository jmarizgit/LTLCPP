#include <iostream>
#include <iomanip>
using namespace std;
int main(){    
    char string[101];
    //ignores first white space
    //stop at first white space
    cin >> setw(100) >> string;
    cout << string << endl; 
    return 0;
}
