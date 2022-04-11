// Visualizing the size of the declared variable book

//The sizeof for a struct is not always equal to the sum of sizeof of each individual member. 
//This is because of the padding added by the compiler to avoid alignment issues.
#include <iostream>

using namespace std;

struct book{
	
	int bookid;
	char title[20];
	float price;
};

int main(){
	
	char arr[20];
	
	cout << "Size of int : " << sizeof(int) << endl;
	
	cout << "Size of float : " << sizeof(float) << endl;
	
	cout << "Size of char : " << sizeof(char) << endl;
	
	cout << sizeof(book);
}
