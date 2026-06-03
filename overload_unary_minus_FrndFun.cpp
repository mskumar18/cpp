/*
Overloading unary minus "-" using friend function
*/

#include <iostream>
using namespace std;

class Abc
{
	int a,b,c;
	
	public:
		Abc(){}
		
		Abc(int A, int B, int C)
		{
			a = A;
			b = B;
			c = C;
		}
		friend void operator -(Abc &);  // frnd fun to overload unary
		void display();
	
};

void Abc::display()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
}

void operator -(Abc &OBJ)  //  frnd fun to overload the unary
{
	OBJ.a = -OBJ.a;
	OBJ.b = -OBJ.b;
	OBJ.c = -OBJ.c;
	
}

int main()
{
	Abc Obj1(2,3,-4);
	Obj1.display();
	
	-Obj1;     // frnd fun can be called directly ( object not needed )
	Obj1.display();
	
	return 0;
	
}