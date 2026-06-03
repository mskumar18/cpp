/* 
Example : 2
*/

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"enter the values of a and b:"<<endl;
	cin>>a>>b;
	int c = a-b;
	
	try
	{
		if(c!=0)
		{
			cout<<a/c<<endl;
		}
		else
		{
			throw(c);
		}
		
	}
	catch(int x)
	{
		cout<<"exception caught:"<<x<<endl;
	}
	return 0;
}