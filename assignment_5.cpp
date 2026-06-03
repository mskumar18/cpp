/*
Assignment 5

*/

#include<iostream>
#include<string.h>
using namespace std;


class person
{
	char *fname;
	char *lname;
	char *name;
	
	public:
		person();   // default constructor declaration
		
		person(char *x, char *y)   // parameterized constructor definition
		{
			fname = new char;  // dynamic memory allocation
			fname = strcpy(fname,x);
			lname = new char;
			lname = strcpy(lname,y);
		}
		
		void put_data()
		{
			cout<<fname<<endl;
			cout<<lname<<endl;
			name = new char;
			name = strcat(fname,lname);
			cout<<"\nthe full name is now:"<<name<<endl;
		}
		
		~person(void);
		
		
};

person::person()
{
	fname = new char;
	strcpy(fname,"somesh");
	lname = new char;
	strcpy(lname,"kumar");
	name = new char;
	name = strcat(fname,lname);
}

person::~person()
{
	cout<<"destructor"<<endl;
	delete fname;
	delete lname;
}


int main()
{
	person p1,p2("hello","everyone"),p3;
	p1.put_data();
	p2.put_data();
	p3.put_data();
	
	
	return 0;
}