/*
Defining derived class

class derived_class_name:visibilitymode base_class_name
{

    ....; 
    ....;  // mems of derived class
    
};

// derived class inherits some (or) all of the characters form base class
// A class can inherit properties from more than one class (or) from more than one level
//  : indicates that derived class is derived from the base class
// default visibility mode (VM) is private, it specifies whether the features of base class are privately derived (or) publicly derived



Example:-

class Abc:private Xyz  // Abc is derived class and Xyz is base class and it is private derivation
{
     ....;
     ....;   // mems of Abc
   

};

class Abc:public Xyz   // public derivation
{

      .....;
      .....;   // mems of Abc
};

class Abc: Xyz  // private derivation by default
{

    ....;
    ....;  // mems of Abc
}


*/



/*
The below program demonstrates single level inheritance with VM public
*/

#include<iostream>
using namespace std;

class Base
{
	int B1,B2;
	
	public:
		int B3;
		void set_B123(int b1, int b2, int b3);
		void display_B();
		int return_B1();
		int return_B2();
	
};

void Base::set_B123(int b1, int b2, int b3)
{
	B1 = b1;
	B2 = b2;
	B3 = b3;
	
}

void Base::display_B()
{
	cout<<"B1="<<B1<<endl;
	cout<<"B2="<<B2<<endl;
	cout<<"B3="<<B3<<endl;
}

int Base::return_B1()
{
	return B1;
}

int Base::return_B2()
{
	return B2;
}

class Derived:public Base
{
	int D1,D2;
	public:
		int D3;
		void set_D123(int d1, int d2, int d3);
		void display_D();
		void sum();
		
};


void Derived::set_D123(int d1, int d2, int d3)
{
	D1 = d1;
	D2 = d2;
	D3 = d3;
	
}

void Derived::display_D()
{
	cout<<"D1="<<D1<<endl;
	cout<<"D2="<<D2<<endl;
	cout<<"D3="<<D3<<endl;
}

void Derived::sum()
{
	int s;
	//s = D1+D2+D3+B3+B1+B2;  error, becoz B1 and B2 are private mems of Base class
	s = D1+D2+D3+B3+return_B1()+return_B2();
	cout<<"sum="<<s<<endl;
	
}

int main()
{
	Derived ObjD;
	
	ObjD.set_B123(1,2,3);
	ObjD.display_B();
	
	ObjD.set_D123(10,20,30);
	ObjD.display_D();
	
	ObjD.sum();
	
	return 0;
	
	
	
}