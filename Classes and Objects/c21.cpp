//Friend function part - 5. Overloading of insertion and extraction operators

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
		
		friend ostream& operator<<(ostream&, Complex);
		friend istream& operator>>(istream&, Complex&);
};

ostream& operator<<(ostream &dout, Complex c){

	cout << "a = " << c.a << ", b = " << c.b << endl;
	
	return cout;
}

istream& operator>>(istream &din, Complex &c){

	cin >> c.a >> c.b;
	
	return din;
}

int main(){

	Complex c1;
	
	cout << "Enter a complex number : ";
	cin >> c1;//cin.operator>>(c1);For friend function the declaration will be 'operator>>(cin, c1)' 
	cout << "\nYou Entered : ";
	cout << c1;//operator<<(cout, c1);
}
