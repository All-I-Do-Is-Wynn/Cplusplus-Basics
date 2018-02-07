#include <iostream>
#include <cstring>
using namespace std;
//Templates


//template <typename (variable)>




//template with 1 variable type
template <typename var>

//(variable) function(variable x, variable y)
var add(var x, var y){
	var z = x+y;
}



//template with 2 variable types
template <typename var2, typename var3>

var2 smaller(var2 a, var3 b){
	//if a is less than b return a, if not return b
	return (a<b?a:b);
}




//template with 2 variable types
template <typename var2, typename var3>

var3 bigger(var2 f, var3 g){
	return (f<g?g:f);
}
//var will become whatever datatype is given from variables in main




int main(){
	
	//similar variable template
	double x=5, y=7, z;     //Can change these to any similar datatype
	z = add(x,y);
	cout << z  << endl;
	
	int a = 78;
	double b = 67.9;
	cout << smaller(a,b) << endl;
	
	long f = 6.78;
	float g = 9.892;
	cout << bigger(f,g) << endl;
	
	return 0;
}
















