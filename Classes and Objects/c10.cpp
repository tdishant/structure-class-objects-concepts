//Function overloading: Functions with same name having different arguments

#include <iostream>

using namespace std;

class Complex{

	private:
	
		int a, b;
		
	public:
	
		Complex(int x, int y){//When parameterized constructors are created, default constructor cannot be directly invoked. Thus if there is any object that needs to be created without passing any parameters for example "Complex c3", here we will have to explicitly create a default constructor without any arguments otherwise it will throw an error
		
			a = x;
			b = y;
		}
		
		Complex(float x, float y){
		
			a = (int)x;
			b = (int)y;
		}
		
		Complex(int x){//Constructor Overloading // Parameterized Constructor
		
			a = x;
		}
		
		Complex(){//Default Constructor
		
		
		}
		
		void show_data(){
		
			cout << a << " + " << b << "i" << endl;
		}
};

int main(){

	Complex a1(3, 3), a2(5)//a3 = 5;//a3;
	Complex a4 = Complex(4, 9);
	
	a1.show_data();
	a2.show_data();
	a4.show_data();

}

