//When you should use method overriding

#include <iostream>

using namespace std;

class Car{

	public:
	
		void shiftGear(){
		
			cout << "Normal Car gear change..." << endl;
		}	
};

class SportsCar: public Car{

	public:
	
		/*void changeGear(){
		
			cout << "Sports Car gear change..." << endl;
		}*/
		
		void shiftGear(){
		
			cout << "Sports Car gear change..." << endl;
		}
};

int main(){

	SportsCar obj;
	
	obj.shiftGear();
	//obj.changeGear();//Obj can access both the methods but it should have only one way of changing gear and not two.
	//Thus we need method overriding
	
}
