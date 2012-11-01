#include <iostream>
using namespace std;
int main(){    
int x;
int total = 0;
cin >> x;
while (!cin.eof()) 
{
   total += x;
   cin >> x;
}
cout << "Total is " << total << endl;    
return 0;
}
