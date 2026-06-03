/*
Pointer to a class
*/

#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		void set(int A);
		void display();
		
};

void A::set(int A)
{
	a = A;
	
}

void A::display()
{
	cout<<"a="<<a<<endl;
}

int main()
{
	A *bptr = new A;  // Dynamic memory allocation to the pointer object 
	bptr->set(10);                     // i.e pointer objects are useful in creating objects at runtime
	bptr->display();
	
	delete(bptr);
	
	return 0;
	
}