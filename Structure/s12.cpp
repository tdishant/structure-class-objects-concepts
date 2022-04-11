//Function returning a structure and function taking structure as argument

#include <iostream>

using namespace std;

struct book{

	int bookid;
	char title[20];
	float price;
};

void display(book b){
	
	cout << b.bookid << " " << b.title << " " << b.price;	
}

book takeInput(){

	book b1;
	
	cout << "Enter the bookid, title and price of the book : " << endl;
	cin >> b1.bookid >> b1.title >> b1.price;
	
	return b1;
}

int main(){

	book b2 = takeInput();
	
	display(b2);
}
