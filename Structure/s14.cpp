//Suppose we want to add a constraint that the book id cannot be negative then we need to add a check condition in the input() method
//of the struct. But if the user instead of using the input() method, directly assigns the bookid using b.bookid, then it will
//still be negative

#include <iostream>

using namespace std;

struct book{

	int bookid;
	char title[20];
	float price;
	
	void input(){
	
		cout << "Enter the bookid, title and price of the book" << endl;
		cin >> bookid >> title >> price;
		
		if(bookid < 0){
		
			bookid = -bookid;
		}
	}
	
	void display(){
	
		cout << bookid << " " << title << " " << price << endl; 
	}	
};

int main(){

	book b1, b2;
	
	b1.input();
	b1.display();
	
	b2.bookid = -100;
	
	cout << b2.bookid;
}
