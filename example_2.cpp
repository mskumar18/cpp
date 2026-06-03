/*
This program demonstrates accessing pulic mem fun using 2 objects
*/
#include<iostream>
using namespace std;

class student
{
	int regno;
	
	public:
		void put_regno()
		{
			cout<<"enter regno:"<<endl;
			cin>>regno;
		}
		void display_regno();
		
};

void student::display_regno()
{
	cout<<"regno="<<regno<<endl;
}

int main()
{
	
	// using 2 objects and accessing the public member functions
	
	student obj1;  // creating 1st object
	
	cout<<"size of obj1 is"<<sizeof(obj1)<<endl;
	
	obj1.put_regno();
	obj1.display_regno();
	
	student obj2;   // creating 2nd object
	
    cout<<"size of obj2 is"<<sizeof(obj2)<<endl;
	
	obj2.put_regno();
	obj2.display_regno();
	
	return 0;
	
}