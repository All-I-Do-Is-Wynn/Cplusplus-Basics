#include <iostream>
#include <cstring>
using namespace std;
//Inheritance



class Character{    //Base Class
	private:        //Private cannot be inherited
		int money;
	protected:
		int protectedv;
	public:
		Character();
		char outfit();
	
	
};


class Soldier : public Character{    //Derived class, brings all public classes from Character class
	public:
		Soldier();
		void dosomething();
		//char outfit();
		//char gun();
	
};

int main(){
	
	Soldier man;
	man.dosomething();
	man.outfit();
	
	
	return 0;
}

//Inherits the function from the parent class
char Character::outfit(){
	cout << "\nYou inherited an outfit from the character class.\n";
}

//Inherits the variable "protectedv" and outputs it
void Soldier::dosomething(){ //
	protectedv = 9;
	cout << "\nInherited from the Base class: " << protectedv << endl;
}

//Constructors for the classes
Character::Character(){}
Soldier::Soldier(){}














