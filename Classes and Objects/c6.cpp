//Static member function

#include <iostream>

using namespace std;

class Account{

	private:
	
		int balance;
		static float roi;
		
	public:
	
		void setBalance(int b){
		
			balance = b;
		}
		
		static void setROI(float r){//static member function. These functions can only access static members and can be called without objects.
		
			roi = r;
		}
};

float Account::roi = 3.5; 

int main(){

	Account a1, a2;
	
	Account::setROI(4.8);//Calling static member function without object.
}
