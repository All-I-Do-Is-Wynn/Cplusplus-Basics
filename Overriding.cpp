#include <iostream>
#include <cstring>
using namespace std;
//Overriding



class Person{    //Base Class
	
	public:
		Person();
		void introduce(){
			cout << "\nHi im a person.\n";
		}


};

class Student : public Person{
	
	public:
		Student();
		void introduce(){
			cout << "\nHi im a Student.\n";
		}
};

int main(){
	
	Student ob;
	ob.introduce();



	
	return 0;
	
}

Person::Person(){}
Student::Student(){}










