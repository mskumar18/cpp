/*
Program on virtual function
*/

#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void display()   // pure virtual function which doesn't have statements
		{
			
		}
		
};

class Derived1:public Base
{
	public:
		void display()
		{
			cout<<"Display from Derived1"<<endl;
		}
		
	
};

class Derived2:public Base
{
	public:
		void display()
		{
			cout<<"Display from Derived2"<<endl;
		}
		
};

int main()
{
	Base *bptr = new Base;
	
	bptr->display();
	
	Derived1 ObjD1;
	bptr = &ObjD1;
	bptr->display();
	
	Derived2 ObjD2;
	bptr = &ObjD2;
	bptr->display();
	
	//delete(bptr);
	
	return 0;
	
}