/*
Hybrid inheritance
*/

#include<iostream>
using namespace std;

class A
{
	int a1;
	public:
		//A(){}   // dummy default constructor
		
		A(int);
		void display_a()
		{
			cout<<"a1="<<a1<<endl;
		}
};

A::A(int A1)
{
	a1 = A1;
}

class B:virtual public A
{
	int b1;
	public:
		//B(){}  // dummy default constructor
		B(int A1,int B1):A(A1)
		{
			b1 = B1;
		}
		void display_b()
		{
			cout<<"b1"<<b1<<endl;
		}
 };
 
 class C:virtual public A
 {
 	int c1;
 	public:
 		//C(){}  // default dummy constructor
 		C(int A1, int C1):A(A1)
 		{
 			c1 = C1;
 			
		}
		void display_c()
		{
			cout<<"c1="<<c1<<endl;
		}
 };
 
 class D:public B, public C
 {
 	int d1;
 	public:
 		//D(){}  // dummy default constructor
 		D(int A1, int B1, int C1, int D1):B(A1,B1),C(A1,C1),A(A1)
 		{
 			d1 = D1;
 			
		}
		void display_d()
		{
			cout<<"d1="<<d1<<endl;
		}
 };
 
 
 int main()
 {
 	D Obj1(10,20,30,40);
 	
 	Obj1.display_a();
 	Obj1.display_b();
 	Obj1.display_c();
 	Obj1.display_d();
 	
 	//D ObjD1;  // will not work as classes doesn't have dummy default constructor ( they are commented intentionally )
 	
 	return 0;
 	
 	
 }
  

