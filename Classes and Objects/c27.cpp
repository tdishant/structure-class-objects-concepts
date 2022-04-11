//Constructor in inheritance. If the parent has parameterized constructor

#include <iostream>

using namespace std;

class A{

		int a;
	
	public:
	
		A(int k){//Now if we don't create a constructor in child class B, then the compiler will create a default constructor for class B and call the default constructor of class A. But the class A doesnot have any default constructor. 
		
			a = k;	
		}
};

class B : public A{//Constructor of child class also calls the constructor of parent class

	public:
	
		B():A(5){//Thus we will have to call appropriate constructor of parent class ourselves.
		
		
		}
};

int main(){

	B obj;
}
