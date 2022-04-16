//Friend function part - 2. A function can be friends to multiple classes at once.

#include <iostream>

using namespace std;

class B;//forward declaration of class B

class A{

	private:
	
		int a;
		
	public:
		
		void setData(int x){
		
			a = x;
		
		}
		
		void showData(){
		
			cout << "a = " << a << endl;
		}
		
		friend void fun(A, B);// without forward declaration, this line will give error as the compiler doest not know what 'B' is. 
};

class B{

	private:
	
		int b;
		
	public:
		
		void setData(int x){
		
			b = x;
		
		}
		
		void showData(){
		
			cout << "b = " << b << endl;
		}
		
		friend void fun(A, B);
};

void fun(A o1, B o2){

	cout << "Sum is : " << o1.a + o2.b << endl;	
}

int main(){

	A obj1;
	B obj2;
	
	obj1.setData(3);
	obj2.setData(5);
	obj1.showData();
	obj2.showData();
	
	fun(obj1, obj2);
}
