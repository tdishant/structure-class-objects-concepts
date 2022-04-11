//Comparing structure and class

#include <iostream>

using namespace std;

struct Complex{

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
};

class Complex_1{

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
};

int main(){

	//struct variable
	Complex c1;
	
	//class Object
	Complex_1 c2;
	
	c1.set_data(5, 3);
	c1.show_data();
	
	c2.set_data(2, 7);
	c2.show_data();
}
