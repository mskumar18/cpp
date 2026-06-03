/*
Private member function
*/

#include<iostream>
using namespace std;

class Abc
{
	int a;
	void display();   // private mem function
	
	public:
		int b;
		void set(int x, int y);
		void sum();
		
};

void Abc::set(int x, int y)
{
	a = x;
	b = y;
	display();   //private mem fun nested in the definition of public mem funtion
	
}

void Abc::display()    // definition of private mem function
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	
}

void Abc::sum()
{
	cout<<"sum="<<a+b<<endl;
}


int main()
{
	Abc obj1;
	obj1.set(1,3);
	obj1.sum();   // sum() is a public mem function
	
	// private mem function is accessed by the object with the help of public mem function
	// here display() fun is accessed by the object obj1 with the help of sum() fun
	
	//obj1.display()  // error becoz objects can't access private mem function
	
	return 0;
}






