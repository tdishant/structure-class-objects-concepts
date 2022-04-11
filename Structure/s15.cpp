//To overcome the previous problem C++ provides access specifiers in structure as well as classes 
//Access specifiers are of three types:
//	Public, private and protected 

#include <iostream>

using namespace std;

struct book{

	private:
	
		int bookid;
		char title[20];
		float price;
	
	public:
	
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
	
	//Now b1 can only be initialized using the input function
	b1.input();
	b1.display();
	
	//b2.bookid = -100;//Hence this line will now give error
	
}

