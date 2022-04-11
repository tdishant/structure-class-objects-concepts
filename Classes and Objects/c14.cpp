//Operator Overloading in C++

#include <iostream>

using namespace std;

class Complex{

	private:
	
		int a, b;
		
	public:
	
		void set_data(int x, int y){
		
			a = x;
			b = y;
		}
		
		void show_data(){
		
			cout << a << " + " << b << "i" << endl;
		}
		
		/*Complex add(Complex c){
		
			Complex temp;
			
			temp.a = a + c.a;
			temp.b = b + c.b;
			
			return temp;
		}*/
		
		Complex operator +(Complex c){
		
			Complex temp;
			
			temp.a = a + c.a;
			temp.b = b + c.b;
			
			return temp;
		}
};

int main(){

	Complex c1, c2, c3;
	
	c1.set_data(3, 4);
	c2.set_data(5, 6);
	
	c1.show_data();
	c2.show_data();
	
	c3 = c1 + c2;// or c3 = c1.operator +(c2); //c1 object is calling '+' operator with c2 as argument and returning a value to c3
	// equivalent to c3 = c1.add(c2);
	
	c3.show_data();
}
