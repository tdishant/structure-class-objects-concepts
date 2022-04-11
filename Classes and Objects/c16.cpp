//Overloading of unary increment (++) operator (Pre and Post)

#include <iostream>

using namespace std;

class Integer{

	private:
		
		int x;
		
	public:
	
		void set_data(int a){
		
			x = a;
		}
		
		void show_data(){
		
			cout << "x = " << x << endl;
		}
		
		Integer operator++(){//function for pre increment
		
			Integer i;
			
			i.x = ++x;
			
			return i;
		}
		
		Integer operator++(int){//function for post increment. Here "int" is passed as argument only so that the compiler can differentiate between then pre and post increment function. It has no other role as such.
		
			Integer i;
			
			i.x = x++;
			
			return i;
		}
		
};

int main(){

	Integer i1, i2, i3;
	
	i1.set_data(3);
	i1.show_data();	
	
	i2 = ++i1;// calls function with no argument
	i3 = i1++;// calls function with one argument
	
	i1.show_data();	
	i2.show_data();
	i3.show_data();
	
}
