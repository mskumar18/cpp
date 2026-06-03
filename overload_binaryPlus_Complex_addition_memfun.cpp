/*
Overloading "+" to do complex num addition using member function
*/

#include<iostream>
using namespace std;

class Complex
{
	int a;
	float b;
	
	public:
		Complex(){}  // default constructor
		
		Complex(int A,float B)
		{
			a = A;
			b = B;
		}
		void display();
		Complex operator +(Complex);
		
};

void Complex::display()
{
	cout<<a<<"+i"<<b<<endl;
}

Complex Complex::operator +(Complex OBJ)
{
	Complex temp;
	temp.a = a+OBJ.a;
	temp.b = b+OBJ.b;
	
	return temp;
}

int main()
{
	Complex Obj1(20,3.2);
	Obj1.display();
	
	Complex Obj2(30,4.3);
	Obj2.display();
	
	Complex Obj3;
	Obj3 = Obj1 + Obj2;
	Obj3.display();
	
	return 0;
	
}

