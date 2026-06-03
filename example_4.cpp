/* Accessing private and public data variables, message passing using object
*/
#include<iostream>
using namespace std;

class student
{
	int regno;
	
	public:
		int age;
		void put_data(int r)
		{
			regno = r;
			
		}
		void display()
		{
			cout<<"regno :"<<regno<<endl;
			cout<<"age :"<<age<<endl;
			
		}
};

int main()
{
	student obj1;
	cout<<"size of ob1j1 :"<<sizeof(obj1)<<endl;
	
	obj1.put_data(45);
	obj1.display();   // invalid because age is not yet passed or given, this method will display age = 0
	obj1.age = 21;    // valid becoz age is defined
	
	
	obj1.display();   // now this function can display age also
	
	//obj1.regno = 98;      // error : becoz regno is private data variable	
	
	student obj2;
	cout<<"size of obj2 :"<<sizeof(obj2)<<endl;
	
	obj2.put_data(78);
	obj2.age = 23;
	obj2.display();
	
	return 0;
}

