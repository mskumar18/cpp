/*
Memory management operators in cpp

new --> allocation ( like malloc in C )
delete --> deallocation ( like free )

In C:-

int *p;
p = (int*)malloc(4);   // p = (int*)malloc(n*sizeof(int));  // n*4 bytes
*p=12;



In Cpp:-

int *p = new int(5);   // in cpp, initialization, memory allocation and assigning
delete(p);   // dealloation


*/

#include<iostream>
using namespace std;

int main()
{
	int *p = new int(12);
	cout<<"p="<<*p<<endl;
	delete(p);
	
	return 0;
}












