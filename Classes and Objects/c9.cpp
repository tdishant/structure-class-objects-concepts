//Parameterized Constructors

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
		
			cout << a <<" + " << b << "i" << endl;
		}
};

int main(){

	Complex c1(2, 10);
	
	c1.show_data();
}

