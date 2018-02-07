#include <iostream>
#include <cstring>
using namespace std;
//Classes

//Class
class player{   //Player is the class identifier
	protected:

	private:
		
	public:
		player();  //Constructor automatically opens when an object from the class is called
		~player();  //Destructor automatically opens when the object exits the program
		void health();
		void gun();
	
	
};





int main(){
	
   //Class Object
	player Player1;

	Player1.health(); //(Object).(Function_from_the_Class)();

	Player1.gun();
	
	cout << "Good luck soldier!" << endl;
	
	return 0;
}

player::player(){}  //Constructor

player::~player(){} //Destructor


//Health function
void player::health(){
	int z,n;
	cout << "Choose your class." << endl;
	cout << "\t1.) Marine\n\t2.) Scientist\n\t3.) Stealth\n\n";
	cin >> z;
	switch (z){
		case 1: {
			cout << "You get 150% health for the Marine Class.\n" << endl;
			break;}
		case 2: {
			cout << "You get 100% health for the Scientist Class.\n" << endl;
			break;}
		case 3: {
			cout << "You get 190% health for the Stealth Class.\n" << endl;
			break;}
		default: {
			cout << "To get your health and gun, you must choose between classes 1,2, or 3.\n";
		}
	}
}

//Gun function
void player::gun(){
	int z=1;
	int y;
	while(z){
	cout << "Enter your class number again, to recieve your weapon.\n";
	cin >> y;
	if(y == 1){
	cout << "\nYou get an AR for the Marine Class." <<endl;
	break;}
	else if(y == 2){
	cout << "\nYou get a shotgun for the Scientist Class." <<endl;
	break;}
	else if(y == 3){
	cout << "\nYou get an knife for the Stealth Class." <<endl;
	break;}
	else{
		cout << "That was not a class number, enter your class number.\n";
	}
}
}






























