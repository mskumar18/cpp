/*
The below program demonstrates single level inheritance with VM private
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


class Derived:Base
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
	set_B123(1,2,3);
	D1 = d1;
	D2 = d2;
	D3 = d3;
	
}

void Derived::display_D()
{
	display_B();
	cout<<"D1="<<D1<<endl;
	cout<<"D2="<<D2<<endl;
	cout<<"D3="<<D3<<endl;
	
}

void Derived::sum()
{
	int s;
	s = D1+D2+D3+D3+return_B1()+return_B2();
	cout<<"sum="<<s<<endl;
}



int main()
{
	Derived ObjD;
	
	ObjD.set_D123(8,9,10);
	ObjD.display_D();
	ObjD.sum();
	
	//ObjD.set_B123(1,2,3);
	//ObjD.display_B();
	//ObjD.sum();
	
	return 0;	 
	
}


