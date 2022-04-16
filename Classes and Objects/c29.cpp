//Destructors in inheritance. Destructors are created to relese the memory of object's resources.


//The order of calling as well as order of execution is from child to parent.

//Since there are no arguments in destructors, even if we dont write destructor for class A or class B or both or if we donot 
//call the destructor of class A at the last line of ~B(), the compiler will automatically do it. 
#include <iostream>

using namespace std;

class A{

		int a;
	
	public:
	
		A(int k){
		
			a = k;	
		}
		
		~A(){
		
		
		}
		
		void show_A_data(){
		
			cout << "a = " << a << endl;
		}
};

class B : public A{

		int b;
	
	public:
	
		B(int x, int y):A(x){
		
			b = y;
		}
		
		~B(){
		

		}
		
		void show_B_data(){
		
			cout << "b = " << b << endl;
		}
};

int main(){

	B obj(2, 3);//suppose we want to initialize a = 2 and b = 3
	obj.show_A_data();
	obj.show_B_data();
}


