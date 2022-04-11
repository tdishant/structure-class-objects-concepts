//Diamond problem part-2

#include <iostream>

using namespace std;

class A{
	
	public:
	
		int a;
		
		void f1(){
		
			cout << "Member function of class A..." << endl;
		}
};

class B1: public A{
	
	public:
	
		void f2(){
		
			cout << "Member function of class B1..." << endl;
		}
		
		int b1;
};

class B2: public A{

	public:
	
		int b2;
		
		void f3(){
		
			cout << "Member function of class B2..." << endl;
		}
};

class C: public B1, public B2{

	public:
	
		int c;
		
		void f4(){
		
			cout << "Member function of class C..." << endl;
		}
}; 

int main(){
	
	C obj;
	
	cout << "Size of obj = " << sizeof(obj) << endl;
	
	//obj.f1();
	obj.f2();
	obj.f3();
	obj.f4();
	
}
