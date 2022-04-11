//Functions as well as variables inside struct in C++

//In C language we cannot have functions inside struct only variables are allowed
//In C++ language we can have both variables as well as functions inside struct

#include <iostream>

using namespace std;

struct book{

	int bookid;
	char title[20];
	float price;
	
	void input(){//called member function
		//It can directly access any member of the structure without using '.' operator
		
		cout << "Enter bookid, title and price : " << endl;
		
		cin >> bookid >> title >> price;
	}
	
	void display(){
	
		cout << bookid << " " << title << " " << price;
	}
}; 


int main(){
	
	book b;
	
	b.input();
	b.display();
}
