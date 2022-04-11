//Method overriding

#include <iostream>

using namespace std;

class A{

	public:
	
		void f1(){
		
			cout << "Function of class A..." << endl;
		}
		
		void f2(){
		
			cout << "Function of class A..." << endl;
		}
};

class B : public A{

	public:
	
		void f1(){//Method overriding. Both the functions in class A and B have same name as well as same arguments(exact same prototype)
		
			cout << "Function of class B..." << endl;
		}
		
		void f2(int x){//Method Hiding. Both the functions have same name but different arguments. 
		
			cout << "Function of class B..." << endl;
		}
};

int main(){

	B obj;
	
	//Early Binding: It is the duty of the compiler to decide wich 'f1()' will be executed. And the function that needs to be executed will be bound with this call. This is known as early binding.
	//Compiler first sees the type of 'obj' which is 'B'. So compiler will search for a function called 'f1()' in class B first.
	//If it exists then it will be bound with the call else it will look for 'f1()' in class A next.
	obj.f1();
	
	//obj.f2(); Will not work beacuse the compiler will first search for 'f2()' class B, where it finds it but argument is mismatched hence it will throw an error. If it finds 'f2()' in class B
	// Even if the arguments dont match, it will not go to class A for searching another 'f2()'
	obj.f2(5);
	//Method Hiding is NOT function overloading. If both 'f2()' and 'f2(int x)' are present in the same class then it will be called function overloading.
} 
