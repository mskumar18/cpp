/*
Example : 4

Invoking funtion that generates exceptions
*/

#include<iostream>
using namespace std;

void divide(int a,int b, int c)
{
	cout<<"Inside function block"<<endl;
	if((a-b)!=0)
	{
		int d = (a-b)/c;
		cout<<"The value of d:"<<d<<endl;	
		
	}
	else
	{
		throw((a-b));
	}
}


int main()
{
	try
	{
		cout<<"Inside try block"<<endl;
		int p,q,r;
		cout<<"enter the values of p, q and r"<<endl;
		cin>>p>>q>>r;
		divide(p,q,r);
		divide(20,10,2);
		divide(30,6,6);
		
		
		
	}
	catch(int x)
	{
		cout<<"Exception caught:"<<x<<endl;
	}
	
	return 0;
}
