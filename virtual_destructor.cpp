/*
Virtual Destructor
*/

#include<iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"Base class constructor invoked"<<endl;
		}
		virtual ~Base()
		{
			cout<<"Base class destructor invoked"<<endl;
		}
		
};

class Derived:public Base
{
	public:
		Derived()
		{
			cout<<"Derived class constructor invoked"<<endl;
		}
		~Derived()
		{
			cout<<"Derived class destructor invoked"<<endl;
		}
};

int main()
{
	Base *bptr = new Derived;
	
	return 0;
	
}