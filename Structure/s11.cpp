//How to take user input for initializing the struct variable

#include <iostream>

using namespace std;

struct book{
	
	int bookid;
	char title[20];
	float price;
};

int main(){

	book b1;
	
	cout << "Enter the bookid, title and price of the book : " << endl;
	
	cin >> b1.bookid >> b1.title >> b1.price;
	
	cout << b1.bookid << " " << b1.title << " " << b1.price; 
}

