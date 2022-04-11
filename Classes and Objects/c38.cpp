//Diamond problem

#include <iostream>

using namespace std;

class A{// This class contains a single variable = 'a' 

	public:
	
		int a;
};

class B1: public A{//This class contains two variable = 'a', 'b1'

	public:
	
		int b1;
};

class B2: public A{//This class contains two variable = 'a', 'b2'

	public:
	
		int b2;
};

class C: public B1, public B2{//This class contains 5 variables = 'a', 'b1'(by inheriting the class B1), 'a', 'b2'(by inheriting the class B1) and 'c'

	public:
	
		int c;
}; 

int main(){
	
	C obj;//5
	
	cout << "Size of obj = " << sizeof(obj) << endl;
	
	//obj.a = 5;
	//cout << obj.a << endl; This line gives error because there are 2 "a's" so compiler doesnot not in which 'a' the value is to be assigned
	
	//This is the diamond problem: a variable appears twice but we cannot access even a single copy due to ambiguity. 
}
