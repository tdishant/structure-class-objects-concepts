//Initialzation of struct variable upon declaration

#include <iostream>

using namespace std;

struct book{
	
	int bookid;
	char title[20];
	float price;
};

int main(){

	book b1 = {100, "My C++ Book", 450.5};
}
