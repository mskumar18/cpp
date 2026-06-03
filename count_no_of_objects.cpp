/*
Static member function can access only other static member
Static member function can't access non-static members

Program to count no of objects

*/

#include<iostream>
using namespace std;

class Abc
{
	int a;
	static int count;  // static variable count
	
	public:
		void set_a(int A)
		{
			a = A;
		}
		void display();
		static void count_object();  
		/*
		public static mem function ( making it global, accessible to classes
		*/
};

int Abc::count;  // static variable definition, making it available to objects, making it global

void Abc::display()
{
	cout<<"a="<<a<<endl;
	cout<<"count="<<count<<endl;
}

void Abc::count_object()
{
	count++;
	cout<<"count="<<count<<endl;
	//cout<<"a="<<a<<endl;   // error - invalid usage of a in static mem function
	
}

int main()
{
	Abc obj1;
	obj1.set_a(10);
	obj1.display();
	//obj1.count_object();  or
	Abc::count_object();  // count = 1, because count_object() is a static mem fun, since it is global
	// we dont need object to access it
	
	
	Abc obj2;
	obj2.set_a(20);
	obj2.display();
	//obj2.count_object(); or
	Abc::count_object();  // count = 2, because count_object() is a static mem fun, since it is global
	// we dont need object to access it
	
	
	Abc obj3;
	obj3.set_a(30);
	obj3.display();
	//obj3.count_object(); or
    Abc::count_object();  // count = 3, because count_object() is a static mem fun, since it is global
	// we dont need object to access it
	
	return 0;
	
	
}







