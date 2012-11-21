Learn To Love C++
===================
Is not required, but you may want to read "**Learn To Love C**" before read this material. You can find the C guide at [http://github.com/jmarizgit/LTLC](http://github.com/jmarizgit/LTLC).

This is an online reference for C++. Written and maintaned by [Mariz Melo](http://github.com/jmarizgit).<br>
You can find this documentation and the source files used here on the [github](http://github.com) repository at [http://github.com/jmarizgit/LTLCPP](http://github.com/jmarizgit/LTLCPP).


Table of contents
-----------------
1. [Pre-Requisites](#prerequisites)
2. [Wikipedia](#wikipedia)


1. Pre-Requesites <a id="#prerequesites"></a>
-----------------
Before we get start make sure to meet the requirements:


1. A **web browser** ([chrome](http://www.google.com/chrome), [firefox](http://www.mozilla.org/), or [safari](http://support.apple.com/downloads/#safari));
2. Familiarity with at least one **programing language** is recommended;
3. An **C++ compiler**. You can compile and run all source code using [http://compilr.com](http://compilr.com).


2. Wikipedia <a id="#wikipedia"></a>
------------
_C++ (pronounced "see plus plus") is a statically typed, free-form, multi-paradigm, compiled, general-purpose programming language. It is regarded as an intermediate-level language, as it comprises a combination of both high-level and low-level language features.[3] Developed by Bjarne Stroustrup starting in 1979 at Bell Labs, it adds object oriented features, such as classes, and other enhancements to the C programming language. Originally named C with Classes, the language was renamed C++ in 1983, as a pun involving the increment operator._

**link:** [http://en.wikipedia.org/wiki/C%2B%2B](http://en.wikipedia.org/wiki/C%2B%2B)


3. Introduction <a id="#introduction"></a>
------------
Here is how you write a simple **hello world** program in c++:

###hello.cpp

```cpp
//Standard Libraries
#include <iostream> //input/output library

//main is an obrigatory function for c++ programs
int main()
{
	std::cout << "Hello World!"; //using insertion operator (<<) to output message
	return 0; // 0 = successfully exit
}
```

The "**#include**" on top of our program says that the compiler should look for the standard library <iostream> and include its content before proceed with the program compilation. This process is called "**Preprocessor Directives**".<br/>
The **iostream** library provides input and output functions to your program.<br/>
All programs in C/C++ must have one **unique** function called **main()**. This function is the start point of your program.

###comments

```cpp
// this is a single line comment

/* now I can comment using
   multiple lines.
*/
```
The " **//** " character is used at the beginning of the line and indicates a single line comment. The structure **/* comments */** allows you to write comments using multiple lines.

###datatypes.cpp

```cpp
#include <iostream>

int main(){
	char character;	//1byte	signed: -128 to 127, unsigned: 0 to 255
	short shortint; //2bytes	signed: -32768 to 32767, unsigned: 0 to 65535
	int integer;	//4bytes	signed: -2147483648 to 2147483647, unsigned: 0 to 4294967295
	long longint; //4bytes	signed: -2147483648 to 2147483647, unsigned: 0 to 4294967295
	double longdouble; //8bytes	+/- 1.7e +/- 308 (~15 digits)
	bool truefalse; //1byte	true or false
	return 0;
}
```

###namespaces.cpp

```cpp
#include <iostream>

//example of namespace
namespace mariz{
	int age = 31;
}
namespace samira{
	int age = 25;
}

int main(){
	//accessing namespace variables using the scope operator "::"
	std::cout << mariz::age << endl;
	std::cout << samira::age << endl;
	return 0;
}
```

Namespaces are used to create "shortcuts" for objects, classes, and functions. The **scope operator** "::" grants you access to object variables and methods.


###namespace_std.cpp

```cpp
#include <iostream>
using namespace std; //"using" makes the namespace "std" available for the entire program

int main(){
	//std::cout << "Hello World!"; //without "using" namespace "std"
	cout << "Hello World!"; //we don't need the scope operator "::" because we are "using" namespace "std" globally
	return 0;
}
```

Since input and output operations are very common in c++ programs is a good idea to have this namespace declaration in your programs. In fact I will be using this declaration for now on.


###functions.cpp
```cpp
#include <iostream>
using namespace std;

//declaring a function
void hello(){
	printf("Hello World!");
}

int main(){
	hello(); //calling our function
	return 0;	
}
```
In our function below we are printing the string "Hello world!" to the default output.
```cpp
void hello(){
	printf("Hello World!");
}
```
Here is how you **call** your function:
```cpp
hello();
```

###functions_parameters.cpp

```cpp
#include <iostream>
using namespace std;

void hello(char message[]){
    printf("%s", message);
}

int main(){
    char msg[40] = "Hello World!"; //array of characters (chars)
    hello(msg); //sending message using parameters
    return 0;
}
```
Parameters (or arguments) is how you can pass information to your functions. In our example above we send the "Hello world!" string using parameters.


###functions_prototypes.cpp
```cpp
#include <iostream>
using namespace std;

//prototypes
void hello(char message[]);

int main(){
    char msg[40] = "Hello World!"; //array of characters (chars)
    hello(msg); //sending message using parameters
    return 0;
}

void hello(char message[]){
    printf("%s", message);
}
```

Note that we put the instruction "void hello(char message[]);" on top of our program. On the other hand our function is declared after our "main()" function. Declaring prototypes on top of our program will make the compiler "awere" of the function existence. Is a good way to **organize your code**. Programers just need to check on top of your program to see which functions can be used.


OOP (Object Oriented Programing)
--------------------------------
C++ implements OOP features. Let's start with the concept of **classes**.

###class.cpp

```cpp
#include <iostream>
using namespace std;

//Your first class declaration
class Person{
    string name;
    int age;
}; //don't forget the semicolon when ending your class

int main(){
    Person mariz; //creating an "instance" of Person
    return 0;
}
```

Classes are a way to group certain characteristics and behaviors of an object. With classes is easier for you to organize and upgrade your code.

**ATTENTION**: you must end the curl brackets with a semicolon (;) when declaring a class, otherwise you will get an error.


###access_specifiers.cpp

```cpp
#include <iostream>
using namespace std;

class Person{
	private: // ** optional ** all methods and attributes are private by default in c++
		string email;
		int age;
	public: // will be accessible by the entire program
		string name;
		string language;
	protected: //will be accessible by inherited classes
		float height;
		char size;
};

int main(){
    Person mariz;	//created an "instance" of Person
    return 0;
}
```

**Private** is the default access specifier in C++. Methods and attributes can only be accessed whithin the class.<br/>
**Public** attributes and methods can be accessed for the entire program.<br/>
**Protected** attributes and methods will act like private but can be accessed by inherited classes.
