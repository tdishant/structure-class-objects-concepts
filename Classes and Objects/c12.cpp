//User Created Copy Constructor

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
		
		/*Complex(Complex c){ This is wrong as the formal argument "Complex c" will again call this copy constructor which will again call this copy constructor and we will be stuck in an infinite recursion  
		
			a = c.a;
			b = c.b; 
		}*/
		
		Complex(Complex &c){// "&c" is not an object but reference
		
			a = c.a;
			b = c.b;
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
