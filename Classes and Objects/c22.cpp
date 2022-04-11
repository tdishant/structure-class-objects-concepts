//Friend function part - 6. Member function of one class can become friend of another class

#include <iostream>

using namespace std;

class A{

	public:
	
		void fun(){
		
			cout << "Member function of class A" << endl;
		}
		
		void foo(){
		
		
		}
};

class B{

	public:
	
		friend class A;//all the functions of class A will now become friend function of class B
		// friend void A::fun();//Friend function of class B that is a member function of class A
		// friend void B::foo();
};

int main(){

	A obj;
	
	obj.fun();
}
