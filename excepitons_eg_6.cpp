/*
Example : 5

Catch all exceptions

catch(...)
{
    statements for processing all exceptions;
}
*/

#include<iostream>
using namespace std;

void test(int x)
{
	try
	{
		if(x==0)
		throw x;
		else if(x==-1)
		throw 'x';
		else if(x==1)
		throw 3.5;
	}
	catch(...)
	{
		cout<<"caught all exceptions"<<endl;
	}
	
}


int main()
{
	test(0);
	test(-1);
	test(1);
	
	return 0;
}

