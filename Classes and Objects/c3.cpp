//Program to add two complex numbers

#include <iostream>

using namespace std;

class Complex{

	private:
	
		int a, b;//These are instance member variables (i.e they are the variables of instances and only occupy space in the memory once an instance is created) and not class variable
		
	public:
	
		void set_data(int x, int y){//These are instance member functions and not class member function
		
			a = x;
			b = y;
		}
		
		void show_data(){
		
			cout << a << " + " << b << "i" << endl;
		}
		
		Complex add(Complex c){
			
			Complex temp;
			
			temp.a = a + c.a;
			temp.b = b + c.b;
		
			return temp;
		}
};

int main(){

	Complex c1, c2, c3;
	
	c1.set_data(3, 4);
	c1.show_data();
	
	c2.set_data(5, 6);
	c2.show_data();
	
	c3 = c1.add(c2);//c1 is the caller object
	c3.show_data(); 
}
