//A pointer of type base class can point to an object of its class as well as its derived class but the converse is not true.

#include <iostream>

using namespace std;

class A{


};

class B : public A{


};

int main(){

	A *p, o1;
	B o2;
	
	p = &o1;
	p = &o2;
}
