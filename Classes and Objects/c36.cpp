//Virtual Functions.

//How to achieve late binding ?? By making the function virtual

#include <iostream>

using namespace std;

class A{

	public:
	
		virtual void f1(){//late binding
		
			cout << "Method of class A..." << endl;
		}
};

class B : public A{

	public:
	
		void f1(){//Even though we have not written 'virtual' keyword for 'f1()' of class B, it is considered as virtual.
		
			cout << "Method of class B..." << endl;
		}
};

int main(){

	A *p, o1;
	B o2;

	p = &o2;
	
	p->f1();// Now this works correctly as the compiler binds at the runtime.
	//At the runtime, the content of the pointer 'p' is known hence the compiler now calls the 'f1()' function of class B
	//because the pointer 'p' points to 'o2' which is of the type 'B'.
}


