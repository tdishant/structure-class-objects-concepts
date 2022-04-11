//Default Constructors

#include <iostream>

using namespace std;

class Complex{

	private:
		
		int a, b;
	
	public:
		
		Complex(){
		
			a = 5;
			b = 3;
		}
		
		void show_data(){
		
			cout << a <<" + " << b << "i" << endl;
		}
};

int main(){

	Complex c1;
	
	c1.show_data();
}
