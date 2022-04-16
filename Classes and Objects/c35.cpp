//Virtual Functions.

//Method overriding has some problems that are solved by virtual functions.

#include <iostream>

using namespace std;

class A{

	public:
	
		void f1(){
		
			cout << "Method of class A..." << endl;
		}
};

class B : public A{

	public:
	
		void f1(){//Method overriding
		
			cout << "Method of class B..." << endl;
		}
};

int main(){

	A *p, o1;
	B o2;

	p = &o2;
	
	//Here using early binding, compiler will check the type of the calling pointer i.e 'p' which is of the type 'A'
	//Hence will will check for 'f1()' in class A and if it finds it there it will bind it to the call.
	p->f1();//Now the method of class A will be invoked as opposed to method overriding
	
	//Thus this is a problem in method overriding.
	
	//The solution is stopping early binding. Beacuse of early binding, the compiler decides which function to run based
	//on the type of the caller pointer rather than the type of the object which is pointed to by the pointer.
	//Insted we need to use late binding i.e binding on runtime instead of compile time.
}

