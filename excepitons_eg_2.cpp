/*
Example : 1
*/

#include<iostream>
using namespace std;

void fun();

int main()
{
	int a,b,c;
	cout<<"enter two numbers a and b"<<endl;
	cin>>a>>b;  //10,0
	c = a/b;
	cout<<"the value of c is:"<<c<<endl;
	cout<<"hello"<<endl;
	fun();
	
	return 0;
}

void fun()
{
	cout<<"hello functions"<<endl;
}