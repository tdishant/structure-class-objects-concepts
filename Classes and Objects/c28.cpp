//Constructor in inheritance. If the parent and the child have parameterized constructor

#include <iostream>

using namespace std;

class A{

		int a;
	
	public:
	
		A(int k){
		
			a = k;	
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
		
		void show_B_data(){
		
			cout << "b = " << b << endl;
		}
};

int main(){

	B obj(2, 3);//suppose we want to initialize a = 2 and b = 3
	obj.show_A_data();
	obj.show_B_data();
}

