//Friend function part - 4. Overloading of unary operator as a friend function 

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
		
			cout << "a = " << a << ", b = " << b << endl;
		}
		
		friend Complex operator-(Complex);
};

Complex operator-(Complex c){

	Complex temp;
	
	temp.a = -c.a;
	temp.b = -c.b;
	
	return temp;
}

int main(){

	Complex c1, c2;
	
	c1.setData(3, 4);
	c1.showData();
	
	c2 = -c1;//c2 = c1.operator-(); Now, since t is a friend function, the definition will change. Now, it will become 'c2 = operator-(c1)'.
	
	c2.showData();
}
