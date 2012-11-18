#include <iostream>
#include <string.h>
using namespace std;

class Student{
    
    char* name;
    float gpa;

public:
	Student(){
		name = new char[100];
		strcpy(name,"none");
		gpa = 0.0;
	}  
	char* GetStudent(){
		return name;
	} 
	float GetGpa(){
		return gpa;
	}
	void SetStudent(char* sname){
		strcpy(name,sname);
	}
};


int main(){  

	Student student;
	Student& bstudent = student;

	//copy by value;
	//bstudent = student;

	char name[100] = "mariz";
	bstudent.SetStudent(name);

	cout << student.GetStudent() << " " << student.GetGpa() << endl;
    
    return 0;
}
