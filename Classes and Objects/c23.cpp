//Inheritance part - 1

#include <iostream>

using namespace std;

class A{

	private:
	
		int a;
		
	protected:
	
		void setValue(int x){
		
			a = x;
		}
		
		void showData(){
		
			cout << "a = " << a << endl;
		}
};

class B : public A{

	public:
	
		void setData(int x){
		
			setValue(x);
		}
		
		void show(){
		
			showData();
		}
};

int main(){

	B obj;
	
	obj.setData(5);
	obj.show();
}
