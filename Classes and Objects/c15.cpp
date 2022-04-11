//Unary Operator Overloading

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
		
		Complex operator- (){
		
			Complex temp;
			
			temp.a = -a;
			temp.b = -b;
			
			return temp;
		}
};

int main(){

	Complex c1, c2;
	
	c1.set_data(3, 4);
	c1.show_data();
	
	//c2 = c1.operator-();
	c2 = -c1;//c1 object is calling '-' operator whithout any arguments and returning a value to c2
	c2.show_data();
	
	
}
