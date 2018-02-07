#include <iostream>
#include <cstring>
using namespace std;
//Pointer to base


class Polygon{
	private:
		int money;
	protected:
		int width,height;
	public:
		void setValues(int a,int b){
			width = a; height = b;
		}
  		void attack(){}

};


class Rectangle : public Polygon{
	public:
		int area(){
			return (width *height);
		}
		void attack(){
			cout << "Ninja Attack!" << endl;
		}
};


int main(){
	
	Rectangle rect;
	Polygon *newpoly = &rect;
	newpoly -> setValues(4,5);
	cout << rect.area();
	return 0;
}
