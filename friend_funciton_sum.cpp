/*
Friend function :
Sum of two numbers using friend function
*/

#include<iostream>
using namespace std;

class addition
{
	int num1, num2;   // private data members
	// friend int sum(addition);   // friend function can be in private
	public:
		int num3;  // public data member
		void set(int n1, int n2, int n3);
		void display();
		friend int sum(addition);   // friend fun declared in public, return type can be anything
		                            // its argument if of type class name because it carrys object as parameter
		                            
};

void addition::set(int n1,int n2,int n3)
{
	num1 = n1;
	num2 = n2;
	num3 = n3;
	
}

void addition::display()
{
	cout<<"num1 ="<<num1<<endl;
	cout<<"num2 ="<<num2<<endl;
	cout<<"num3 ="<<num3<<endl;
	
}


/*
sum() is a frnd fun  - it can be kept in a private area also public area,
because frnd fun don't need object ot access private members
*/
int sum(addition OBJ1)   // frnd fun doesn't need class and scope in definition and it uses object as a parameter
{
	return(OBJ1.num1+OBJ1.num2+OBJ1.num3);  
}

int main()
{
	addition obj1;
	
	obj1.set(10,20,30);
	obj1.display();
	int add = sum(obj1);   // no need of object to access frnd function but abject is passed as a parameter to access mems of class
	
	cout<<"add ="<<add<<endl;
	
	return 0;
}

