#include <iostream>
#include <cstring>
using namespace std;
//Polymorphism



class Enemy{
	private:
		int money;
	protected:
		int attackPower;
	public:
		void setAttackPower(int);
};


class Ninja : public Enemy{
	public:
		void attack();
};


class Monster : public Enemy{
	public:
		void attack();
};

int main(){
	
	Ninja n;        //Created Ninja object
	Monster m;      //Created Monster object
	Enemy *enemy1 = &n;     //Gets ready to store an attack power
	Enemy *enemy2 = &m;
	enemy1->setAttackPower(34);
	enemy2->setAttackPower(97);

	/*The Enemy class doesnt have the attack function,
	  so it cant use it*/
	n.attack();     
	m.attack();     
	return 0;
}


	//Function for setting the attack power
void Enemy::setAttackPower(int a){
	attackPower = a;
}

	//Ninja attacks
void Ninja::attack(){
	cout << "I am a Ninja, Ninja chop -" << attackPower << endl;
}

	//Monster attacks
void Monster::attack(){
	cout << "Monster must eat you!!!! -" << attackPower << endl;
}










