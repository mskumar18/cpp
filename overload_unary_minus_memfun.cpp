/*
Overloading unary "-" using member function
*/

#include<iostream>
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
		
		void display();  // mem fun
		void operator -();  // using mem fun to overload unary "-"				
};

void Abc::operator -()
{
	a = -a;
	b = -b;
	c = -c;
}

void Abc::display()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	
}

int main()
{
	Abc Obj1(11,-12,13);
	Obj1.display();
	
	Obj1.operator -();  // object is invoking the mem fun
	Obj1.display();
	
	-Obj1;   // another way of invoking the mem fun
	Obj1.display();
	
	return 0;
	
	
}


