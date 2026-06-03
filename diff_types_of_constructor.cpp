/*
Example demonstrates types of constructors

Default constructor
Parameterized constructor
Copy constructor

*/

#include<iostream>
using namespace std;


class Abc
{
	int a;
	float b;
	
	public:
		Abc()  // default constructor
		{
			a = 2;
			b = 3.3;
			cout<<"default constructor invoked"<<endl;
		}
		Abc(int X, float Y);    // parameterized constructor declared
		Abc(Abc &);    // copy constructor declared
		void display();  // mem function
};

Abc::Abc(int X,float Y)    // constructor doesn't have return type
{
	a = X;
	b = Y;
	cout<<"parameterized constructor invoked"<<endl;
}

Abc::Abc(Abc &OBJ)   // constructor doesn't have return type
{
	a = OBJ.a;
	b = OBJ.b;
	cout<<"copy constructor invoked"<<endl;
	
}

void Abc::display()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}

int main()
{
	
	Abc obj1;   // default constructor is invoked
	obj1.display();
	
	Abc obj2(5,8.9);   // passing the values to parameterized constructor
	obj2.display();
	
	Abc obj3(obj1);   // copying the obj1 to copy constructor
	obj3.display();
	
	return 0;
	
}










