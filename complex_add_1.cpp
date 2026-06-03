/* 
Complex number addition - using member fucntion - method 1
*/

#include<iostream>
using namespace std;

class Complex
{
	int x;
	float y;
	
	public:
		void set(int X,float Y);
		void display();
		Complex sum(Complex);  // return type is complex with arguments of type of complex
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

Complex Complex::sum(Complex OBJ2)
{
	Complex OBJ3;
	
	OBJ3.x = x + OBJ2.x;
	OBJ3.y = y + OBJ2.y;
	
	return OBJ3;
}


int main()
{
	Complex obj1;
	
	obj1.set(10, 1.2);
	obj1.display();
	
	Complex obj2;
	
	obj2.set(20,2.2);
	obj2.display();
	
	Complex obj3;
	
	obj3 = obj1.sum(obj2);
	
	obj3.display();
	
	return 0;
}









