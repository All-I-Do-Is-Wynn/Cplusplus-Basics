#include <iostream>
#include <cstring>
using namespace std;
//Scope

//Global Variables
int global = 100;
void yeet();

//Static Variables
int nonStatic();
void Static();



class test{
    private:
        static int count;
    public:
        int getCount();
        void make();
};

int test::count = 5;




int main(){
	
	test ob;
	int nonStatic();
	void Static();
	ob.getCount();
	yeet();
	cout << "\n\n10";
	return 0;
}

void test::make(){
            count++;
        }

int test::getCount(){
            return count;
        }







void yeet(){

	//Automatic Variables = used within a function, and terminated when program leaves
	int global= 20;
	
	int ans;
	ans = global + ::global;   //Use ::(variable) to call a global variable
	
	cout << ans;
}                  



int nonStatic(){
	int n = 0;
	cout << "The non static answer is: ";
	for(int i = 0; i<5 ; i++){

		cout << n << " \n";
	}
	cout << " \n";
	return n;
}

void Static(){
	cout << "The static answer is: ";
	for(int i = 0; i<5 ; i++){
		static int n = 0;
		n += n;
		cout << n << " ";
	}
	cout << " \n";
}

