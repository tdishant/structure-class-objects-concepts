//Static Local variables

#include <iostream>

using namespace std;

void fun(){
	
	static int x = 0;
	//Static local variable 
	//By Default initialized to zero
	//The lifetime of this variable is throughtout the program
	//Memory is allocated at the start of the program
	//Memory wont be destroyed untill the program is not finished
	
	int y = 0;
	//Gets memory only when the fun() is called
	//Memory will be destroyed as soon as the fun() completes its execution 
	
	cout << "x = " << ++x << ", y = " << ++y << endl;;
}

int main(){

	fun();
	fun();
}
