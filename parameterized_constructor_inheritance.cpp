/*
The below program demonstrates Parameterized constructor in Inheritance
*/

#include<iostream>
using namespace std;

class Base
{
	int b1;
	public:
		Base()  // default constructor
		{
			b1 = 12;
		}
		Base(int B1)
		{
			b1 = B1;
		}
		void display_Base();
		
		
};

void Base::display_Base()
{
	cout<<"b1="<<b1<<endl;
	
}

class Derived:public Base
{
	int d1;
	public:
		Derived()  // default constructor
		{
			d1 = 18;
		}
		Derived(int B1,int D1):Base(B1)  // parameterized constructor receiving data and passing it to base class parameterized constructor
		{
			d1 = D1;
		}
		void display_Derived();
};

void Derived::display_Derived()
{
	cout<<"d1="<<d1<<endl;
	
}


int main()
{
	Derived Obj1;
	Obj1.display_Base();  //12
	Obj1.display_Derived();  //18
	
	Derived Obj2(88,74);
	Obj2.display_Base();  //88
	Obj2.display_Derived();  //74
	
	return 0;
	
}

