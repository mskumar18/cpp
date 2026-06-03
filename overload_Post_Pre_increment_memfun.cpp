/*
Overload post and pre increment
*/

#include <iostream>
using namespace std;

class Abc
{
	int a, b, c;
	public:
		Abc(){
		}
		
		Abc(int A, int B, int C)
		{
			a = A;
			b = B;
			c = C;
	
		}
		void display();
		void operator ++();  // pre increment
		void operator ++(int);  // post increment - to let compiler understand tht its post increment, we use dummy argument of type int
};

void Abc::display()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
}

void Abc::operator ++()
{
	++a;
	++b;
	++c;
}

void Abc::operator ++(int x)  // x is dummy argument
{
	a++;
	b++;
	c++;
	
}

int main()
{
	Abc Obj1(2,3,4);
	Obj1.display();
	
	++Obj1;
	Obj1.display();
	
	Abc Obj2(11,12,13);
	Obj2.display();
	
	Obj2++;
	Obj2.display();
	
	return 0;
	
}