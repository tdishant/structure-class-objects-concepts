//Compiler Created Copy Constructor

#include <iostream>

using namespace std;

class Complex{

	private:
	
		int a, b;
		
	public:
	
		Complex(int x, int y){
		
			a = x;
			b = y;
		}
		
		void show_data(){
		
			cout << a << " + " << b << "i" << endl;
		}
};

int main(){

	Complex c1(3, 4);
	Complex c2(c1);//Copy Constructor is automatically created by the compiler
	
	c1.show_data();
	c2.show_data();
}
