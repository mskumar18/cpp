#include<iostream>
using namespace std;

int main()
{
	int *p = new int[5];  // allocating 5 bytes for 5 integers
	cout<<"enter 5 elements:"<<endl;
	for(int i = 0; i<5 ; i++)
	{
		cin>>p[i];
	}
	for(int i = 0; i<5 ; i++)
	{
		cout<<p[i]<<endl;
	}
	
	delete(p);  // deallocating memory
	
	return 0;
}