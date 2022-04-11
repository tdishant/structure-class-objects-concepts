//Diamond problem & solution
#include <iostream>

using namespace std;

class Animal{

	public:
	
		Animal(){
		
			cout << "Constructor of Animal" << endl;
		}
	
		int age;
		
		void walk(){
		
			cout << "Animal Walks..." << endl;
		}
};

class Tiger : virtual public Animal{//Diamond problem is solved using virtual inheritance

	public:
	
		Tiger(){
			
				cout << "Constructor of Tiger" << endl;
			}
};

class Lion : virtual public Animal{

	public:
	
		Lion(){
		
			cout << "Constructor of Lion" << endl;
		}
};

class Liger : public Lion, public Tiger{

	public:
	
		Liger(){
		
			cout << "Constructor of Liger" << endl;
		}
};

int main(){

	Liger l1;
	
	l1.walk();
}
