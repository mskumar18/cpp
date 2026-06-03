/*The below program is simple example program of showing syntax of class, class members,
 class members definitions and creating of object etc*/

#include<iostream>
using namespace std;


/*
   syntax of class declaration

class classname
{
	
	class members : - data variables
                      member functions
                      access specifiers
                         
    
	private:  // access specifier
		data variable names;
		member functions;
	
	
	public:  //access specifier
		data variablenames;
		member functions;
};
*/




class student   // class classname
{
	int regno; // by default private member ( data variable )
	
	public:   // public access specifier
		void put_regno()  // mem fucntion defined inside the class
		{
			regno = 110;
		}
		void get_regno();  // mem function declared inside the class
};

void student::get_regno()  // member fun defined outside the class
{
	cout<<"regno ="<<regno<<endl;
}

int main()
{
	/*
	syntax of object creation:
	classname objectname;
	*/
	
	student obj1;   // classname objectname
	cout<<"size of obj1 is:"<<sizeof(obj1)<<endl;
	
	// accessing public members using object
	obj1.put_regno();
	obj1.get_regno();
	
	return 0;

}
















