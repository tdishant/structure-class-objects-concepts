//Destructors in C++

#include <iostream>

using namespace std;

class Complex{

	private:
	
		int a, b;
		
	public:
	
		~Complex(){
		
			cout << "Destructor is called hance the object will now be destroyed..." << endl;
		}
};

void fun(){

	Complex c1;
}

int main(){

	fun();
}
