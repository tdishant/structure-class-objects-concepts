//Initialzation of struct variable after declaration

#include <iostream>

using namespace std;

struct book{
	
	int bookid;
	char title[20];
	float price;
};

int main(){

	book b1;
	
	b1.bookid = 101;
	//b1.title = "My Book on C++"; //This gives error
	strcpy(b1.title, "MY Book on C++");
	b1.price = 350.2;
}
