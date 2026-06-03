#include<iostream>
using namespace std;

class Complex
{
	int x;
	float y;
	public:
		Complex(){}  // default constructor
		
		Complex(int A, float B)
		{
			x = A;
			y = B;
		}
		void display();
		friend void operator +(Complex, Complex);
};

void Complex::display()
{
	cout<<x<<"+i"<<y<<endl;
}

void operator +(Complex OBJ1, Complex OBJ2)
{
	x = OBJ1.x + OBJ2.x;
	y = OBJ1.y + OBJ2.y;
	
}

int main()
{
	Complex Obj1(10,2.3);
	Obj1.display();
	
	Complex Obj2(20,4.1);
	Obj2.display();
	
	Complex Obj3;
	
	+(Obj1,Obj2);
	Obj3.display();
	
	return 0;
	
}