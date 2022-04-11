//This pointer in C++.

#include <iostream>

using namespace std;

class Box{

	private:	
	
		int l, b, h;
	
	public:
	
		void setDimensions(int l, int b, int h){
		
			this->l = l;//l = l; Name conflict
			this->b = b;//b = b; Here the l, b, h considered are of setDimension parameters and not of object variables.
			this->h = h;//h = h; Here this is pointing to caller object i.e 'smallBox'
		}
		
		void showDimensions(){
		
			cout << "l = " << l << ", b = " << b << ", h = " << h << endl;
		}
};

int main(){

	Box smallBox;
	
	smallBox.setDimensions(12, 10, 5);//When setDimesdion() is called, 'this' pointer will be allocated memory and it will store the address of caller onject(here - 'smallBox')
	smallBox.showDimensions();
}
