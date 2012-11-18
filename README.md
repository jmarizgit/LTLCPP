Learn To Love - C++
===================
This is a online reference for C++. Written and maintaned by [Mariz Melo](http://github.com/jmarizgit).<br>
You can find this document and the source files used here on the [github](http://github.com) repository at [http://github.com/jmarizgit/ltl.cpp](http://github.com/jmarizgit/ltl.cpp).

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


Introduction
------------
Here is how you write a simple **hello world** program in c++:

**hello.cpp**
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
Namespaces are used to create "shortcuts" for objects, classes, and functions.

**namespaces.cpp**
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




OOP - Object Oriented Programing
--------------------------------
C++ implements OOP features. Let's start with the concept of **classes**.

**class.cpp**
```cpp
#include <iostream>
using namespace std;

class Car{
	string brand, engine, type;
};

int main(){
    Car bmw;
    return 0;
}
```