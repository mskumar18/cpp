/* 
Complex number addition - using member fucntion - method 2
*/

#include<iostream>
using namespace std;

class Complex
{
	int x;
	float y;
	
	public:
		void set(int X, float Y);
		void display();
		void sum(Complex,Complex);
		
};

void Complex::set(int X, float Y)
{
	x = X;
	y = Y;
	
}

void Complex::display()
{
	cout<<x<<"+i"<<y<<endl;	
}

void Complex::sum(Complex OBJ1, Complex OBJ2)
{
	Complex OBJ3;
	
	x = OBJ1.x + OBJ2.x;
	y = OBJ1.y + OBJ2.y;
	
	
}


int main()
{
	Complex obj1;
	
	obj1.set(10, 1.3);
	obj1.display();
	
	Complex obj2;
	
	obj2.set(20,2.2);
	obj2.display();
	
	Complex obj3;
	
	obj3.sum(obj1, obj2);
	obj3.display();
	
	
	return 0;
}







