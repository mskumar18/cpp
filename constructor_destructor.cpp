/*
constructor and destructor example
*/

#include<iostream>
using namespace std;

class Abc
{
	public:
		Abc()
		{
			cout<<"object is created"<<endl;
		}
		~Abc()
		{
			cout<<"object is destroyed"<<endl;
		}
		
};


int main()
{
	Abc obj1;    // obj1 created
	{
		Abc obj2;   //obj2 created
	}               // then obj2 destroyed
	{
		Abc obj3;   // obj3 created
	}               // then obj3 destroyed
	
	return 0;      // obj1 destroyed
	
}



