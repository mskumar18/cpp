/* Nesting mem fucntion
*/

#include<iostream>
using namespace std;

class student
{
	int regno;  // private member data variable
	
	public:
		int age;    // public member data variable
		void put_regno(int r, int a)
		{
			regno = r;
			age = a;
			display();  // mem fucntion is nested here
			
		}
		
		void display();   // mem function
		
};

void student::display()
{
	cout<<"regno ="<<regno<<endl;
	cout<<"age ="<<age<<endl;
	
}


int main()
{
	student obj1;   // creating object obj1
	cout<<"size of obj1:"<<sizeof(obj1)<<endl;
	
	obj1.put_regno(101,23);   // message passing
	
	
	student obj2;
	cout<<"size of obj2:"<<sizeof(obj2)<<endl;
	
	obj2.put_regno(202,24);  // message passing
	obj2.age = 20;    // accessing public data variable
	obj2.display();     // accessing public mem function
	
	
	return 0;
	
}














