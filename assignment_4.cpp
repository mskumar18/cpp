/*
String reverse 
*/

#include<iostream>
#include<string.h>
using namespace std;



void rev(char *);


char p2[15];

int main()
{
	char p[15];
	cout<<"enter the string:"<<endl;
	cin>>p;
	rev(p);
	cout<<"the string before reverse is:"<<p<<endl;
	cout<<"the string after reverse is:"<<p2<<endl;
	
	return 0;
}


void rev(char *p1)
{
	int i,j;
	int len = strlen(p1);
	for(i = 0,j = len-1;i<len;i++,j--)
	{
		p2[i] = p1[j];
	}
	p2[i] = '\0';
	cout<<"the reverse string is:"<<p2<<endl;
}