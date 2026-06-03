/* 
The below program demonstrates message passing
*/
#include<iostream>
using namespace std;

class student
{
	int regno;
	
	public:
		void put_regno(int r)
		{
			regno = r;
		}
		void display_regno();
};

void student::display_regno() 
{
	cout<<"regno ="<<regno<<endl;
	
}


int main()
{
	student obj1;
	cout<<"size of obj1 is:"<<sizeof(obj1)<<endl;
	
	obj1.put_regno(12);   // message passing : 12 is passed to int r
	obj1.display_regno();
	
	student obj2;
	cout<<"size of obj2 is:"<<sizeof(obj2)<<endl;
	
	obj2.put_regno(25);  // 25 is passed to int r
	obj2.display_regno();
	
	return 0;
	
}



