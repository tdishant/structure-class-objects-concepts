//Friend function part - 3. Overloading of binary operator as a friend function.

#include <iostream>

using namespace std;

class Complex{

	private:
	
		int a, b;
		
	public:
	
		void setData(int x, int y){
		
			a = x;
			b = y;

		}
		
		void showData(){
		
			cout << a << " + " << b << "i" << endl;
		}
		
		friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex c1, Complex c2){
		
	Complex temp;
	
	temp.a = c1.a + c2.a;
	temp.b = c1.b + c2.b;
	
	return temp;
}

int main(){

	Complex c1, c2, c3;
	
	c1.setData(3, 4);
	c2.setData(5, 6);
	
	c1.showData();
	c2.showData();
	
	c3 = c1+c2;//c3 = c1.operator+(c2); now since friend function has no caller objects, the function definition will change. It will now become 'c3 = operator+(c1, c2);'
	
	c3.showData();
}
