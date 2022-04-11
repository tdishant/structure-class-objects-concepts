//Constructor in inheritance. The order of execution of the constructor is from parent to child but the order of calling the constructor is from child to parent.

#include <iostream>

using namespace std;

class A{

	public:
	
		A(){
		
			cout << "Inside the defualt constructor of class A..." << endl;
		}// Defualt constructor of parent class is created
};

class B : public A{//Constructor of child class also calls the constructor of parent class

	public:
	
		B():A(){//Default constructor of child class is created and default constructor of parent class is invoked. First the 'B()' will call 'A()' then it will execute its own body.
		
			cout << "Inside the default constructor of class B..." << endl;
		}
};

int main(){

	B obj;
}
