//Storing the values of one struct variable into another struct variable

#include <iostream>

using namespace std;

struct book{
	
	int bookid;
	char title[20];
	float price;
};

int main(){

	book b1 = {100, "My C++ Book", 450.5};
	
	book b2 = b1;
	
	cout << b2.bookid << " " << b2.title << " " << b2.price;
}
