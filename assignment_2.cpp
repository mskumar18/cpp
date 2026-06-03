/*
Assignment - 2 : Addition in class - sum of two numbers using member fucntion
*/


#include<iostream>
using namespace std;


class add
{
	int num1, num2;
	
	public:
		void set_num(int n1, int n2)
		{
			num1 = n1;
			num2 = n2;
		}
		void display();
		int sum();		
};


void add::display()
{
	cout<<"num1 ="<<num1<<endl;
	cout<<"num2 ="<<num2<<endl;
	
}

int add::sum()
{
	return (num1+num2);
}


int main()
{
	add obj1;
	
	obj1.set_num(10,20);
	obj1.display();
	
	int s = obj1.sum();
	cout<<"sum ="<<s<<endl;
	
}















