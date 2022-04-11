//Constructors

#include <iostream>

using namespace std;

class Complex{

	private:
	
		int a, b;
		
	public:
	
		Complex(){//Implicitly called when object is created
		
			cout << "Inside constructor" << endl;
		}
};

int main(){
	
	cout << "Creating Objects" << endl;
	
	Complex a1, a2, a3;
}
