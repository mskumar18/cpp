/*
Program for communication between two classes using friend function

Here, adding 2 no's of two 2 different classes using friend function to demonstrate communication between classes 
*/

#include<iostream>
using namespace std;

class Xyz;  // forward declaration of class, inorder to let know class Abc, we have to declare class Xyz before Abc

class Abc   // this is the 1st class
{
	int a;
	
	public:
		void set_a(int A)
		{
			a = A;
		}
		void display_a();
		void friend sum(Abc,Xyz);     // sum() is a friend function
	
};

void Abc::display_a()
{
	cout<<"a ="<<a<<endl;
}


class Xyz    // this is the 2nd class, it is declared before Abc to let know Abc about Xyz class
{
	int x;
	
	public:
		void set_x(int X)
		{
			x = X;
		}
		void display_x();
		void friend sum(Abc,Xyz);    //  sum() is a friend function
		
};

void Xyz::display_x()
{
	cout<<"x="<<x<<endl;
}

void sum(Abc OBJA, Xyz OBJX)   // no classname and scope ar erequired in friend function
//objects are received in friend function as parameters as tupe Abc and Xyz 
{
	int R;
	R = OBJA.a + OBJX.x;
	cout<<"sum="<<R<<endl;
	
}

int main()
{
	Abc objA;
	objA.set_a(10);
	objA.display_a();
	
	Xyz objX;
	objX.set_x(20);
	objX.display_x();
	
	sum(objA,objX);
	
	return 0;
}