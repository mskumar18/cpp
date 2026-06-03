/*
Swapping by value and reference
*/

#include<iostream>
using namespace std;

void swap_value(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"The function by value method"<<endl;
	cout<<"now the value of m and n are:"<<a<<"and"<<b<<endl;
	
}

void swap_reference(int &a, int &b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}

int main()
{
	int m,n;
	cout<<"enter the values of m and n"<<endl;
	cin>>m>>n;
	swap_reference(m,n);
	cout<<"The function by reference method"<<endl;
	cout<<"now the value of m and n are:"<<m<<"and"<<n<<endl;
	swap_value(m,n);
	
	return 0;
}