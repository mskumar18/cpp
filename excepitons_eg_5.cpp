/*
Example : 5

Multiple catch statements

*/

#include<iostream>
using namespace std;

void test(int x)
{
	try
	{
		if(x==0)
		{
			throw x;
		}
		else if(x==-1)
		{
			throw 'x';
		}
		else if(x==1)
		{
			throw 2.6;
		}
	}
	catch(int a)
	{
		cout<<"caught an integer:"<<a<<endl;
	}
	catch(char c)
	{
		cout<<"caught a character:"<<c<<endl;
	}
	catch(double c)
	{
		cout<<"caught a double:"<<c<<endl;
	}
}

int main()
{
	cout<<"x==1\n";
	test(0);
	cout<<"x==-1\n";
	test(-1);
	cout<<"x==2\n";
	test(1);
	
	return 0;
}