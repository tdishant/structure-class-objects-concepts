// Defining member function outside the class

#include <iostream>

using namespace std;

class Complex{

	private:
		
		int a, b;
		
	public:
	
		void set_data(int, int);//Function should be declared inside the class
	
		void show_data(){
		
			cout << a << " + " << b << "i" << endl;
		}
};


// "Complex::" is known as membership label
// " :: " is known as scope resolution

void Complex::set_data(int x, int y){//Function can then be defined outside the class
		
	a = x;
	b = y;
}

int main(){
	
	//class Object
	Complex c1;
	
	c1.set_data(5, 3);
	c1.show_data();
	
}
