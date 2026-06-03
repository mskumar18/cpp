/*
Example : 7

Rethrowing the exception
*/

#include<iostream>
using namespace std;

void divide(double a, double b)
{
	try
	{
		if(b==0.0)
		throw b;
		else
		cout<<a/b<<endl;
	}
	catch(double n)
	{
		cout<<"the value of n is:"<<n<<endl;
		throw;
	}
	cout<<"end of function"<<endl;
}


int main()
{
	try
	{
		divide(10.5, 2.0);
		divide(20.5,0.0);
	}
	catch(double m)
	{
		cout<<"caught double inside the main function"<<m<<endl;
	}
	cout<<"end of main()\n";
	
	return 0;
	
}