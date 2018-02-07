#include <iostream>
#include <cstring>
using namespace std;
//Friend Functions



class Character{   //Base Class
	private:        
		int money;
	protected:
		int protectedv;
	public:
		Character();
		char outfit();

	//FriendFunction(BaseClass &FriendObject)
	friend void CharacterFr(Character &ob);
};


int main(){
	
	Character object;       //Created object for the class
	CharacterFr(object);  //FriendName(object)
	
	return 0;
}

//Using the friendship to use and change the value of protectedv
void CharacterFr(Character &ob){
	//FriendObject.ClassVariable
	ob.money = 22; 
	//Print new value
	cout << "New money value is: " << ob.money << endl;
}


Character::Character(){}








