//Static member variable

#include <iostream>

using namespace std;

class Account{

	private:
		
		int balance;//Instance member variable
		static float roi;//Static member variable/CLass variable
	
	public:
		
		void setBalance(int x){
		
			balance = x;
		}
		
		int getBalance(){
		
			return balance;
		}
		
		void setROI(float x){
		
			roi = x;
		}
		
		void printROI(){
		
			cout << roi << endl;
		}
		
};

//Defining Static member variable
float Account::roi = 3.5;//Memory is only assigned to 'roi' variable after it is defined and not after it is declared.

int main(){

	Account a1, a2;
	
	a1.setBalance(100);
	a2.setBalance(500);
	
	a1.setROI(4.5);
	
	cout << a1.getBalance() << " ";
	a1.printROI();
	
	cout << a2.getBalance() << " ";
	a2.printROI();
}
