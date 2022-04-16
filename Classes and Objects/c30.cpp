//This pointer in C++.

// '.' is used for object, '->' is used for pointer

#include <iostream>

using namespace std;

class Box{

	private:	
	
		int l, b, h;
	
	public:
	
		void setDimensions(int x, int y, int z){
		
			l = x;
			b = y;
			h = z; 
		}
		
		void showDimensions(){
		
			cout << "l = " << l << ", b = " << b << ", h = " << h << endl;
		}
};

int main(){

	Box *p, smallBox;
	
	p = &smallBox;
	
	(*p).setDimensions(1, 2, 3);//smallBox.setDimensions(12, 10, 5);
	p->showDimensions();//smallBox.showDimensions();
}
