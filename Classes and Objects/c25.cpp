//Example where we can use protected and private inheritance.

#include <iostream>

using namespace std;

class Array{

	private:
	
		int a[10];
		
	public:
	
		void insert(int index, int value){
		
			a[index] = value;
		}
};

class STACK : private Array//public Array

{

	int top;
	
	public:
	
		void push(int value){
		
			insert(top, value);
		}
};

int main(){

	STACK s1;
	
	s1.push(36);
	//s1.insert(2, 36);//This will also work if the inheritance is public which is wrong.  
}
