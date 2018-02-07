#include <iostream>
#include <cstring>
using namespace std;
//Overloading



class Character{     //Base Class
	private:
		int money;
	protected:
		int protectedv;
	public:
		char outfit();
		int num;
		Character();
		Character(int);
		
		//Overloading the operator +
		Character operator+ (Character);
};




int main(){
	
	Character a(34);    //Making object a
	Character b(21);    //Making object b
	Character c;
	
	c = a+b;    //C is a new object
	
	cout << c.num << endl;
	
	return 0;
}




//Constructors
Character::Character(){}

//Whenever passing an int this Constructor is used
Character::Character(int a){ 
		num = a;
}



//Object Class::function(parameter)
Character Character::operator+(Character num3){
	Character BrandNew;
	BrandNew.num = num + num3.num;
	return (BrandNew);
}




