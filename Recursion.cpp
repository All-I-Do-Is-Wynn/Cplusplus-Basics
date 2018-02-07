#include <iostream>
#include <cstring>
using namespace std;
//Recursion


int makeTen();


int main(){
	
	int makeTen(1);
	
	return 0;
}


int makeTen(){
	int number;
	number +=number;
		while(number<10){
			makeTen();
		}
		cout << number << endl;
}









