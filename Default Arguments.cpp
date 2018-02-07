#include <iostream>
using namespace std;
//Default Arguments

//Calculate the volume of a box

void boxVolume(int length= 2,int height =2,int width =3){
	int vol= length*width*height;
	cout << vol;
}


int main(){
	
	boxVolume();

return 0;
}



