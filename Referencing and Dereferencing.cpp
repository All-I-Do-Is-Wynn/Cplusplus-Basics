#include <iostream>
#include <cstring>
using namespace std;
//Referencing and Dereferencing

int main(){

 	int x = 5;
 	//x now equals 5
 	
	int *y = &x;
	//y = address of x; *y = value at the address of x => 5
	
	int	z = *y;
	//z = value at the address of x => 5
	
	//int g = &x;
	//This^ will not work
	//Its like saying int g = the address of x
	
	cout << y << endl;
	cout << *y << endl;
	
	*y = 7;
	//*y = value at the address of x => changes it to 7
	
	cout << z << endl;
	//z = 7
	
	//cout << *z << endl;
	//This^ will not work
	//Its like saying whats the value at the address 7
	return 0;
}
