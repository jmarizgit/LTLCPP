#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){    
    ifstream infile;
    infile.open("file.txt");
// check if file is open
    if(!infile){
        cout << "Unable to open file" << endl;
    }else{
        infile.close(); //closing file
    } 
  
    ofstream out("file.txt",ios::out);
    return 0;
}
