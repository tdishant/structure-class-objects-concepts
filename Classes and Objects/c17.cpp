//Friend function part - 1

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
		
		void fun();
		
		friend void fun1(Complex);//friend functions are only declared inside the class and defined outside the class
};

void Complex::fun(){

	cout << "fun() is also a member function" << endl;
}

void fun1(Complex c){//this is the declaration of the friend function. It is defined without membership label " Complex:: "

	cout << "The sum is : " << c.a + c.b << endl;//friend function can access the private members (a, b) not directly but by using an object	
}

int main(){

	Complex c1;
	
	c1.setData(3, 5);
	c1.showData();
	
	fun1(c1);//friend function is called without any object
}
