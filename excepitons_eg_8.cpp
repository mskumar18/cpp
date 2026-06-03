/*
Example : 8

set_terminate exception

*/

#include<iostream>
using namespace std;

void fun(int b)
{
	try
	{
		if(b==1)
		throw b;
		else if(b==2)
		throw 'b';
		
	}
	catch(int x)
	{
		cout<<"caught value of x:"<<x<<endl;
		
	}
}

void my_fun()
{
	cout<<"this is my function"<<endl;
}

int main()
{
	int a;
	set_terminate(my_fun);
	cout<<"enter a number:"<<endl;
	cin>>a;
	fun(a);
	
	return 0;
}