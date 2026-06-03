/*
Function overloading

Function with same name with different arguments:

1. number of arguments may differ (or)
2. data types must be different (or)
3. sequence must be different

*/

#include<iostream>
using namespace std;

void disp(int);
void disp(int, float);
void disp(int, float, char);
void disp(int, float, string);
void disp(double);


int main()
{
	disp(3);
	disp(4,7.8);
	disp(2,8.3,'B');
	disp(3,6.1,"hello");
	disp(8.3);
	
}


void disp(int A)
{
	cout<<"A="<<A<<endl;
}

void disp(int A, float B)
{
	cout<<"A="<<A<<endl;
	cout<<"B="<<B<<endl;
}

void disp(int A, float B, char C)
{
	cout<<"A="<<A<<endl;
	cout<<"B="<<B<<endl;
	cout<<"C="<<C<<endl;
}

void disp(int A, float B, string C)
{
	cout<<"A="<<A<<endl;
	cout<<"B="<<B<<endl;
	cout<<"C="<<C<<endl;
}

void disp(double D)
{
	cout<<"D="<<D<<endl;
}




