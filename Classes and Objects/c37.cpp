//Pure Virtual Function.

#include <iostream>

class Person{

	public:
	
		//void fun();//function declaration. can be defined outside class body using membership label 'void Person::fun(){...}'
		virtual void fun() = 0;//Do nothing function. Since this funtion does nothing, the compiler wont allow to create an object of type Person
		//So that we cannot call the 'fun()'
		
		//there is one onother way in which 'fun()' can be called. Through early binding. By creating an object of child class
		//and a pointer pointing to this object of parent class, we can utilise early binding to call 'fun()' of parent class.
		//To avoid early binding and implement late binding 'fun()' has to be a virtual function.
		
		//Now 'fun()' is called pure virtual function.
		// Any class that has even a single pure virtual function. Then it is called abstract class.
		//We cannot create objects of abstract class 
};

class Student : public Person{

	//If a child class inherits a parent class such that a function definition of a method is not avalable in parent class, then
	//The child class must override that function
};

using namespace std;

int main(){

	
}
