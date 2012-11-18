#include <iostream>
#include <iomanip>
using namespace std;
int main(){    
    char ch;
    cin >> ch; 
    cin.get(ch);
    while(cin.get() != '\n');
    cout << ch << endl;
    return 0;
}
